#include "poker.h"

int Player::AiMove(int nr) {
    int ai;
    ai = rand() % 4;
    return ai;
}

int Player::AiPass(int nr, int pass) {
    pass = 1;
    cout << "GRACZ " << nr << " pasuje" << endl;
    return pass;
}

void Player::AiWait(int nr) {
    cout << "GRACZ " << nr << " czeka" << endl;
}

int Player::AiBet(int nr, int &coinsOnTable, int &currentBid, int &coins) {
    int selectBid;
    selectBid = rand() % coins + 1;
    coinsOnTable += selectBid;
    coins -= selectBid;
    currentBid = selectBid;
    cout << "GRACZ " << nr << " postawia " << selectBid << " zetonow! " << endl;
    return currentBid;
}

int Player::AiCheck(int nr, int &coinsOnTable, int &currentBid, int &coins) {
    if (coins >= currentBid) {
        int selectBid;
        selectBid = currentBid;
        coinsOnTable += selectBid;
        coins -= selectBid;
        currentBid = selectBid;
        cout << "GRACZ " << nr << " sprawdza" << endl;
        return coinsOnTable;
    }
}

void Player::AiChangeCoins(int &coins, int &currentBid) {
    coins -= currentBid;
    //return coins - currentBid;
}