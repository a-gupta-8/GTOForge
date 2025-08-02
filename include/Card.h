
#pragma once
#include <string>

// ANSI color codes
#define RED   "\033[31m"
#define RESET "\033[0m"

struct Face {
    std::string name;       // (e.g., "Queen")
    std::string shortName;  // (e.g., "Q")
};

struct Suit {
    std::string name;
    std::string symbol;
    std::string color; // ANSI escape code
};

struct Card {
    Face face;
    Suit suit;

    std::string toString() const;
};

// Declare all faces
extern const Face TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE;

// Declare all suits
extern const Suit SPADES, HEARTS, DIAMONDS, CLUBS;

// Declare all cards
extern const Card CA, C2, C3, C4, C5, C6, C7, C8, C9, CT, CJ, CQ, CK, HA, H2, H3, H4, H5, H6, H7, H8, H9, HT, HJ, HQ, HK, SA, S2, S3, S4, S5, S6, S7, S8, S9, ST, SJ, SQ, SK, DA, D2, D3, D4, D5, D6, D7, D8, D9, DT, DJ, DQ, DK;
