//
// Created by azhukov on 27.09.2021.
//

#ifndef GB_OOP_CARD_H
#define GB_OOP_CARD_H

#include <string>
#include <sstream>

namespace Blackjack {
    const unsigned CardsInSuit = 13;

    enum CardSuits
    {
        Clubs, Hearts, Diamonds, Spades
    };

    enum CardValues
    {
        Ace = 1,
        Two, Three, Four, Five, Six, Seven, Eight, Nine,
        Ten, Jack, Queen, King
    };

    enum CardSide
    {
        FaceUp = 0, FaceDown = 1
    };

    class Card {
    public:
        Card(CardValues pValue, CardSuits pSuit=Clubs, CardSide pSide=FaceUp): suit(pSuit), value(pValue), side(pSide) { }

        inline void Flip() { side = (side == FaceUp ? FaceDown : FaceUp); }
        inline bool getSide() const {return side == FaceUp;}
        inline CardSuits getSuit () const {return suit;}

        unsigned getValue() const;
        std::string getName() const;

    private:
        CardSuits suit;
        CardValues value;
        CardSide side;
    };
}



#endif //GB_OOP_CARD_H
