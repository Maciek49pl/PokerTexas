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

Player p1, p2, p3, p4;

vector<string> cardStack(CardName.size());
vector<int> cardUsed(CardName.size());

vector<string> cardOnTable;
int coinsOnTable;
int currentBid;

int player1Active = 0;
int player1CardCount = 0;

int player2Active = 0;
int player2CardCount = 0;

int player3Active = 0;
int player3CardCount = 0;

int player4Active = 0;
int player4CardCount = 0;

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

int Pair(Player p, int turn, string card) {
    int pairFound = 0;
    for (int x = 0; x < 2; x++) {
        if (p.hand[x].find(card) != string::npos) {
            pairFound++;
        }
        if (turn > 0) {
            for (int x = 0; x < 3; x++) {
                if (cardOnTable[x].find(card) != string::npos) {
                    pairFound++;
                }
            }
        }
        if (turn > 1) {
            if (cardOnTable[3].find(card) != string::npos) {
                pairFound++;
            }
        }

        if (turn > 2) {
            if (cardOnTable[4].find(card) != string::npos) {
                pairFound++;
            }
        }
    }
    if (pairFound == 3) {
        cout << "Znaleziono pare! " << card << endl;
        pairFound = 0;
        return 1;
    }
    else if (pairFound == 4) {
        cout << "Znaleziono trojke! " << card << endl;
        pairFound = 0;
        return 2;
    }
    else {
        pairFound = 0;
        return 0;
    }
}

