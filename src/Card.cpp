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
const Card SA = {ACE, SPADES};
const Card S2 = {TWO, SPADES};
const Card S3 = {THREE, SPADES};
const Card S4 = {FOUR, SPADES};
const Card S5 = {FIVE, SPADES};
const Card S6 = {SIX, SPADES};
const Card S7 = {SEVEN, SPADES};
const Card S8 = {EIGHT, SPADES};
const Card S9 = {NINE, SPADES};
const Card ST = {TEN, SPADES};
const Card SJ = {JACK, SPADES};
const Card SQ = {QUEEN, SPADES};
const Card SK = {KING, SPADES};

const Card CA = {ACE, CLUBS};
const Card C2 = {TWO, CLUBS};
const Card C3 = {THREE, CLUBS};
const Card C4 = {FOUR, CLUBS};
const Card C5 = {FIVE, CLUBS};
const Card C6 = {SIX, CLUBS};
const Card C7 = {SEVEN, CLUBS};
const Card C8 = {EIGHT, CLUBS};
const Card C9 = {NINE, CLUBS};
const Card CT = {TEN, CLUBS};
const Card CJ = {JACK, CLUBS};
const Card CQ = {QUEEN, CLUBS};
const Card CK = {KING, CLUBS};

const Card HA = {ACE, HEARTS};
const Card H2 = {TWO, HEARTS};
const Card H3 = {THREE, HEARTS};
const Card H4 = {FOUR, HEARTS};
const Card H5 = {FIVE, HEARTS};
const Card H6 = {SIX, HEARTS};
const Card H7 = {SEVEN, HEARTS};
const Card H8 = {EIGHT, HEARTS};
const Card H9 = {NINE, HEARTS};
const Card HT = {TEN, HEARTS};
const Card HJ = {JACK, HEARTS};
const Card HQ = {QUEEN, HEARTS};
const Card HK = {KING, HEARTS};

const Card DA = {ACE, DIAMONDS};
const Card D2 = {TWO, DIAMONDS};
const Card D3 = {THREE, DIAMONDS};
const Card D4 = {FOUR, DIAMONDS};
const Card D5 = {FIVE, DIAMONDS};
const Card D6 = {SIX, DIAMONDS};
const Card D7 = {SEVEN, DIAMONDS};
const Card D8 = {EIGHT, DIAMONDS};
const Card D9 = {NINE, DIAMONDS};
const Card DT = {TEN, DIAMONDS};
const Card DJ = {JACK, DIAMONDS};
const Card DQ = {QUEEN, DIAMONDS};
const Card DK = {KING, DIAMONDS};

// Method to convert card to string with color
std::string Card::toString() const {
    return suit.color + face.shortName + suit.symbol + RESET;
}
