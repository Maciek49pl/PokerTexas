#include "poker.h"

int Player::AiMove(int nr, int coinsOnTable, int currentBid) {
    cout << "Obecna stawka: " << currentBid << endl;
    if (active == 1 && pass == 0) {
        cout << "Gracz " << nr << " mysli: " << endl;
        if (bid == currentBid) {
            ai = rand() % 4;
            switch (ai)
            {
            case 0:
                //Pas
                pass = 1;
                cout << "GRACZ " << nr << " pasuje" << endl;
                return currentBid;
                break;
            case 1:
                //Czekaj
                cout << "GRACZ " << nr << " czeka..." << endl;
                return currentBid;
                break;
            case 2:
                //Postaw
                if (coins >= currentBid) {
                    int selectBid;
                    selectBid = rand() % coins + 1;
                    coins -= selectBid;
                    cout << selectBid << " + " << coins << endl;
                    coinsOnTable += selectBid;
                    bid += (selectBid - currentBid);
                    cout << "GRACZ " << nr << " postawia " << selectBid << " zetonow! " << endl;
                    return currentBid;
                }
                break;
            case 3:
                //SprawdŸ
                if (coins >= currentBid) {
                    int selectBid;
                    selectBid = currentBid;
                    coins -= selectBid;
                    coinsOnTable += selectBid;
                    cout << "GRACZ " << nr << " sprawdza" << endl;
                    return currentBid;
                }
                break;
            }
        }
        else {
            ai = rand() % 3;
            switch (ai)
            {
            case 0:
                //Pas
                pass = 1;
                cout << "GRACZ " << nr << " pasuje" << endl;
                return currentBid;
                break;
            case 1:
                //Postaw
                if (coins >= currentBid) {
                    int selectBid;
                    selectBid = rand() % coins + 1;
                    coins -= selectBid;
                    coinsOnTable += selectBid;
                    bid += (selectBid - currentBid);
                    cout << "GRACZ " << nr << " postawia " << selectBid << " zetonow! " << endl;
                    return currentBid;
                }
                break;
            case 2:
                //SprawdŸ
                if (coins >= currentBid) {
                    int selectBid;
                    selectBid = currentBid;
                    coins -= selectBid;
                    coinsOnTable += selectBid;
                    cout << "GRACZ " << nr << " sprawdza" << endl;
                    return currentBid;
                }
                break;
            }
        }
    }
    return coinsOnTable;
}