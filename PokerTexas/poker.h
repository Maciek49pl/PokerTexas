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

    int AiMove(int nr);
    int AiPass(int nr, int pass);
    void AiWait(int nr);
    int AiBet(int nr, int &coinsOnTable, int &currentBid, int &coins);
    int AiCheck(int nr, int &coinsOnTable, int &currentBid, int &coins);
    void AiChangeCoins(int &coins, int &currentBid);
};