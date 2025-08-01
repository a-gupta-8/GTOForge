
#pragma once

#include "cards.h"

// The deck of 52 cards
extern Card DECK[52];

// Initializes the deck with all 52 cards
void initializeDeck();

// Shuffles the DECK in-place
void shuffleDeck();
