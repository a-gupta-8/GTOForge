
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
extern const Card AC, 2C, 3C, 4C, 5C, 6C, 7C, 8C, 9C, TC, JC, QC, KC, AH, 2H, 3H, 4H, 5H, 6H, 7H, 8H, 9H, TH, JH, QH, KH, AS, 2S, 3S, 4S, 5S, 6S, 7S, 8S, 9S, TS, JS, QS, KS, AD, 2D, 3D, 4D, 5D, 6D, 7D, 8D, 9D, TD, JD, QD, KD;
