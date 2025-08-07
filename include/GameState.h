#pragma once

#include <string>
#include "decl.h"
#include "Player.h"

class GameState {
  public:
    std::vector<Player> players;
    std::vector<Card> community_cards;
    double pot;
    Street current_street;
    int hero_idx;
    std::vector<double> current_bets;
    std::vector<Card> remaining_deck;
}
