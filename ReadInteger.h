//
// Created by azhukov on 09.10.2021.
//

#ifndef GB_OOP_READINTEGER_H
#define GB_OOP_READINTEGER_H

#include<iostream>
#include<algorithm>
#include<string>

namespace ReadInput {

    using uchar = unsigned char;

    /**
     * Read integer as one line from input
     * if not only one integer in line return false
     *
     * @param in
     * @param result
     * @return true is success and false otherwise
     */
    bool getInteger(std::istream &in, int &result) {
        std::string line;
        std::getline(in >> std::ws, line);
        const char spaces[] {' ', '\n', '\t'};
        line.erase(line.find_last_not_of(spaces) + 1);
        size_t sign_shift = (line[0] == '-' ? 1 : 0);
        if (line.empty() || std::count_if(line.begin() + sign_shift, line.end(),[](uchar c) { return !std::isdigit(c); })) {
            return false;
        }
        result = std::stoi(line);
        return true;
    }

    /**
     * Read first integer from istream
     *
     * @return
     */
    int getInteger(std::istream &in, std::ostream & out) {
        int res;
        in >> res;
        while(in.fail() || !isspace(in.peek()) ) {
            out << "Wrong input, please retry\n";
            in.clear();
            in.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            in >> res;
        }
        return res;
    }

}

#endif //GB_OOP_READINTEGER_H
