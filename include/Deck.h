
#pragma once

#include "Card.h"
#include <stack>

// The deck of 52 cards
extern Card DECK[52];

// Initializes the deck with all 52 cards
void initializeDeck();

// Shuffles the DECK in-place and returns a list of numbers from 0-51 in random order
// Note: returning a stack here so it becomes easy to pop values when dealing cards
std::stack<int> shuffleDeck();