void CalculateHand(Player p, int turn) {
    int result;
    for (int x = 0; x < 2; x++) {
        if (p.hand[x].find("Ace") != string::npos) {
            result = Pair(p,turn, "Ace");
        }
        if (p.hand[x].find("Two") != string::npos) {
            result = Pair(p, turn, "Two");
        }
        if (p.hand[x].find("Three") != string::npos) {
            result = Pair(p, turn, "Three");
        }
        if (p.hand[x].find("Four") != string::npos) {
            result = Pair(p, turn, "Four");
        }
        if (p.hand[x].find("Five") != string::npos) {
            result = Pair(p, turn, "Five");
        }
        if (p.hand[x].find("Six") != string::npos) {
            result = Pair(p, turn, "Six");
        }
        if (p.hand[x].find("Seven") != string::npos) {
            result = Pair(p, turn, "Seven");
        }
        if (p.hand[x].find("Eight") != string::npos) {
            result = Pair(p, turn, "Eight");
        }
        if (p.hand[x].find("Nine") != string::npos) {
            result = Pair(p, turn, "Nine");
        }
        if (p.hand[x].find("Ten") != string::npos) {
            result = Pair(p, turn, "Ten");
        }
        if (p.hand[x].find("Jack") != string::npos) {
            result = Pair(p, turn, "Jack");
        }
        if (p.hand[x].find("Queen") != string::npos) {
            result = Pair(p, turn, "Queen");
        }
        if (p.hand[x].find("King") != string::npos) {
            result = Pair(p, turn, "King");
        }
        if (p.hand[x].find("Clubs") != string::npos) {

        }
        if (p.hand[x].find("Diamonds") != string::npos) {

        }
        if (p.hand[x].find("Hearts") != string::npos) {

        }
        if (p.hand[x].find("Spades") != string::npos) {

        }
        if (turn > 1) {
            for (int x = 0; x < 3; x++) {
                if (cardOnTable[x].find("Ace") != string::npos) {
                    result = Pair(p, turn, "Ace");
                }
                if (cardOnTable[x].find("Two") != string::npos) {
                    result = Pair(p, turn, "Two");
                }
                if (cardOnTable[x].find("Three") != string::npos) {
                    result = Pair(p, turn, "Three");
                }
                if (cardOnTable[x].find("Four") != string::npos) {
                    result = Pair(p, turn, "Four");
                }
                if (cardOnTable[x].find("Five") != string::npos) {
                    result = Pair(p, turn, "Five");
                }
                if (cardOnTable[x].find("Six") != string::npos) {
                    result = Pair(p, turn, "Six");
                }
                if (cardOnTable[x].find("Seven") != string::npos) {
                    result = Pair(p, turn, "Seven");
                }
                if (cardOnTable[x].find("Eight") != string::npos) {
                    result = Pair(p, turn, "Eight");
                }
                if (cardOnTable[x].find("Nine") != string::npos) {
                    result = Pair(p, turn, "Nine");
                }
                if (cardOnTable[x].find("Ten") != string::npos) {
                    result = Pair(p, turn, "Ten");
                }
                if (cardOnTable[x].find("Jack") != string::npos) {
                    result = Pair(p, turn, "Jack");
                }
                if (cardOnTable[x].find("Queen") != string::npos) {
                    result = Pair(p, turn, "Queen");
                }
                if (cardOnTable[x].find("King") != string::npos) {
                    result = Pair(p, turn, "King");
                }
                if (cardOnTable[x].find("Clubs") != string::npos) {

                }
                if (cardOnTable[x].find("Diamonds") != string::npos) {

                }
                if (cardOnTable[x].find("Hearts") != string::npos) {

                }
                if (cardOnTable[x].find("Spades") != string::npos) {

                }
            }
        }
        if (turn > 2) {
            if (cardOnTable[3].find("Ace") != string::npos) {
                result = Pair(p, turn, "Ace");
            }
            if (cardOnTable[3].find("Two") != string::npos) {
                result = Pair(p, turn, "Two");
            }
            if (cardOnTable[3].find("Three") != string::npos) {
                result = Pair(p, turn, "Three");
            }
            if (cardOnTable[3].find("Four") != string::npos) {
                result = Pair(p, turn, "Four");
            }
            if (cardOnTable[3].find("Five") != string::npos) {
                result = Pair(p, turn, "Five");
            }
            if (cardOnTable[3].find("Six") != string::npos) {
                result = Pair(p, turn, "Six");
            }
            if (cardOnTable[3].find("Seven") != string::npos) {
                result = Pair(p, turn, "Seven");
            }
            if (cardOnTable[3].find("Eight") != string::npos) {
                result = Pair(p, turn, "Eight");
            }
            if (cardOnTable[3].find("Nine") != string::npos) {
                result = Pair(p, turn, "Nine");
            }
            if (cardOnTable[3].find("Ten") != string::npos) {
                result = Pair(p, turn, "Ten");
            }
            if (cardOnTable[3].find("Jack") != string::npos) {
                result = Pair(p, turn, "Jack");
            }
            if (cardOnTable[3].find("Queen") != string::npos) {
                result = Pair(p, turn, "Queen");
            }
            if (cardOnTable[3].find("King") != string::npos) {
                result = Pair(p, turn, "King");
            }
            if (cardOnTable[3].find("Clubs") != string::npos) {

            }
            if (cardOnTable[3].find("Diamonds") != string::npos) {

            }
            if (cardOnTable[3].find("Hearts") != string::npos) {

            }
            if (cardOnTable[3].find("Spades") != string::npos) {

            }
        }
        if (turn > 3) {
            if (cardOnTable[4].find("Ace") != string::npos) {
                result = Pair(p, turn, "Ace");
            }
            if (cardOnTable[4].find("Two") != string::npos) {
                result = Pair(p, turn, "Two");
            }
            if (cardOnTable[4].find("Three") != string::npos) {
                result = Pair(p, turn, "Three");
            }
            if (cardOnTable[4].find("Four") != string::npos) {
                result = Pair(p, turn, "Four");
            }
            if (cardOnTable[4].find("Five") != string::npos) {
                result = Pair(p, turn, "Five");
            }
            if (cardOnTable[4].find("Six") != string::npos) {
                result = Pair(p, turn, "Six");
            }
            if (cardOnTable[4].find("Seven") != string::npos) {
                result = Pair(p, turn, "Seven");
            }
            if (cardOnTable[4].find("Eight") != string::npos) {
                result = Pair(p, turn, "Eight");
            }
            if (cardOnTable[4].find("Nine") != string::npos) {
                result = Pair(p, turn, "Nine");
            }
            if (cardOnTable[4].find("Ten") != string::npos) {
                result = Pair(p, turn, "Ten");
            }
            if (cardOnTable[4].find("Jack") != string::npos) {
                result = Pair(p, turn, "Jack");
            }
            if (cardOnTable[4].find("Queen") != string::npos) {
                result = Pair(p, turn, "Queen");
            }
            if (cardOnTable[4].find("King") != string::npos) {
                result = Pair(p, turn, "King");
            }
            if (cardOnTable[4].find("Clubs") != string::npos) {

            }
            if (cardOnTable[4].find("Diamonds") != string::npos) {

            }
            if (cardOnTable[4].find("Hearts") != string::npos) {

            }
            if (cardOnTable[4].find("Spades") != string::npos) {

            }
        }
    }

    //p2
    int p2Hand;

    //p3
    int p3Hand;

    //p4
    int p4Hand;
}

// Aplikacja okienkowa

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

void AddMenus(HWND);
void AddControls(HWND);
void LoadImages(HWND, vector<string> cards, Player p1, Player p2, Player p3, Player p4);
void LoadDealingCards(HWND, int turn, vector<string> cards, Player p1, Player p2, Player p3, Player p4);
void StartGame(HWND);
void DealingCards(vector<string> cards);
int PlayGame(HWND hWnd, int turn, vector<string> cards, Player p1, Player p2, Player p3, Player p4, int cardOnTop);

