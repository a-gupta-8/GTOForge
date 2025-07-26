
#ifndef CARD_H
#define CARD_H

#include <string>

enum class Suit {
    Clubs,
    Diamonds,
    Hearts,
    Spades
};

enum class Face {
    Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten,
    Jack, Queen, King, Ace
};

struct Card {
    Suit suit;
    Face face;

    std::string toString() const;
};

#endif
