
# ♠️ GTO Poker Solver (C++)

A command-line GTO (Game Theory Optimal) poker solver built in C++. This tool simulates decision-making in No-Limit Texas Hold’em, allowing users to set up custom game states and receive detailed strategic recommendations (fold, call, raise) based on equity, stack sizes, position, and opponent hand ranges.

---

## 🚀 Features

- 🃏 Fully customizable game state (up to 9 players)
- 📍 Position-aware decision making
- 💰 Stack and pot tracking
- 🧠 Solver outputs include:
  - Win/tie/loss probabilities
  - Estimated opponent hand ranges
  - Stack leverage & EV-based action advice
- 🔄 Real-time evaluation as flop, turn, and river are revealed
- 🔍 Planned: bluff modeling & player profiling

---

## 🎮 How to Use

1. **Compile the project**

```bash
g++ -std=c++17 -o solver main.cpp
```

2. Run the Program

./build/GTOForger

3. Interactively set the hand scenario:

  -  Number of players

  -  Stack sizes & positions

  -  Your hole cards

  -  Community cards (flop, turn, river)

4. Get solver output:

  -  Strategic recommendation (call, fold, raise)

  -  Detailed equity breakdown

  -  Context-aware reasoning (e.g., pot odds, range compression)

## 🛠️ Roadmap

- Bluff modeling (e.g., convert weak hands into bluffs)

- Opponent behavior tracking over time

- Range visualization

- Spot classification (e.g., vulnerable top pair, nutted draw)

 -   GUI (eventually)

## 📚 Core Poker Concepts

 -   Game Theory Optimal (GTO) modeling

 -   Equity calculation (Monte Carlo / exact enumeration)

 -   Pot odds, stack-to-pot ratios, implied odds

 -   Range narrowing based on position and action
