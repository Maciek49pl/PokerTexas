#include "poker.h"

int Player::AiMove(int nr, int coinsOnTable, int currentBid) {
    if (active == 1 && pass == 0) {
        cout << "Gracz " << nr << " mysli: " << endl;
        if (bid == currentBid) {
            ai = rand() % 3;
            switch (ai)
            {
            case 0:
                //Pas
                pass = 1;
                cout << "GRACZ " << nr << " pasuje" << endl;
                break;
            case 1:
                //Czekaj
                cout << "GRACZ " << nr << " czeka..." << endl;
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
                }
                break;
            }
        }
        else {
            ai = rand() % 2;
            switch (ai)
            {
            case 0:
                //Pas
                pass = 1;
                cout << "GRACZ " << nr << " pasuje" << endl;
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
                }
                break;
            }
        }
    }
    return coinsOnTable;
}