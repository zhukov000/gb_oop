//
// Created by azhukov on 09.10.2021.
//

#ifndef GB_OOP_ENDLL_H
#define GB_OOP_ENDLL_H

namespace NotStd {

    template< class CharT, class Traits >
    std::basic_ostream<CharT, Traits>& endll( std::basic_ostream<CharT, Traits>& os ) {
        os.put('\n');
        os.put('\n');
        os.flush();
        return os;
    }
}

#endif //GB_OOP_ENDLL_H
