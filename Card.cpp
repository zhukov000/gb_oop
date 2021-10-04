//
// Created by azhukov on 27.09.2021.
//

#include "Card.h"

namespace Blackjack
{

    unsigned Card::getValue() const {
        switch (value) {
            case Jack:
            case Queen:
            case King:
            case Ten:
                return 10;
            default:
                return static_cast<unsigned>(value);
        }
    }

    std::string Card::getName() const {
        std::ostringstream ss;
        std::string names[] = {"", "ace", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "jack", "queen", "king"};
        ss << names[static_cast<unsigned>(value)] << " of ";
        switch (suit) {
            case Clubs:
                ss << "clubs";
                break;
            case Spades:
                ss << "spades";
                break;
            case Hearts:
                ss << "hearts";
                break;
            case Diamonds:
                ss << "diamonds";
                break;
        }

        return ss.str();
    }

}