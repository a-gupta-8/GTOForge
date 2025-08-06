
#include "Card.h"
#include "Deck.h"
#include <iostream>

int main() {
    initializeDeck();
    std::stack<int> shuffledIndicies = shuffleDeck();
    int cardIndex = shuffledIndicies.top();
    shuffledIndicies.pop();
    return 0;
}
