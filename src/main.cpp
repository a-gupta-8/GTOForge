
#include "Card.h"
#include "Deck.h"
#include <iostream>

int main() {
    initializeDeck();
    std::stack<int> shuffledIndicies = shuffleDeck();
    int cardIndex = shuffledIndicies.top();
    shuffledIndicies.pop();
    std::cout << DECK[cardIndex].toString() << std::endl;
    for (int i = 0; i < 52; i++) {

      std::cout << DECK[i].toString() << std::endl;
    }
    return 0;
}
