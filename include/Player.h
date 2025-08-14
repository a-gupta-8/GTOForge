#pragma once

#include <string>
#include "decl.h"
#include "Card.h"
#include <array>
#include <vector>

class Player {
  public:
    Position position;
    double stack_size;
    bool in_hand;
    std::array<Card, 2> hole_cards; //hole_cards is standard term that refers to the 2 private cards each player gets
    std::vector<ActionLog> actions;
    PlayerType player_type;
    BehaviorStats stats;
};
