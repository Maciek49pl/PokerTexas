#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <ctime>

using namespace std;

class Player {
public:
    int ai = 0;
    int active = 0;
    int pass = 0;
    int coins = 0;
    int bid = 0;
    vector<string> hand;

    int AiMove(int nr, int coinsOnTable, int currentBid);
};