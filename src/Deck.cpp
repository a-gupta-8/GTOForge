
#include "deck.h"
#include <algorithm>
#include <random>
#include <chrono>

Card DECK[52];

void initializeDeck() {
    int index = 0;
    for (int s = HEARTS; s <= SPADES; ++s) {
        for (int f = ACE; f <= KING; ++f) {
            DECK[index++] = { static_cast<Face>(f), static_cast<Suit>(s) };
        }
    }
}

void shuffleDeck() {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::shuffle(DECK, DECK + 52, std::default_random_engine(seed));
}
