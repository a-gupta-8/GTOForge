
#include "Deck.h"
#include <algorithm>
#include <random>
#include <chrono>

Card DECK[52];

void initializeDeck() {
    DECK[0] = SA;
    DECK[1] = S2;
    DECK[2] = S3;
    DECK[3] = S4;
    DECK[4] = S5;
    DECK[5] = S6;
    DECK[6] = S7;
    DECK[7] = S8;
    DECK[8] = S9;
    DECK[9] = ST;
    DECK[10] = SJ;
    DECK[11] = SQ;
    DECK[12] = SK;
    DECK[13] = HA;
    DECK[14] = H2;
    DECK[15] = H3;
    DECK[16] = H4;
    DECK[17] = H5;
    DECK[18] = H6;
    DECK[19] = H7;
    DECK[20] = H8;
    DECK[21] = H9;
    DECK[22] = HT;
    DECK[23] = HJ;
    DECK[24] = HQ;
    DECK[25] = HK;
    DECK[26] = DA;
    DECK[27] = D2;
    DECK[28] = D3;
    DECK[29] = D4;
    DECK[30] = D5;
    DECK[31] = D6;
    DECK[32] = D7;
    DECK[33] = D8;
    DECK[34] = D9;
    DECK[35] = DT;
    DECK[36] = DJ;
    DECK[37] = DQ;
    DECK[38] = DK;
    DECK[39] = CA;
    DECK[40] = C2;
    DECK[41] = C3;
    DECK[42] = C4;
    DECK[43] = C5;
    DECK[44] = C6;
    DECK[45] = C7;
    DECK[46] = C8;
    DECK[47] = C9;
    DECK[48] = CT;
    DECK[49] = CJ;
    DECK[50] = CQ;
    DECK[51] = CK;
}

std::stack<int> shuffleDeck() {
    // Get a time-based seed
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();

    // Use the seed to initialize a random engine
    std::mt19937 engine(seed);

    // Shuffle the deck using std::shuffle
    std::shuffle(std::begin(DECK), std::end(DECK), engine);

    // create a temp vector to randomize indexes
    std::vector<int> indices(52);
    for (int i = 0; i < 52; ++i) {
        indices[i] = i;
    }

    // Seed with time
    std::shuffle(indices.begin(), indices.end(), std::default_random_engine(seed));

    // Push shuffled numbers onto stack
    std::stack<int> s;
    for (int num : indices) {
        s.push(num);
    }

    return s;
}
