#include "Card.h"
#include <iostream>

// Define faces
const Face TWO   = {"Two", "2"};
const Face THREE = {"Three", "3"};
const Face FOUR  = {"Four", "4"};
const Face FIVE  = {"Five", "5"};
const Face SIX   = {"Six", "6"};
const Face SEVEN = {"Seven", "7"};
const Face EIGHT = {"Eight", "8"};
const Face NINE  = {"Nine", "9"};
const Face TEN   = {"Ten", "T"};
const Face JACK  = {"Jack", "J"};
const Face QUEEN = {"Queen", "Q"};
const Face KING  = {"King", "K"};
const Face ACE   = {"Ace", "A"};

// Define suits
const Suit SPADES   = {"Spades",   u8"♠", ""};
const Suit HEARTS   = {"Hearts",   u8"♥", RED};
const Suit DIAMONDS = {"Diamonds", u8"♦", RED};
const Suit CLUBS    = {"Clubs",    u8"♧", ""};

// Define cards
const Card AS = {ACE, SPADES};
const Card 2S = {TWO, SPADES};
const Card 3S = {THREE, SPADES};
const Card 4S = {FOUR, SPADES};
const Card 5S = {FIVE, SPADES};
const Card 6S = {SIX, SPADES};
const Card 7S = {SEVEN, SPADES};
const Card 8S = {EIGHT, SPADES};
const Card 9S = {NINE, SPADES};
const Card TS = {TEN, SPADES};
const Card JS = {JACK, SPADES};
const Card QS = {QUEEN, SPADES};
const Card KS = {KING, SPADES};

const Card AC = {ACE, CLUBS};
const Card 2C = {TWO, CLUBS};
const Card 3C = {THREE, CLUBS};
const Card 4C = {FOUR, CLUBS};
const Card 5C = {FIVE, CLUBS};
const Card 6C = {SIX, CLUBS};
const Card 7C = {SEVEN, CLUBS};
const Card 8C = {EIGHT, CLUBS};
const Card 9C = {NINE, CLUBS};
const Card TC = {TEN, CLUBS};
const Card JC = {JACK, CLUBS};
const Card QC = {QUEEN, CLUBS};
const Card KC = {KING, CLUBS};

const Card AH = {ACE, HEARTS};
const Card 2H = {TWO, HEARTS};
const Card 3H = {THREE, HEARTS};
const Card 4H = {FOUR, HEARTS};
const Card 5H = {FIVE, HEARTS};
const Card 6H = {SIX, HEARTS};
const Card 7H = {SEVEN, HEARTS};
const Card 8H = {EIGHT, HEARTS};
const Card 9H = {NINE, HEARTS};
const Card TH = {TEN, HEARTS};
const Card JH = {JACK, HEARTS};
const Card QH = {QUEEN, HEARTS};
const Card KH = {KING, HEARTS};

const Card AD = {ACE, DIAMONDS};
const Card 2D = {TWO, DIAMONDS};
const Card 3D = {THREE, DIAMONDS};
const Card 4D = {FOUR, DIAMONDS};
const Card 5D = {FIVE, DIAMONDS};
const Card 6D = {SIX, DIAMONDS};
const Card 7D = {SEVEN, DIAMONDS};
const Card 8D = {EIGHT, DIAMONDS};
const Card 9D = {NINE, DIAMONDS};
const Card TD = {TEN, DIAMONDS};
const Card JD = {JACK, DIAMONDS};
const Card QD = {QUEEN, DIAMONDS};
const Card KD = {KING, DIAMONDS};

// Method to convert card to string with color
std::string Card::toString() const {
    return suit.color + face.shortName + suit.symbol + RESET;
}
