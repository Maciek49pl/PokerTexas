#include "poker.h"

int AiCharacter() {
    //0 - Spokojny
    //1 - Agresyny
    //2 - Pasywny
    //3 - Chaotyczny
    //4 - 
    //5 -
    int ai;
    //ai = rand() % 2;
    ai = 0;
    return ai;
}

int Player::AiMove(int nr, int ai, int currentBid, int playerBid) {
    int move;
    if (ai == 0) {
        if (currentBid == playerBid) {
            //wait
            move = 2;
        }
        else {
            //check or pass
            move = rand() % 2;
        }
    }

    if (ai == 1) {
        if (currentBid == playerBid) {
            //wait
            move = 2;
        }
        else {
            //check or pass
            move = rand() % 1;
        }
    }

    if (ai == 2) {
        if (currentBid == playerBid) {
            move = rand() % 4;
        }
        else {
            move = rand() % 3;
        }
    }
    return move;
}

int Player::AiPass(int nr, int &pass) {
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
    if (coins >= currentBid + selectBid) {
        coinsOnTable += selectBid;
        coins -= currentBid + selectBid;
        currentBid = currentBid + selectBid;
        cout << "GRACZ " << nr << " postawia " << selectBid << " zetonow! " << endl;
        return currentBid;
    }else{
        selectBid = coins;
        coinsOnTable += selectBid;
        coins -= selectBid;
        cout << "GRACZ " << nr << " idzie ALL IN postawia " << selectBid << " zetonow! " << endl;
        return currentBid;
    }
}

int Player::AiCheck(int nr, int &coinsOnTable, int &currentBid, int &coins, int &playerBid) {
    if (coins >= currentBid) {
        int selectBid;
        selectBid = currentBid;
        coinsOnTable += selectBid;
        coins -= selectBid;
        currentBid = selectBid;
        playerBid = currentBid;
        cout << "GRACZ " << nr << " sprawdza" << endl;
        return coinsOnTable;
    }
}