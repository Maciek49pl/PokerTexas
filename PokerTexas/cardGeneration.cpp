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

vector<string> cardStack(CardName.size());
vector<int> cardUsed(CardName.size());

vector<string> CardGeneration(HWND hWnd) {
    srand(time(0));

    CreateWindowW(L"Static", L"Generowanie kart...", WS_VISIBLE | WS_CHILD, 0, 0, 150, 20, hWnd, NULL, NULL, NULL); // statyczny tekst

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
        string str = CardName[x];
        wstring temp = wstring(str.begin(), str.end());
        LPCWSTR text = temp.c_str();
        CreateWindowW(L"Static", text, WS_VISIBLE | WS_CHILD, 0, 16 + (x * 20), 150, 16, hWnd, NULL, NULL, NULL); // statyczny tekst
    }
    cout << "Talia kompletna! \n";

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
    for (int x = 0; x <= 51; x++) {
        string str = cardStack[x];
        wstring temp = wstring(str.begin(), str.end());
        LPCWSTR text = temp.c_str();
        CreateWindowW(L"Static", text, WS_VISIBLE | WS_CHILD, 128, 16 + (x * 20), 150, 16, hWnd, NULL, NULL, NULL); // statyczny tekst
        cout << x << ". " << cardStack[x] << endl;
    }
    return cardStack;
}
