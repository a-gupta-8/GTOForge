// Declaration File for utility variables and classes
#pragma once

enum class Position {
  BTN, SM, BB, UTG, UTG1, MP, LJ, HJ, CO
};

enum class Action {
  Fold, Call, Check, Raise, Bet
};

enum class Street {
  Preflop, Flop, Turn, River
};

struct ActionLog {
  Action action;
  double amount;
  Street street;
};

enum class PlayerType {
  TightAggressive, TightPassive, LooseAggressive, LoosePassive
};

struct BehaviorStats {
    int hands_played = 0;
    int raises = 0;
    int bluffs = 0;
    int folds = 0;
    int showdowns = 0;
    int strong_showdowns = 0;
};
