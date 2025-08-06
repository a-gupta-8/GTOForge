#pragma once

#include <string>
#include "decl.h"
#include "Card.h"

class Player {
  private:
    Position position;
    double stack_size;
    bool in_hand;
    std::array<Card, 2> hole_cards; //hole_cards is standard term that refers to the 2 private cards each player gets
    std::vector<Action> actions;
    std::vector<ActionLog>;
    PlayerType player_type;
    BehaviorStats stats;
}