HWND hWindowPlayers0, hWindowPlayers1, hWindowPlayers2, hWindowPlayers3, hWindowPlayers4, hWindowPlayers5, hWindowPlayers6;
HWND hWindowCoins0, hWindowCoins1, hWindowCoins2, hWindowCoins3, hWindowCoins4;
HWND hCoins, hOut, hPlayers, hLogo, hCard, hCard1;
HWND hP1Coins, hP2Coins, hP3Coins, hP4Coins;
HWND hP1Bet, hP2Bet, hP3Bet, hP4Bet;
HWND hCoinsOnTable, hCurrentBet, hSetBet;
HMENU hMenu;

HWND hCheck, hBet, hWait, hPass;
HWND hTurn;

LPCSTR players;
LPCSTR outCoins;

vector <string> stack;

int moveChoice;

int ai2Move;
int ai3Move;
int ai4Move;

int turn = 0;
LPCSTR lTurn;

int cardOnTop = 0;

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow) {
    WNDCLASSW wc = { 0 }; //definiuje klase okienka

    //przydziela parametry do okienka
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW; // definiuje tło okna
    wc.hCursor = LoadCursor(NULL, IDC_ARROW); // definiuje kursor okna
    wc.hInstance = hInst;
    wc.lpszClassName = L"myWindowClass"; //definiuje nazwe klasy
    wc.lpfnWndProc = WindowProcedure; //definiuje proces okna

    if (!RegisterClassW(&wc)) {
        return -1;
    }

    CreateWindowW(L"myWindowClass", L"My Window", WS_OVERLAPPEDWINDOW | WS_VISIBLE, 0, 0, 1920, 1080, NULL, NULL, NULL, NULL); //Tworzy okienko

    MSG msg = { 0 };
    while (GetMessage(&msg, NULL, NULL, NULL)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK WindowProcedure(HWND hWnd, UINT msg, WPARAM wp, LPARAM lp) {
    switch (msg) {
    case WM_COMMAND:
        switch (wp)
        {
        case FILE_MENU_NEW:
            MessageBeep(MB_HELP);
            break;
        case ONE_PLAYER:
            players = "1";
            p1.active = 1;
            p2.active = 0;
            p3.active = 0;
            p4.active = 0;
            SetWindowTextA(hPlayers, players);
            break;
        case TWO_PLAYER:
            players = "2";
            p1.active = 1;
            p2.active = 1;
            p3.active = 0;
            p4.active = 0;
            SetWindowTextA(hPlayers, players);
            break;
        case THREE_PLAYER:
            players = "3";
            p1.active = 1;
            p2.active = 1;
            p3.active = 1;
            p4.active = 0;
            SetWindowTextA(hPlayers, players);
            break;
        case FOUR_PLAYER:
            players = "4";
            p1.active = 1;
            p2.active = 1;
            p3.active = 1;
            p4.active = 1;
            SetWindowTextA(hPlayers, players);
            break;
        case SELECT_COINS:
            char coins[30], out[50];
            GetWindowTextA(hCoins, coins, 30);
            strcpy_s(out, coins);
            SetWindowTextA(hOut, out);

            break;
        case START_GAME:
            if (players != NULL && coins != NULL)
            {
                SetWindowTextA(hTurn, lTurn);
                DestroyWindow(hPlayers);
                DestroyWindow(hCoins);
                ShowWindow(hOut, SW_HIDE);
                DestroyWindow(hWindowPlayers0);
                DestroyWindow(hWindowPlayers1);
                DestroyWindow(hWindowPlayers2);
                DestroyWindow(hWindowPlayers3);
                DestroyWindow(hWindowPlayers4);
                DestroyWindow(hWindowPlayers5);
                DestroyWindow(hWindowPlayers6);
                DestroyWindow(hWindowCoins0);
                DestroyWindow(hWindowCoins1);
                DestroyWindow(hWindowCoins2);
                DestroyWindow(hWindowCoins3);
                DestroyWindow(hWindowCoins4);
                StartGame(hWnd);
                DealingCards(stack);
                LoadImages(hWnd, stack, p1, p2, p3, p4);
            }
            break;
        case CHECK:
            moveChoice = 1;
            turn = PlayGame(hWnd, turn, stack, p1, p2, p3, p4, cardOnTop);
            SetWindowTextA(hTurn, lTurn);
            LoadDealingCards(hWnd, turn, stack, p1, p2, p3, p4);
            MessageBeep(MB_ICONERROR);
            break;
        case BET:
            moveChoice = 2;
            turn = PlayGame(hWnd, turn, stack, p1, p2, p3, p4, cardOnTop);
            SetWindowTextA(hTurn, lTurn);
            LoadDealingCards(hWnd, turn, stack, p1, p2, p3, p4);
            MessageBeep(MB_ICONERROR);
            break;
        case PASS:
            moveChoice = 3;
            turn = PlayGame(hWnd, turn, stack, p1, p2, p3, p4, cardOnTop);
            SetWindowTextA(hTurn, lTurn);
            LoadDealingCards(hWnd, turn, stack, p1, p2, p3, p4);
            MessageBeep(MB_ICONERROR);
            break;
        case WAIT:
            moveChoice = 4;
            turn = PlayGame(hWnd, turn, stack, p1, p2, p3, p4, cardOnTop);
            SetWindowTextA(hTurn, lTurn);
            LoadDealingCards(hWnd, turn, stack, p1, p2, p3, p4);
            MessageBeep(MB_ICONERROR);
            break;
        case FILE_MENU_OPEN:
            MessageBeep(MB_ICONERROR);
            break;
        case FILE_MENU_EXIT:
            DestroyWindow(hWnd);
            break;
        }
        break;
    case WM_CREATE:
        stack = CardGeneration(hWnd);
        AddControls(hWnd);
        AddMenus(hWnd);
        break;
    case WM_DESTROY:
        PostQuitMessage(0);
        break;
    default:
        return DefWindowProcW(hWnd, msg, wp, lp);
    }
}

//dodaje menus
void AddMenus(HWND hWnd) {
    hMenu = CreateMenu();
    HMENU hFileMenu = CreateMenu();
    HMENU hSubMenu = CreateMenu();

    AppendMenu(hSubMenu, MF_STRING, NULL, L"CHANGE_TITLE");

    AppendMenu(hFileMenu, MF_STRING, FILE_MENU_NEW, L"New"); // Uzupelnia do zakladki FILE
    AppendMenu(hFileMenu, MF_POPUP, (UINT_PTR)hSubMenu, L"Open SubMenu");
    AppendMenu(hFileMenu, MF_SEPARATOR, NULL, NULL);
    AppendMenu(hFileMenu, MF_STRING, FILE_MENU_EXIT, L"Exit");

    AppendMenu(hMenu, MF_POPUP, (UINT_PTR)hFileMenu, L"File"); // dodaje FILE do okienka
    AppendMenu(hMenu, MF_STRING, 2, L"Help");

    SetMenu(hWnd, hMenu); //Ustawia menu
}

void AddControls(HWND hWnd) {
    hWindowPlayers0 = CreateWindowW(L"Static", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER, 290, 40, 240, 150, hWnd, NULL, NULL, NULL); // statyczny tekst
    hWindowPlayers1 = CreateWindowW(L"Static", L"Wybierz Liczbę graczy: ", WS_VISIBLE | WS_CHILD, 330, 50, 180, 80, hWnd, NULL, NULL, NULL); // statyczny tekst
    hWindowPlayers2 = CreateWindowW(L"Button", L"1", WS_VISIBLE | WS_CHILD | WS_BORDER, 300, 80, 50, 30, hWnd, (HMENU)ONE_PLAYER, NULL, NULL); // Przycisk
    hWindowPlayers3 = CreateWindowW(L"Button", L"2", WS_VISIBLE | WS_CHILD | WS_BORDER, 350, 80, 50, 30, hWnd, (HMENU)TWO_PLAYER, NULL, NULL); // Przycisk
    hWindowPlayers4 = CreateWindowW(L"Button", L"3", WS_VISIBLE | WS_CHILD | WS_BORDER, 400, 80, 50, 30, hWnd, (HMENU)THREE_PLAYER, NULL, NULL); // Przycisk
    hWindowPlayers5 = CreateWindowW(L"Button", L"4", WS_VISIBLE | WS_CHILD | WS_BORDER, 450, 80, 50, 30, hWnd, (HMENU)FOUR_PLAYER, NULL, NULL); // Przycisk
    hWindowPlayers6 = CreateWindowW(L"Static", L"Liczba graczy: ", WS_VISIBLE | WS_CHILD, 300, 120, 100, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
    hPlayers = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD, 400, 120, 100, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    hWindowCoins0 = CreateWindowW(L"Static", NULL, WS_VISIBLE | WS_CHILD | WS_BORDER, 290, 200, 240, 150, hWnd, NULL, NULL, NULL); // statyczny tekst
    hWindowCoins1 = CreateWindowW(L"Static", L"Podaj liczbe żetonów: ", WS_VISIBLE | WS_CHILD, 330, 210, 180, 80, hWnd, NULL, NULL, NULL); // statyczny tekst
    hCoins = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 340, 230, 120, 20, hWnd, NULL, NULL, NULL); // tekst z edycją
    hWindowCoins2 = CreateWindowW(L"Button", L"Wybierz", WS_VISIBLE | WS_CHILD | WS_BORDER, 365, 255, 70, 40, hWnd, (HMENU)SELECT_COINS, NULL, NULL); // Przycisk
    hWindowCoins3 = CreateWindowW(L"Static", L"Liczba żetonów: ", WS_VISIBLE | WS_CHILD, 300, 310, 120, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
    hOut = CreateWindow(L"Static", L"", WS_VISIBLE | WS_CHILD, 430, 310, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    hWindowCoins4 = CreateWindowW(L"Button", L"START", WS_VISIBLE | WS_CHILD | WS_BORDER, 365, 400, 70, 40, hWnd, (HMENU)START_GAME, NULL, NULL); // Przycisk
}

void StartGame(HWND hWnd) {
    char coins[30], out[50];
    GetWindowTextA(hOut, coins, 30);

    if (players == "1") {
        CreateWindowW(L"Static", L"GRACZ 1", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 750, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP1Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP1Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 680, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
    }
    if (players == "2") {
        CreateWindowW(L"Static", L"GRACZ 1", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 750, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP1Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP1Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 680, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        CreateWindowW(L"Static", L"GRACZ 2", WS_VISIBLE | WS_CHILD | WS_BORDER, 250 + 100, 400 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 250 + 100, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP2Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 270 + 100, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP2Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 200, 630, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
    }
    if (players == "3") {
        CreateWindowW(L"Static", L"GRACZ 1", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 750, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP1Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP1Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 680, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        CreateWindowW(L"Static", L"GRACZ 2", WS_VISIBLE | WS_CHILD | WS_BORDER, 250 + 100, 400 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 250 + 100, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP2Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 270 + 100, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP2Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 200, 630, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        CreateWindowW(L"Static", L"GRACZ 3", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 50, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP3Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 50, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP3Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 580, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
    }
    if (players == "4") {
        CreateWindowW(L"Static", L"GRACZ 1", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 750, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP1Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 780, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP1Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 680, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        CreateWindowW(L"Static", L"GRACZ 2", WS_VISIBLE | WS_CHILD | WS_BORDER, 250 + 100, 400 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 250 + 100, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP2Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 270 + 100, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP2Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 200, 630, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        CreateWindowW(L"Static", L"GRACZ 3", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 450 + 300, 50, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP3Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 50, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP3Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 580, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        CreateWindowW(L"Static", L"GRACZ 4", WS_VISIBLE | WS_CHILD | WS_BORDER, 650 + 800, 400 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        CreateWindowW(L"Static", L"$: ", WS_VISIBLE | WS_CHILD | WS_BORDER, 650 + 800, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
        hP4Coins = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 670 + 800, 430 - 20, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst

        hP4Bet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 400, 630, 70, 25, hWnd, NULL, NULL, NULL); // statyczny tekst
    }
    if (p1.active == 1) {
        p1.coins = stoi(coins);
        SetWindowTextA(hP1Coins, coins);
    }
    if (p2.active == 1) {
        p2.coins = stoi(coins);
        SetWindowTextA(hP2Coins, coins);
    }
    if (p3.active == 1) {
        p3.coins = stoi(coins);
        SetWindowTextA(hP3Coins, coins);
    }
    if (p4.active == 1) {
        p4.coins = stoi(coins);
        SetWindowTextA(hP4Coins, coins);
    }

    hCoinsOnTable = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 470 + 300, 630, 70, 25, hWnd, (HMENU)CHECK, NULL, NULL); // Przycisk

    hCheck = CreateWindowW(L"Button", L"Sprawdź", WS_VISIBLE | WS_CHILD | WS_BORDER, 950, 850, 100, 30, hWnd, (HMENU)CHECK, NULL, NULL); // Przycisk
    hCurrentBet = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 1060, 850, 100, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    hBet = CreateWindowW(L"Button", L"Postaw", WS_VISIBLE | WS_CHILD | WS_BORDER, 950, 880, 100, 30, hWnd, (HMENU)BET, NULL, NULL); // Przycisk
    hSetBet = CreateWindowW(L"Edit", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 1050, 880, 120, 20, hWnd, NULL, NULL, NULL); // tekst z edycją

    hPass = CreateWindowW(L"Button", L"Pas", WS_VISIBLE | WS_CHILD | WS_BORDER, 950, 910, 100, 30, hWnd, (HMENU)PASS, NULL, NULL); // Przycisk
    hWait = CreateWindowW(L"Button", L"Czekaj", WS_VISIBLE | WS_CHILD | WS_BORDER, 950, 940, 100, 30, hWnd, (HMENU)WAIT, NULL, NULL); // Przycisk

    hTurn = CreateWindowW(L"Static", L"", WS_VISIBLE | WS_CHILD | WS_BORDER, 1250, 650, 50, 30, hWnd, NULL, NULL, NULL); // Przycisk
}

void Ai(Player p, HWND hPBet, HWND hPCoins, int nr, int ai, int turn, int& aiMove, int& pass, int& currentBid, int& coins, int& playerBid) {
    if (pass == 0)
    {
        char setCoins[30];
        GetWindowTextA(hPCoins, setCoins, 30);
        aiMove = p.AiMove(nr, ai, currentBid, playerBid);
        if (aiMove == 0) {
            coins = stoi(setCoins);
            coinsOnTable = p.AiCheck(nr, coinsOnTable, currentBid, coins, playerBid);
            string sCoinsOnTable = to_string(coinsOnTable);
            LPCSTR lCoinsOnTable = sCoinsOnTable.c_str();
            SetWindowTextA(hCoinsOnTable, lCoinsOnTable);
            string sBid = to_string(currentBid);
            LPCSTR bid = sBid.c_str();
            SetWindowTextA(hPBet, bid);
            string sCoins = to_string(coins);
            LPCSTR lCoins = sCoins.c_str();
            SetWindowTextA(hPCoins, lCoins);
        }
        else if (aiMove == 1) {
            p.pass = p.AiPass(nr, pass);
        }
        else if (aiMove == 2) {
            p.AiWait(nr);
        }
        else if (aiMove == 3) {
            coins = stoi(setCoins);
            currentBid = p.AiBet(nr, coinsOnTable, currentBid, coins);
            string sBid = to_string(currentBid);
            LPCSTR bid = sBid.c_str();
            SetWindowTextA(hPBet, bid);
            string sCurrentBid = to_string(currentBid);
            LPCSTR lBid = sCurrentBid.c_str();
            SetWindowTextA(hCurrentBet, lBid);
        }
    }
}

void DealingCards(vector<string> cards) {
    for (int x = 0; x < stoi(players); x++) {
        if (p1.active == 1) {
            for (player1CardCount = 0; player1CardCount < 2; player1CardCount++) {
                if (cards[x].empty()) {
                    x++;
                    player1CardCount--;
                }
                else {
                    p1.hand.push_back(cards[x]);
                    cards[x].erase();
                }
            }
        }
        else {
            p1.hand.push_back("Puste");
            p1.hand.push_back("Puste");
        }
        if (p2.active == 1) {
            for (player2CardCount = 0; player2CardCount < 2; player2CardCount++) {
                if (cards[x].empty()) {
                    x++;
                    player2CardCount--;
                }
                else {
                    p2.hand.push_back(cards[x]);
                    cards[x].erase();
                }
            }
        }
        else {
            p2.hand.push_back("Puste");
            p2.hand.push_back("Puste");
        }
        if (p3.active == 1) {
            for (player3CardCount = 0; player3CardCount < 2; player3CardCount++) {
                if (cards[x].empty()) {
                    x++;
                    player3CardCount--;
                }
                else {
                    p3.hand.push_back(cards[x]);
                    cards[x].erase();
                }
            }
        }
        else {
            p3.hand.push_back("Puste");
            p3.hand.push_back("Puste");
        }
        if (p4.active == 1) {
            for (player4CardCount = 0; player4CardCount < 2; player4CardCount++) {
                if (cards[x].empty()) {
                    x++;
                    player4CardCount--;
                }
                else {
                    p4.hand.push_back(cards[x]);
                    cards[x].erase();
                }
            }
        }
        else {
            p4.hand.push_back("Puste");
            p4.hand.push_back("Puste");
        }
    }
}

int PlayGame(HWND hWnd, int turn, vector<string> cards, Player p1, Player p2, Player p3, Player p4, int cardOnTop) {
    if (p1.active == 1) { 
        cardOnTop = 2; 
        p1.ai = AiCharacter();
    }
    if (p2.active == 1) { 
        cardOnTop = 4; 
        p2.ai = AiCharacter();
    }
    if (p3.active == 1) { 
        cardOnTop = 6; 
        p3.ai = AiCharacter();
    }
    if (p4.active == 1) { 
        cardOnTop = 8; 
        p4.ai = AiCharacter();
    }

    do {
        //CalculateHand(p1, turn);
        if (moveChoice == 1) {
            //Sprawdź
            char setBet[30];
            GetWindowTextA(hP1Bet, setBet, 30);
            char setCoins[30];
            GetWindowTextA(hP1Coins, setCoins, 30);
            if (p1.coins >= currentBid) {
                int selectBid;
                if (currentBid > 0) {
                    selectBid = stoi(setBet);
                }
                else
                {
                    selectBid = 2;
                }
                p1.coins = stoi(setCoins);
                coinsOnTable += selectBid;
                currentBid = selectBid;
                p1.bid = currentBid;
                p1.coins -= p1.bid;
                string sCoinsOnTable = to_string(coinsOnTable);
                LPCSTR lCoinsOnTable = sCoinsOnTable.c_str();
                SetWindowTextA(hCoinsOnTable, lCoinsOnTable);
                string sCurrentBid = to_string(currentBid);
                LPCSTR lCurrentBid = sCurrentBid.c_str();
                SetWindowTextA(hP1Bet, lCurrentBid);
                string sCoins = to_string(p1.coins);
                LPCSTR lCoins = sCoins.c_str();
                SetWindowTextA(hP1Coins, lCoins);
                cout << "GRACZ 1 sprawdza i wpłaca " << selectBid << endl;
                Ai(p2, hP2Bet, hP2Coins, 2, p2.ai, turn, ai2Move, p2.pass, currentBid, p2.coins, p2.bid);
                Ai(p3, hP3Bet, hP3Coins, 3, p3.ai, turn, ai3Move, p3.pass, currentBid, p3.coins, p3.bid);
                Ai(p4, hP4Bet, hP4Coins, 4, p4.ai, turn, ai4Move, p4.pass, currentBid, p4.coins, p4.bid);
            }
        }
        if (moveChoice == 2) {
            //Postaw
            char setBet[30];
            GetWindowTextA(hSetBet, setBet , 30);
            char setCoins[30];
            GetWindowTextA(hP1Coins, setCoins, 30);
            if (p1.coins >= currentBid) {
                p1.coins = stoi(setCoins);
                int selectBid = stoi(setBet);
                coinsOnTable += selectBid;
                currentBid += selectBid;
                p1.bid = currentBid;
                p1.coins -= p1.bid;
                string sCoinsOnTable = to_string(coinsOnTable);
                LPCSTR lCoinsOnTable = sCoinsOnTable.c_str();
                SetWindowTextA(hCoinsOnTable, lCoinsOnTable);
                string sCurrentBid = to_string(currentBid);
                LPCSTR lCurrentBid = sCurrentBid.c_str();
                SetWindowTextA(hP1Bet, lCurrentBid);
                string sCoins = to_string(p1.coins);
                LPCSTR lCoins = sCoins.c_str();
                SetWindowTextA(hP1Coins, lCoins);
                cout << "GRACZ 1 stawia " << selectBid << " zetonow! " << endl;
                Ai(p2, hP2Bet, hP2Coins, 2, p2.ai, turn, ai2Move, p2.pass, currentBid, p2.coins, p2.bid);
                Ai(p3, hP3Bet, hP3Coins, 3, p3.ai, turn, ai3Move, p3.pass, currentBid, p3.coins, p3.bid);
                Ai(p4, hP4Bet, hP4Coins, 4, p4.ai, turn, ai4Move, p4.pass, currentBid, p4.coins, p4.bid);
            }
        }
        if (moveChoice == 3) {
            //Pas
            p1.pass = 1;
            cout << "GRACZ 1 pasuje" << endl;
            Ai(p2, hP2Bet, hP2Coins, 2, p2.ai, turn, ai2Move, p2.pass, currentBid, p2.coins, p2.bid);
            Ai(p3, hP3Bet, hP3Coins, 3, p3.ai, turn, ai3Move, p3.pass, currentBid, p3.coins, p3.bid);
            Ai(p4, hP4Bet, hP4Coins, 4, p4.ai, turn, ai4Move, p4.pass, currentBid, p4.coins, p4.bid);
            break;
        }
        if (moveChoice == 4) {
            if (p1.active == 1)
            {
                string passStatus;
                if (p1.pass == 0) {
                    passStatus = "Aktywny ";
                }
                else { passStatus = "Spasowal "; }
                cout << "GRACZ 1: " << passStatus << endl;
                cout << "Zetony: " << p1.coins << endl;
                cout << p1.hand[0] << ", " << p1.hand[1] << endl;
            }
            if (p2.active == 1)
            {
                string passStatus;
                if (p2.pass == 0) {
                    passStatus = "Aktywny ";
                }
                else { passStatus = "Spasowal "; }
                cout << "GRACZ 2: " << passStatus << endl;
                cout << "Zetony: " << p2.coins << endl;
                cout << p2.hand[0] << ", " << p2.hand[1] << endl;
            }
            if (p3.active == 1)
            {
                string passStatus;
                if (p3.pass == 0) {
                    passStatus = "Aktywny ";
                }
                else { passStatus = "Spasowal "; }
                cout << "GRACZ 3: " << passStatus << endl;
                cout << "Zetony: " << p3.coins << endl;
                cout << p3.hand[0] << ", " << p3.hand[1] << endl;
            }
            if (p4.active == 1)
            {
                string passStatus;
                if (p4.pass == 0) {
                    passStatus = "Aktywny ";
                }
                else { passStatus = "Spasowal "; }
                cout << "GRACZ 4: " << passStatus << endl;
                cout << "Zetony: " << p4.coins << endl;
                cout << p4.hand[0] << ", " << p4.hand[1] << endl;
            }
            cout << "Zetony na stole: " << coinsOnTable << endl;
            cout << "Obecny zaklad: " << currentBid << endl;
            if (cardOnTop > 2 + ((int)players * 2)) { cout << "Karty na stole: " << cardOnTable[0] << ", " << cardOnTable[1] << ", " << cardOnTable[2] << endl; }
            if (cardOnTop > 4 + ((int)players * 2)) { cout << "Karty na stole: " << cardOnTable[0] << ", " << cardOnTable[1] << ", " << cardOnTable[2] << cardOnTable[3] << endl; }
            if (cardOnTop > 6 + ((int)players * 2)) { cout << "Karty na stole: " << cardOnTable[0] << ", " << cardOnTable[1] << ", " << cardOnTable[2] << ", " << cardOnTable[3] << ", " << cardOnTable[4] << endl; }
        }

        if (((p1.pass == 0 && p1.bid == currentBid) || (p1.pass == 1 && p1.bid != currentBid)) && ((p2.pass == 0 && p2.bid == currentBid) || (p2.pass == 1 && p2.bid != currentBid)) && ((p3.pass == 0 && p3.bid == currentBid) || (p3.pass == 1 && p3.bid != currentBid)) && ((p4.pass == 0 && p4.bid == currentBid) || (p4.pass == 1 && p4.bid != currentBid))) {
            cout << "Rozdawanie kart... " << endl;
            if (turn == 0) { lTurn = "0"; }
            if (turn == 1)
            {
                for (int x = 0; x < 3; x++) {
                    if (cards[cardOnTop].empty()) {
                        cardOnTop++;
                    }
                    cardOnTop++;
                    cardOnTable.push_back(cards[cardOnTop]);
                }
                lTurn = "1";
            }
            if (turn == 2)
            {
                if (cards[cardOnTop] == "") {
                    cardOnTop++;
                }
                cout << "Karta: " << cards[cardOnTop] << ", " << cardOnTop << endl;
                cardOnTop++;
                cardOnTable.push_back(cards[cardOnTop]);
                lTurn = "2";
            }
            if (turn == 3)
            {
                if (cards[cardOnTop] == "") {
                    cardOnTop++;
                }
                cout << "Karta: " << cards[cardOnTop] << ", " << cardOnTop << endl;
                cardOnTop++;
                cardOnTable.push_back(cards[cardOnTop]);
                lTurn = "3";
            }
        }

        //Ustalenie zwyciescy
        if (p1.pass == 0 && p2.pass == 1 && p3.pass == 1 && p4.pass == 1) {
            p1.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 1! " << endl;
            p2.pass = 0;
            p3.pass = 0;
            p4.pass = 0;
            break;
        }
        else if (p1.pass == 1 && p2.pass == 0 && p3.pass == 1 && p4.pass == 1) {
            p2.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 2! " << endl;
            p1.pass = 0;
            p3.pass = 0;
            p4.pass = 0;
            break;
        }
        else if (p1.pass == 1 && p2.pass == 1 && p3.pass == 0 && p4.pass == 1) {
            p3.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 3! " << endl;
            p1.pass = 0;
            p2.pass = 0;
            p4.pass = 0;
            break;
        }
        else if (p1.pass == 1 && p2.pass == 1 && p3.pass == 1 && p4.pass == 0) {
            p4.coins += coinsOnTable;
            coinsOnTable = 0;
            cout << "Wygrywa Gracz 4! " << endl;
            p1.pass = 0;
            p2.pass = 0;
            p3.pass = 0;
            break;
        }

        if (p1.bid == currentBid && p1.pass == 0) { cout << "GRACZ 1 jeszcze gra! " << endl; }
        if (p2.bid == currentBid && p2.pass == 0) { cout << "GRACZ 2 jeszcze gra! " << endl; }
        if (p3.bid == currentBid && p3.pass == 0) { cout << "GRACZ 3 jeszcze gra! " << endl; }
        if (p4.bid == currentBid && p4.pass == 0) { cout << "GRACZ 4 jeszcze gra! " << endl; }

    } while ((p1.bid != currentBid || p1.pass != 0) && (p2.bid != currentBid || p2.pass != 0) && (p3.bid != currentBid || p3.pass != 0) && (p4.bid != currentBid || p4.pass != 0));
    cout << "Koniec tury " << endl;
    turn++;
    return turn;
}
// KONIEC APKI OKIENKOWEJ //