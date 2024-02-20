#include "poker.h"

// a = Clubs
// b = Diamonds
// c = Hearts
// d = Spades

// 0 = Ace
// 1 = Two
// 2 = Three
// 3 = Four
// 4 = Five
// 5 = Six
// 6 = Seven
// 7 = Eight
// 8 = Nine
// 9 = Ten
// 10 = Jack
// 11 = Queen
// 12 = King

struct cardStruct {
    int cardNr;
    int cardIndex;
    char cardSuit;
};
vector<cardStruct> Card;
vector<string> CardName;

vector<string> cardOnTable;
int coinsOnTable;
int currentBid;

void Ai(Player p, int turn, int &aiMove, int &currentBid, int &coins){
    aiMove = p.AiMove(2);
    if (aiMove == 0) {
        p.pass = p.AiPass(2, p.pass);
    }
    else if (aiMove == 1) {
        p.AiWait(2);
    }
    else if (aiMove == 2) {
        currentBid = p.AiBet(2, coinsOnTable, currentBid, coins);
        //p.AiChangeCoins(coins, currentBid);
    }
    else if (aiMove == 3) {
        coinsOnTable = p.AiCheck(2, coinsOnTable, currentBid, coins);
        //p.AiChangeCoins(coins, currentBid);
    }
}

void CardGeneration() {
    srand(time(0));

    cout << "Generowanie kart \n";

    char y = '`';
    int z = 0;
    for (int x = 0; x <= 52; x++) {
        Card.push_back(cardStruct());
        Card[x].cardNr = x;
        Card[x].cardIndex = z;
        z++;
        Card[x].cardSuit = y;
        if (x % 13 == 0) {
            y++;
            z = 0;
        }
        cout << Card[x].cardNr << " " << Card[x].cardIndex << " " << Card[x].cardSuit << endl;
    }

    for (int x = 0; x <= 52; x++) {
        string number;
        string suit;
        string fullName;
        if (Card[x].cardIndex == 0) {
            number = "Ace";
        }
        if (Card[x].cardIndex == 1) {
            number = "Two";
        }
        if (Card[x].cardIndex == 2) {
            number = "Three";
        }
        if (Card[x].cardIndex == 3) {
            number = "Four";
        }
        if (Card[x].cardIndex == 4) {
            number = "Five";
        }
        if (Card[x].cardIndex == 5) {
            number = "Six";
        }
        if (Card[x].cardIndex == 6) {
            number = "Seven";
        }
        if (Card[x].cardIndex == 7) {
            number = "Eight";
        }
        if (Card[x].cardIndex == 8) {
            number = "Nine";
        }
        if (Card[x].cardIndex == 9) {
            number = "Ten";
        }
        if (Card[x].cardIndex == 10) {
            number = "Jack";
        }
        if (Card[x].cardIndex == 11) {
            number = "Queen";
        }
        if (Card[x].cardIndex == 12) {
            number = "King";
        }
        if (Card[x].cardSuit == 'a') {
            suit = " of Clubs";
        }
        if (Card[x].cardSuit == 'b') {
            suit = " of Diamonds";
        }
        if (Card[x].cardSuit == 'c') {
            suit = " of Hearts";
        }
        if (Card[x].cardSuit == 'd') {
            suit = " of Spades";
        }
        fullName = number.append(suit);
        CardName.push_back(fullName);
    }
    CardName[0].erase();
    for (int x = 0; x <= 52; x++) {
        cout << CardName[x] << endl;
    }
    cout << "Talia kompletna! \n";
}

int main()
{
    Player p1, p2, p3, p4;
    CardGeneration();
    vector<string> cardStack(CardName.size());
    vector<int> cardUsed(CardName.size());

    for (int x = 0; x < CardName.size(); x++) {
        int select;
        select = rand() % CardName.size();
        if (cardUsed[select] == 0) {
            cardUsed[select] = 1;
            cardStack[x] = CardName[select];
        }
        else {
            x--;
        }
    }
    for (int x = 0; x <= 52; x++) {
        cout << x << ". " << cardStack[x] << endl;
    }

    cout << "ROZDAWANIE KART: " << endl;
    int players;
    int player1Active = 0;
    int player1CardCount = 0;

    int player2Active = 0;
    int player2CardCount = 0;

    int player3Active = 0;
    int player3CardCount = 0;

    int player4Active = 0;
    int player4CardCount = 0;

    int ai2Move;
    int ai3Move;
    int ai4Move;

    cout << "Wpisz liczbe graczy: " << endl;
    cin >> players;
    switch (players)
    {
    case 1:
        p1.active = 1;
        p2.active = 0;
        p3.active = 0;
        p4.active = 0;
        break;
    case 2:
        p1.active = 1;
        p2.active = 1;
        p3.active = 0;
        p4.active = 0;
        break;
    case 3:
        p1.active = 1;
        p2.active = 1;
        p3.active = 1;
        p4.active = 0;
        break;
    case 4:
        p1.active = 1;
        p2.active = 1;
        p3.active = 1;
        p4.active = 1;
        break;
    default:
        cout << "BŁĄD" << endl;
        p1.active = 1;
        p2.active = 1;
        p3.active = 1;
        p4.active = 1;
        break;
    }

    int coins;
    cout << "Wpisz liczbe zetonow: " << endl;
    cin >> coins;
    if (p1.active == 1) {
        p1.coins = coins;
    }
    if (p2.active == 1) {
        p2.coins = coins;
    }
    if (p3.active == 1) {
        p3.coins = coins;
    }
    if (p4.active == 1) {
        p4.coins = coins;
    }

    for (int x = 0; x < players; x++) {
        if (p1.active == 1) {
            for (player1CardCount = 0; player1CardCount < 2; player1CardCount++) {
                if (cardStack[x].empty()) {
                    x++;
                    player1CardCount--;
                }
                else {
                    p1.hand.push_back(cardStack[x]);
                    cardStack[x].erase();
                }
            }
        }
        if (p2.active == 1) {
            for (player2CardCount = 0; player2CardCount < 2; player2CardCount++) {
                if (cardStack[x].empty()) {
                    x++;
                    player2CardCount--;
                }
                else {
                    p2.hand.push_back(cardStack[x]);
                    cardStack[x].erase();
                }
            }
        }
        if (p3.active == 1) {
            for (player3CardCount = 0; player3CardCount < 2; player3CardCount++) {
                if (cardStack[x].empty()) {
                    x++;
                    player3CardCount--;
                }
                else {
                    p3.hand.push_back(cardStack[x]);
                    cardStack[x].erase();
                }
            }
        }
        if (p4.active == 1) {
            for (player4CardCount = 0; player4CardCount < 2; player4CardCount++) {
                if (cardStack[x].empty()) {
                    x++;
                    player4CardCount--;
                }
                else {
                    p4.hand.push_back(cardStack[x]);
                    cardStack[x].erase();
                }
            }
        }
    }
    if (p1.active == 1)
    {
        cout << "GRACZ 1: " << endl;
        cout << "Zetony: " << p1.coins << endl;
        cout << p1.hand[0] << ", " << p1.hand[1] << endl;
    }
    if (p2.active == 1)
    {
        cout << "GRACZ 2: " << endl;
        cout << "Zetony: " << p2.coins << endl;
        cout << p2.hand[0] << ", " << p2.hand[1] << endl;
    }
    if (p3.active == 1)
    {
        cout << "GRACZ 3: " << endl;
        cout << "Zetony: " << p3.coins << endl;
        cout << p3.hand[0] << ", " << p3.hand[1] << endl;
    }
    if (p4.active == 1)
    {
        cout << "GRACZ 4: " << endl;
        cout << "Zetony: " << p4.coins << endl;
        cout << p4.hand[0] << ", " << p4.hand[1] << endl;
    }

    for (int turn = 0; turn < 3; turn++) {
        do {
            cout << "Co robisz?: " << endl;
            cout << "1. Sprawdz " << endl;
            cout << "2. Postaw " << endl;
            cout << "3. Pas " << endl;
            cout << "4. Status " << endl;
            string move;
            cin >> move;
            if (move == "1" || move == "Sprawdz") {
                //Sprawdź
                if (p1.coins >= currentBid) {
                    int selectBid;
                    if (currentBid > 0) {
                        selectBid = currentBid;
                    }
                    else
                    {
                        selectBid = 2;
                    }
                    p1.coins -= selectBid;
                    coinsOnTable += selectBid;
                    currentBid = selectBid;
                    cout << "GRACZ 1 sprawdza i wpłaca " << selectBid << endl;
                    Ai(p2, turn, ai2Move, currentBid, p2.coins);
                    Ai(p3, turn, ai3Move, currentBid, p3.coins);
                    Ai(p4, turn, ai4Move, currentBid, p4.coins);
                }
            }
            if (move == "2" || move == "Postaw") {
                //Postaw
                if (p1.coins >= currentBid) {
                    int selectBid;
                    cout << "Ile obstawiasz?: " << endl;
                    cin >> selectBid;
                    p1.coins -= selectBid;
                    coinsOnTable += selectBid;
                    currentBid += (selectBid - currentBid);
                    cout << "GRACZ 1 stawia " << selectBid << " zetonow! " << endl;
                    Ai(p2, turn, ai2Move, currentBid, p2.coins);
                    Ai(p3, turn, ai3Move, currentBid, p3.coins);
                    Ai(p4, turn, ai4Move, currentBid, p4.coins);

                }
            }
            if (move == "3" || move == "Pas") {
                //Pas
                p1.pass = 1;
                cout << "GRACZ 1 pasuje" << endl;
                Ai(p2, turn, ai2Move, currentBid, p2.coins);
                Ai(p3, turn, ai3Move, currentBid, p3.coins);
                Ai(p4, turn, ai4Move, currentBid, p4.coins);
                break;
            }
            if (move == "4" || move == "Status") {
                if (p1.active == 1)
                {
                    cout << "GRACZ 1: " << endl;
                    cout << "Zetony: " << p1.coins << endl;
                    cout << p1.hand[0] << ", " << p1.hand[1] << endl;
                }
                if (p2.active == 1)
                {
                    cout << "GRACZ 2: " << endl;
                    cout << "Zetony: " << p2.coins << endl;
                    cout << p2.hand[0] << ", " << p2.hand[1] << endl;
                }
                if (p3.active == 1)
                {
                    cout << "GRACZ 3: " << endl;
                    cout << "Zetony: " << p3.coins << endl;
                    cout << p3.hand[0] << ", " << p3.hand[1] << endl;
                }
                if (p4.active == 1)
                {
                    cout << "GRACZ 4: " << endl;
                    cout << "Zetony: " << p4.coins << endl;
                    cout << p4.hand[0] << ", " << p4.hand[1] << endl;
                }
                cout << "Zetony na stole: " << coinsOnTable << endl;
                cout << "Obecny zaklad: " << currentBid << endl;
            }
            cout << move << endl;
            cout << "Stoi na while... " << endl;
            if (p1.bid != currentBid && p2.bid != currentBid && p3.bid != currentBid && p4.bid != currentBid) {
                cout << "Warunek while spelnia sie..." << endl;
                cout << "GRACZ 1: " << p1.bid << " = " << currentBid << endl;
                cout << "GRACZ 2: " << p2.bid << " = " << currentBid << endl;
                cout << "GRACZ 3: " << p3.bid << " = " << currentBid << endl;
                cout << "GRACZ 4: " << p4.bid << " = " << currentBid << endl;
            }
            else {
                cout << "Niespelniony warunek while..." << endl;
                cout << "GRACZ 1: " << p1.bid << " = " << currentBid << endl;
                cout << "GRACZ 2: " << p2.bid << " = " << currentBid << endl;
                cout << "GRACZ 3: " << p3.bid << " = " << currentBid << endl;
                cout << "GRACZ 4: " << p4.bid << " = " << currentBid << endl;
            }
        } while (p1.bid != currentBid && p2.bid != currentBid && p3.bid != currentBid && p4.bid != currentBid);
        //Ustalenie zwyciescy
        cout << "Koniec tury " << endl;
        if (p1.pass == 0 && p2.pass == 1 && p3.pass == 1 && p4.pass == 1) {
            p1.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 1! " << endl;
        }
        else if (p1.pass == 1 && p2.pass == 0 && p3.pass == 1 && p4.pass == 1) {
            p2.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 2! " << endl;
        }
        else if (p1.pass == 1 && p2.pass == 1 && p3.pass == 0 && p4.pass == 1) {
            p3.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 3! " << endl;
        }
        else if (p1.pass == 1 && p2.pass == 1 && p3.pass == 1 && p4.pass == 0) {
            p4.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 4! " << endl;
        }
    }
    return 0;
}