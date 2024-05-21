#include "poker.h";

HWND hP1Hand0, hP2Hand0, hP3Hand0, hP4Hand0;
HWND hP1Hand1, hP2Hand1, hP3Hand1, hP4Hand1;
HWND hCardOnTable0, hCardOnTable1, hCardOnTable2;
HWND hCardOnTable3, hCardOnTable4;

HBITMAP hbAceOfClubs, hbAceOfDiamonds, hbAceOfHearts, hbAceOfSpades;
HBITMAP hbTwoOfClubs, hbTwoOfDiamonds, hbTwoOfHearts, hbTwoOfSpades;
HBITMAP hbThreeOfClubs, hbThreeOfDiamonds, hbThreeOfHearts, hbThreeOfSpades;
HBITMAP hbFourOfClubs, hbFourOfDiamonds, hbFourOfHearts, hbFourOfSpades;
HBITMAP hbFiveOfClubs, hbFiveOfDiamonds, hbFiveOfHearts, hbFiveOfSpades;
HBITMAP hbSixOfClubs, hbSixOfDiamonds, hbSixOfHearts, hbSixOfSpades;
HBITMAP hbSevenOfClubs, hbSevenOfDiamonds, hbSevenOfHearts, hbSevenOfSpades;
HBITMAP hbEightOfClubs, hbEightOfDiamonds, hbEightOfHearts, hbEightOfSpades;
HBITMAP hbNineOfClubs, hbNineOfDiamonds, hbNineOfHearts, hbNineOfSpades;
HBITMAP hbTenOfClubs, hbTenOfDiamonds, hbTenOfHearts, hbTenOfSpades;
HBITMAP hbJackOfClubs, hbJackOfDiamonds, hbJackOfHearts, hbJackOfSpades;
HBITMAP hbQueenOfClubs, hbQueenOfDiamonds, hbQueenOfHearts, hbQueenOfSpades;
HBITMAP hbKingOfClubs, hbKingOfDiamonds, hbKingOfHearts, hbKingOfSpades;

HBITMAP hLogoImage, hCardReverse, hCardImage, hGenerateImage;

void LoadImages(HWND hWnd, vector<string> cards, Player p1, Player p2, Player p3, Player p4) {
    hLogoImage = (HBITMAP)LoadImageW(NULL, L"PokerCards\\test.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hCardReverse = (HBITMAP)LoadImageW(NULL, L"PokerCards\\CardReverse.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbAceOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbAceOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbAceOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbAceOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbTwoOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTwoOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTwoOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTwoOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbThreeOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbThreeOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbThreeOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbThreeOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbFourOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFourOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFourOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFourOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbFiveOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFiveOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFiveOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFiveOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbSixOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSixOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSixOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSixOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbSevenOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSevenOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSevenOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSevenOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbEightOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbEightOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbEightOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbEightOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbNineOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbNineOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbNineOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbNineOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbTenOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTenOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTenOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTenOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbJackOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbJackOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbJackOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbJackOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbQueenOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbQueenOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbQueenOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbQueenOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbKingOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbKingOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbKingOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbKingOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    int cardOnTop = 0;
    if (p1.active == 1) {
        cardOnTop = 2;
    }
    if (p2.active == 1) {
        cardOnTop = 4;
    }
    if (p3.active == 1) {
        cardOnTop = 6;
    }
    if (p4.active == 1) {
        cardOnTop = 8;
    }

    int p1Hand0_x = 400 + 300, p1Hand0_y = 850;

    hP1Hand0 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p1.hand[0] == "Ace of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p1.hand[0] == "Ace of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p1.hand[0] == "Ace of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p1.hand[0] == "Ace of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p1.hand[0] == "Two of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p1.hand[0] == "Two of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p1.hand[0] == "Two of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p1.hand[0] == "Two of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p1.hand[0] == "Three of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p1.hand[0] == "Three of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p1.hand[0] == "Three of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p1.hand[0] == "Three of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p1.hand[0] == "Four of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p1.hand[0] == "Four of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p1.hand[0] == "Four of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p1.hand[0] == "Four of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p1.hand[0] == "Five of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p1.hand[0] == "Five of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p1.hand[0] == "Five of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p1.hand[0] == "Five of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p1.hand[0] == "Six of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p1.hand[0] == "Six of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p1.hand[0] == "Six of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p1.hand[0] == "Six of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p1.hand[0] == "Seven of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p1.hand[0] == "Seven of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p1.hand[0] == "Seven of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p1.hand[0] == "Seven of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p1.hand[0] == "Eight of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p1.hand[0] == "Eight of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p1.hand[0] == "Eight of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p1.hand[0] == "Eight of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p1.hand[0] == "Nine of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p1.hand[0] == "Nine of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p1.hand[0] == "Nine of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p1.hand[0] == "Nine of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p1.hand[0] == "Ten of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p1.hand[0] == "Ten of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p1.hand[0] == "Ten of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p1.hand[0] == "Ten of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p1.hand[0] == "Jack of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p1.hand[0] == "Jack of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p1.hand[0] == "Jack of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p1.hand[0] == "Jack of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p1.hand[0] == "Queen of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p1.hand[0] == "Queen of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p1.hand[0] == "Queen of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p1.hand[0] == "Queen of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p1.hand[0] == "King of Clubs")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p1.hand[0] == "King of Diamonds")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p1.hand[0] == "King of Hearts")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p1.hand[0] == "King of Spades")
    {
        SendMessageW(hP1Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p1Hand1_x = 500 + 300, p1Hand1_y = 850;

    hP1Hand1 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p1.hand[1] == "Ace of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p1.hand[1] == "Ace of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p1.hand[1] == "Ace of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p1.hand[1] == "Ace of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p1.hand[1] == "Two of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p1.hand[1] == "Two of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p1.hand[1] == "Two of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p1.hand[1] == "Two of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p1.hand[1] == "Three of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p1.hand[1] == "Three of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p1.hand[1] == "Three of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p1.hand[1] == "Three of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p1.hand[1] == "Four of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p1.hand[1] == "Four of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p1.hand[1] == "Four of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p1.hand[1] == "Four of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p1.hand[1] == "Five of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p1.hand[1] == "Five of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p1.hand[1] == "Five of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p1.hand[1] == "Five of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p1.hand[1] == "Six of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p1.hand[1] == "Six of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p1.hand[1] == "Six of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p1.hand[1] == "Six of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p1.hand[1] == "Seven of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p1.hand[1] == "Seven of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p1.hand[1] == "Seven of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p1.hand[1] == "Seven of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p1.hand[1] == "Eight of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p1.hand[1] == "Eight of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p1.hand[1] == "Eight of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p1.hand[1] == "Eight of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p1.hand[1] == "Nine of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p1.hand[1] == "Nine of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p1.hand[1] == "Nine of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p1.hand[1] == "Nine of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p1.hand[1] == "Ten of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p1.hand[1] == "Ten of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p1.hand[1] == "Ten of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p1.hand[1] == "Ten of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p1.hand[1] == "Jack of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p1.hand[1] == "Jack of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p1.hand[1] == "Jack of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p1.hand[1] == "Jack of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p1.hand[1] == "Queen of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p1.hand[1] == "Queen of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p1.hand[1] == "Queen of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p1.hand[1] == "Queen of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p1.hand[1] == "King of Clubs")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p1.hand[1] == "King of Diamonds")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p1.hand[1] == "King of Hearts")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p1.hand[1] == "King of Spades")
    {
        SendMessageW(hP1Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p2Hand0_x = 200 + 100, p2Hand0_y = 450;

    hP2Hand0 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p2.hand[0] == "Ace of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p2.hand[0] == "Ace of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p2.hand[0] == "Ace of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p2.hand[0] == "Ace of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p2.hand[0] == "Two of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p2.hand[0] == "Two of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p2.hand[0] == "Two of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p2.hand[0] == "Two of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p2.hand[0] == "Three of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p2.hand[0] == "Three of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p2.hand[0] == "Three of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p2.hand[0] == "Three of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p2.hand[0] == "Four of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p2.hand[0] == "Four of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p2.hand[0] == "Four of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p2.hand[0] == "Four of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p2.hand[0] == "Five of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p2.hand[0] == "Five of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p2.hand[0] == "Five of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p2.hand[0] == "Five of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p2.hand[0] == "Six of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p2.hand[0] == "Six of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p2.hand[0] == "Six of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p2.hand[0] == "Six of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p2.hand[0] == "Seven of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p2.hand[0] == "Seven of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p2.hand[0] == "Seven of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p2.hand[0] == "Seven of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p2.hand[0] == "Eight of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p2.hand[0] == "Eight of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p2.hand[0] == "Eight of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p2.hand[0] == "Eight of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p2.hand[0] == "Nine of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p2.hand[0] == "Nine of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p2.hand[0] == "Nine of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p2.hand[0] == "Nine of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p2.hand[0] == "Ten of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p2.hand[0] == "Ten of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p2.hand[0] == "Ten of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p2.hand[0] == "Ten of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p2.hand[0] == "Jack of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p2.hand[0] == "Jack of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p2.hand[0] == "Jack of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p2.hand[0] == "Jack of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p2.hand[0] == "Queen of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p2.hand[0] == "Queen of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p2.hand[0] == "Queen of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p2.hand[0] == "Queen of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p2.hand[0] == "King of Clubs")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p2.hand[0] == "King of Diamonds")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p2.hand[0] == "King of Hearts")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p2.hand[0] == "King of Spades")
    {
        SendMessageW(hP2Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p2Hand1_x = 300 + 100, p2Hand1_y = 450;

    hP2Hand1 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p2.hand[1] == "Ace of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p2.hand[1] == "Ace of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p2.hand[1] == "Ace of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p2.hand[1] == "Ace of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p2.hand[1] == "Two of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p2.hand[1] == "Two of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p2.hand[1] == "Two of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p2.hand[1] == "Two of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p2.hand[1] == "Three of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p2.hand[1] == "Three of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p2.hand[1] == "Three of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p2.hand[1] == "Three of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p2.hand[1] == "Four of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p2.hand[1] == "Four of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p2.hand[1] == "Four of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p2.hand[1] == "Four of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p2.hand[1] == "Five of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p2.hand[1] == "Five of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p2.hand[1] == "Five of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p2.hand[1] == "Five of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p2.hand[1] == "Six of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p2.hand[1] == "Six of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p2.hand[1] == "Six of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p2.hand[1] == "Six of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p2.hand[1] == "Seven of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p2.hand[1] == "Seven of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p2.hand[1] == "Seven of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p2.hand[1] == "Seven of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p2.hand[1] == "Eight of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p2.hand[1] == "Eight of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p2.hand[1] == "Eight of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p2.hand[1] == "Eight of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p2.hand[1] == "Nine of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p2.hand[1] == "Nine of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p2.hand[1] == "Nine of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p2.hand[1] == "Nine of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p2.hand[1] == "Ten of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p2.hand[1] == "Ten of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p2.hand[1] == "Ten of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p2.hand[1] == "Ten of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p2.hand[1] == "Jack of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p2.hand[1] == "Jack of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p2.hand[1] == "Jack of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p2.hand[1] == "Jack of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p2.hand[1] == "Queen of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p2.hand[1] == "Queen of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p2.hand[1] == "Queen of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p2.hand[1] == "Queen of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p2.hand[1] == "King of Clubs")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p2.hand[1] == "King of Diamonds")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p2.hand[1] == "King of Hearts")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p2.hand[1] == "King of Spades")
    {
        SendMessageW(hP2Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p3Hand0_x = 400 + 300, p3Hand0_y = 100;

    hP3Hand0 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p3.hand[0] == "Ace of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p3.hand[0] == "Ace of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p3.hand[0] == "Ace of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p3.hand[0] == "Ace of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p3.hand[0] == "Two of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p3.hand[0] == "Two of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p3.hand[0] == "Two of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p3.hand[0] == "Two of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p3.hand[0] == "Three of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p3.hand[0] == "Three of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p3.hand[0] == "Three of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p3.hand[0] == "Three of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p3.hand[0] == "Four of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p3.hand[0] == "Four of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p3.hand[0] == "Four of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p3.hand[0] == "Four of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p3.hand[0] == "Five of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p3.hand[0] == "Five of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p3.hand[0] == "Five of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p3.hand[0] == "Five of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p3.hand[0] == "Six of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p3.hand[0] == "Six of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p3.hand[0] == "Six of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p3.hand[0] == "Six of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p3.hand[0] == "Seven of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p3.hand[0] == "Seven of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p3.hand[0] == "Seven of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p3.hand[0] == "Seven of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p3.hand[0] == "Eight of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p3.hand[0] == "Eight of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p3.hand[0] == "Eight of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p3.hand[0] == "Eight of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p3.hand[0] == "Nine of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p3.hand[0] == "Nine of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p3.hand[0] == "Nine of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p3.hand[0] == "Nine of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p3.hand[0] == "Ten of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p3.hand[0] == "Ten of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p3.hand[0] == "Ten of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p3.hand[0] == "Ten of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p3.hand[0] == "Jack of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p3.hand[0] == "Jack of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p3.hand[0] == "Jack of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p3.hand[0] == "Jack of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p3.hand[0] == "Queen of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p3.hand[0] == "Queen of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p3.hand[0] == "Queen of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p3.hand[0] == "Queen of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p3.hand[0] == "King of Clubs")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p3.hand[0] == "King of Diamonds")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p3.hand[0] == "King of Hearts")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p3.hand[0] == "King of Spades")
    {
        SendMessageW(hP3Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p3Hand1_x = 500 + 300, p3Hand1_y = 100;

    hP3Hand1 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p3.hand[1] == "Ace of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p3.hand[1] == "Ace of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p3.hand[1] == "Ace of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p3.hand[1] == "Ace of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p3.hand[1] == "Two of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p3.hand[1] == "Two of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p3.hand[1] == "Two of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p3.hand[1] == "Two of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p3.hand[1] == "Three of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p3.hand[1] == "Three of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p3.hand[1] == "Three of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p3.hand[1] == "Three of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p3.hand[1] == "Four of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p3.hand[1] == "Four of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p3.hand[1] == "Four of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p3.hand[1] == "Four of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p3.hand[1] == "Five of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p3.hand[1] == "Five of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p3.hand[1] == "Five of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p3.hand[1] == "Five of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p3.hand[1] == "Six of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p3.hand[1] == "Six of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p3.hand[1] == "Six of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p3.hand[1] == "Six of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p3.hand[1] == "Seven of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p3.hand[1] == "Seven of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p3.hand[1] == "Seven of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p3.hand[1] == "Seven of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p3.hand[1] == "Eight of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p3.hand[1] == "Eight of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p3.hand[1] == "Eight of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p3.hand[1] == "Eight of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p3.hand[1] == "Nine of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p3.hand[1] == "Nine of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p3.hand[1] == "Nine of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p3.hand[1] == "Nine of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p3.hand[1] == "Ten of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p3.hand[1] == "Ten of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p3.hand[1] == "Ten of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p3.hand[1] == "Ten of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p3.hand[1] == "Jack of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p3.hand[1] == "Jack of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p3.hand[1] == "Jack of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p3.hand[1] == "Jack of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p3.hand[1] == "Queen of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p3.hand[1] == "Queen of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p3.hand[1] == "Queen of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p3.hand[1] == "Queen of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p3.hand[1] == "King of Clubs")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p3.hand[1] == "King of Diamonds")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p3.hand[1] == "King of Hearts")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p3.hand[1] == "King of Spades")
    {
        SendMessageW(hP3Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p4Hand0_x = 600 + 800, p4Hand0_y = 450;

    hP4Hand0 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p4.hand[0] == "Ace of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p4.hand[0] == "Ace of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p4.hand[0] == "Ace of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p4.hand[0] == "Ace of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p4.hand[0] == "Two of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p4.hand[0] == "Two of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p4.hand[0] == "Two of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p4.hand[0] == "Two of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p4.hand[0] == "Three of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p4.hand[0] == "Three of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p4.hand[0] == "Three of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p4.hand[0] == "Three of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p4.hand[0] == "Four of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p4.hand[0] == "Four of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p4.hand[0] == "Four of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p4.hand[0] == "Four of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p4.hand[0] == "Five of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p4.hand[0] == "Five of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p4.hand[0] == "Five of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p4.hand[0] == "Five of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p4.hand[0] == "Six of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p4.hand[0] == "Six of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p4.hand[0] == "Six of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p4.hand[0] == "Six of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p4.hand[0] == "Seven of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p4.hand[0] == "Seven of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p4.hand[0] == "Seven of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p4.hand[0] == "Seven of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p4.hand[0] == "Eight of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p4.hand[0] == "Eight of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p4.hand[0] == "Eight of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p4.hand[0] == "Eight of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p4.hand[0] == "Nine of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p4.hand[0] == "Nine of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p4.hand[0] == "Nine of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p4.hand[0] == "Nine of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p4.hand[0] == "Ten of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p4.hand[0] == "Ten of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p4.hand[0] == "Ten of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p4.hand[0] == "Ten of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p4.hand[0] == "Jack of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p4.hand[0] == "Jack of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p4.hand[0] == "Jack of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p4.hand[0] == "Jack of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p4.hand[0] == "Queen of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p4.hand[0] == "Queen of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p4.hand[0] == "Queen of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p4.hand[0] == "Queen of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p4.hand[0] == "King of Clubs")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p4.hand[0] == "King of Diamonds")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p4.hand[0] == "King of Hearts")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p4.hand[0] == "King of Spades")
    {
        SendMessageW(hP4Hand0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p4Hand1_x = 700 + 800, p4Hand1_y = 450;

    hP4Hand1 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

    if (p4.hand[1] == "Ace of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p4.hand[1] == "Ace of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p4.hand[1] == "Ace of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p4.hand[1] == "Ace of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p4.hand[1] == "Two of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p4.hand[1] == "Two of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p4.hand[1] == "Two of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p4.hand[1] == "Two of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p4.hand[1] == "Three of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p4.hand[1] == "Three of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p4.hand[1] == "Three of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p4.hand[1] == "Three of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p4.hand[1] == "Four of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p4.hand[1] == "Four of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p4.hand[1] == "Four of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p4.hand[1] == "Four of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p4.hand[1] == "Five of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p4.hand[1] == "Five of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p4.hand[1] == "Five of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p4.hand[1] == "Five of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p4.hand[1] == "Six of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p4.hand[1] == "Six of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p4.hand[1] == "Six of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p4.hand[1] == "Six of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p4.hand[1] == "Seven of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p4.hand[1] == "Seven of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p4.hand[1] == "Seven of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p4.hand[1] == "Seven of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p4.hand[1] == "Eight of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p4.hand[1] == "Eight of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p4.hand[1] == "Eight of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p4.hand[1] == "Eight of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p4.hand[1] == "Nine of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p4.hand[1] == "Nine of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p4.hand[1] == "Nine of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p4.hand[1] == "Nine of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p4.hand[1] == "Ten of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p4.hand[1] == "Ten of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p4.hand[1] == "Ten of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p4.hand[1] == "Ten of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p4.hand[1] == "Jack of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p4.hand[1] == "Jack of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p4.hand[1] == "Jack of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p4.hand[1] == "Jack of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p4.hand[1] == "Queen of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p4.hand[1] == "Queen of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p4.hand[1] == "Queen of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p4.hand[1] == "Queen of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p4.hand[1] == "King of Clubs")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p4.hand[1] == "King of Diamonds")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p4.hand[1] == "King of Hearts")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p4.hand[1] == "King of Spades")
    {
        SendMessageW(hP4Hand1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }
}

void EraseHand()
{
    DestroyWindow(hP1Hand0);
    DestroyWindow(hP1Hand1);
    DestroyWindow(hP2Hand0);
    DestroyWindow(hP2Hand1);
    DestroyWindow(hP3Hand0);
    DestroyWindow(hP3Hand1);
    DestroyWindow(hP4Hand0);
    DestroyWindow(hP4Hand1);
}

void LoadDealingCards(HWND hWnd, int turn, vector<string> cards, Player p1, Player p2, Player p3, Player p4)
{
    hLogoImage = (HBITMAP)LoadImageW(NULL, L"PokerCards\\test.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbAceOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbAceOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbAceOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbAceOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\AceOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbTwoOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTwoOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTwoOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTwoOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TwoOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbThreeOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbThreeOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbThreeOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbThreeOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\ThreeOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbFourOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFourOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFourOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFourOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FourOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbFiveOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFiveOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFiveOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbFiveOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\FiveOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbSixOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSixOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSixOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSixOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SixOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbSevenOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSevenOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSevenOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbSevenOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\SevenOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbEightOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbEightOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbEightOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbEightOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\EightOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbNineOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbNineOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbNineOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbNineOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\NineOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbTenOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTenOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTenOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbTenOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\TenOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbJackOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbJackOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbJackOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbJackOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\JackOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbQueenOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbQueenOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbQueenOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbQueenOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\QueenOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    hbKingOfClubs = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfClubs.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbKingOfDiamonds = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfDiamonds.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbKingOfHearts = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfHearts.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);
    hbKingOfSpades = (HBITMAP)LoadImageW(NULL, L"PokerCards\\KingOfSpades.bmp", IMAGE_BITMAP, 0, 0, LR_LOADFROMFILE);

    int cardOnTop = 0;
    if (p1.active == 1) {
        cardOnTop = 2;
    }
    if (p2.active == 1) {
        cardOnTop = 4;
    }
    if (p3.active == 1) {
        cardOnTop = 6;
    }
    if (p4.active == 1) {
        cardOnTop = 8;
    }

    if (turn == 0) {
        DestroyWindow(hCardOnTable0);
        DestroyWindow(hCardOnTable1);
        DestroyWindow(hCardOnTable2);
        DestroyWindow(hCardOnTable3);
        DestroyWindow(hCardOnTable4);
    }

    if (turn == 1)
    {
        int cardOnTable0_x = 600, cardOnTable0_y = 350;

        hCardOnTable0 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, cardOnTable0_x, cardOnTable0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

        if (cards[cardOnTop] == "Ace of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
        }

        if (cards[cardOnTop] == "Ace of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
        }
        if (cards[cardOnTop] == "Ace of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
        }

        if (cards[cardOnTop] == "Ace of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
        }

        if (cards[cardOnTop] == "Two of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
        }

        if (cards[cardOnTop] == "Two of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
        }

        if (cards[cardOnTop] == "Two of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
        }

        if (cards[cardOnTop] == "Two of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
        }

        if (cards[cardOnTop] == "Three of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
        }

        if (cards[cardOnTop] == "Three of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
        }

        if (cards[cardOnTop] == "Three of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
        }

        if (cards[cardOnTop] == "Three of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
        }

        if (cards[cardOnTop] == "Four of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
        }

        if (cards[cardOnTop] == "Four of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
        }

        if (cards[cardOnTop] == "Four of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
        }

        if (cards[cardOnTop] == "Four of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
        }

        if (cards[cardOnTop] == "Five of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
        }

        if (cards[cardOnTop] == "Five of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
        }

        if (cards[cardOnTop] == "Five of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
        }

        if (cards[cardOnTop] == "Five of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
        }

        if (cards[cardOnTop] == "Six of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
        }

        if (cards[cardOnTop] == "Six of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
        }

        if (cards[cardOnTop] == "Six of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
        }

        if (cards[cardOnTop] == "Six of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
        }

        if (cards[cardOnTop] == "Seven of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
        }

        if (cards[cardOnTop] == "Seven of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
        }

        if (cards[cardOnTop] == "Seven of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
        }

        if (cards[cardOnTop] == "Seven of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
        }

        if (cards[cardOnTop] == "Eight of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
        }

        if (cards[cardOnTop] == "Eight of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
        }

        if (cards[cardOnTop] == "Eight of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
        }

        if (cards[cardOnTop] == "Eight of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
        }

        if (cards[cardOnTop] == "Nine of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
        }

        if (cards[cardOnTop] == "Nine of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
        }

        if (cards[cardOnTop] == "Nine of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
        }

        if (cards[cardOnTop] == "Nine of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
        }

        if (cards[cardOnTop] == "Ten of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
        }

        if (cards[cardOnTop] == "Ten of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
        }

        if (cards[cardOnTop] == "Ten of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
        }

        if (cards[cardOnTop] == "Ten of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
        }

        if (cards[cardOnTop] == "Jack of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
        }

        if (cards[cardOnTop] == "Jack of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
        }

        if (cards[cardOnTop] == "Jack of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
        }

        if (cards[cardOnTop] == "Jack of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
        }

        if (cards[cardOnTop] == "Queen of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
        }

        if (cards[cardOnTop] == "Queen of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
        }

        if (cards[cardOnTop] == "Queen of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
        }

        if (cards[cardOnTop] == "Queen of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
        }

        if (cards[cardOnTop] == "King of Clubs")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
        }

        if (cards[cardOnTop] == "King of Diamonds")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
        }

        if (cards[cardOnTop] == "King of Hearts")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
        }

        if (cards[cardOnTop] == "King of Spades")
        {
            SendMessageW(hCardOnTable0, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
        }

        int cardOnTable1_x = 700, cardOnTable1_y = 350;

        hCardOnTable1 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, cardOnTable1_x, cardOnTable1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

        if (cards[cardOnTop + 1] == "Ace of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
        }

        if (cards[cardOnTop + 1] == "Ace of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
        }
        if (cards[cardOnTop + 1] == "Ace of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
        }

        if (cards[cardOnTop + 1] == "Ace of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
        }

        if (cards[cardOnTop + 1] == "Two of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
        }

        if (cards[cardOnTop + 1] == "Two of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Two of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
        }

        if (cards[cardOnTop + 1] == "Two of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
        }

        if (cards[cardOnTop + 1] == "Three of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
        }

        if (cards[cardOnTop + 1] == "Three of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Three of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
        }

        if (cards[cardOnTop + 1] == "Three of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
        }

        if (cards[cardOnTop + 1] == "Four of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
        }

        if (cards[cardOnTop + 1] == "Four of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Four of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
        }

        if (cards[cardOnTop + 1] == "Four of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
        }

        if (cards[cardOnTop + 1] == "Five of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
        }

        if (cards[cardOnTop + 1] == "Five of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Five of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
        }

        if (cards[cardOnTop + 1] == "Five of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
        }

        if (cards[cardOnTop + 1] == "Six of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
        }

        if (cards[cardOnTop + 1] == "Six of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Six of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
        }

        if (cards[cardOnTop + 1] == "Six of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
        }

        if (cards[cardOnTop + 1] == "Seven of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
        }

        if (cards[cardOnTop + 1] == "Seven of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Seven of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
        }

        if (cards[cardOnTop + 1] == "Seven of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
        }

        if (cards[cardOnTop + 1] == "Eight of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
        }

        if (cards[cardOnTop + 1] == "Eight of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Eight of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
        }

        if (cards[cardOnTop + 1] == "Eight of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
        }

        if (cards[cardOnTop + 1] == "Nine of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
        }

        if (cards[cardOnTop + 1] == "Nine of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Nine of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
        }

        if (cards[cardOnTop + 1] == "Nine of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
        }

        if (cards[cardOnTop + 1] == "Ten of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
        }

        if (cards[cardOnTop + 1] == "Ten of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Ten of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
        }

        if (cards[cardOnTop + 1] == "Ten of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
        }

        if (cards[cardOnTop + 1] == "Jack of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
        }

        if (cards[cardOnTop + 1] == "Jack of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Jack of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
        }

        if (cards[cardOnTop + 1] == "Jack of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
        }

        if (cards[cardOnTop + 1] == "Queen of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
        }

        if (cards[cardOnTop + 1] == "Queen of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "Queen of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
        }

        if (cards[cardOnTop + 1] == "Queen of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
        }

        if (cards[cardOnTop + 1] == "King of Clubs")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
        }

        if (cards[cardOnTop + 1] == "King of Diamonds")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
        }

        if (cards[cardOnTop + 1] == "King of Hearts")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
        }

        if (cards[cardOnTop + 1] == "King of Spades")
        {
            SendMessageW(hCardOnTable1, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
        }

        int cardOnTable2_x = 800, cardOnTable2_y = 350;

        hCardOnTable2 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, cardOnTable2_x, cardOnTable2_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

        if (cards[cardOnTop + 2] == "Ace of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
        }

        if (cards[cardOnTop + 2] == "Ace of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
        }
        if (cards[cardOnTop + 2] == "Ace of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
        }

        if (cards[cardOnTop + 2] == "Ace of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
        }

        if (cards[cardOnTop + 2] == "Two of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
        }

        if (cards[cardOnTop + 2] == "Two of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Two of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
        }

        if (cards[cardOnTop + 2] == "Two of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
        }

        if (cards[cardOnTop + 2] == "Three of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
        }

        if (cards[cardOnTop + 2] == "Three of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Three of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
        }

        if (cards[cardOnTop + 2] == "Three of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
        }

        if (cards[cardOnTop + 2] == "Four of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
        }

        if (cards[cardOnTop + 2] == "Four of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Four of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
        }

        if (cards[cardOnTop + 2] == "Four of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
        }

        if (cards[cardOnTop + 2] == "Five of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
        }

        if (cards[cardOnTop + 2] == "Five of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Five of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
        }

        if (cards[cardOnTop + 2] == "Five of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
        }

        if (cards[cardOnTop + 2] == "Six of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
        }

        if (cards[cardOnTop + 2] == "Six of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Six of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
        }

        if (cards[cardOnTop + 2] == "Six of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
        }

        if (cards[cardOnTop + 2] == "Seven of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
        }

        if (cards[cardOnTop + 2] == "Seven of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Seven of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
        }

        if (cards[cardOnTop + 2] == "Seven of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
        }

        if (cards[cardOnTop + 2] == "Eight of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
        }

        if (cards[cardOnTop + 2] == "Eight of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Eight of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
        }

        if (cards[cardOnTop + 2] == "Eight of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
        }

        if (cards[cardOnTop + 2] == "Nine of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
        }

        if (cards[cardOnTop + 2] == "Nine of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Nine of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
        }

        if (cards[cardOnTop + 2] == "Nine of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
        }

        if (cards[cardOnTop + 2] == "Ten of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
        }

        if (cards[cardOnTop + 2] == "Ten of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Ten of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
        }

        if (cards[cardOnTop + 2] == "Ten of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
        }

        if (cards[cardOnTop + 2] == "Jack of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
        }

        if (cards[cardOnTop + 2] == "Jack of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Jack of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
        }

        if (cards[cardOnTop + 2] == "Jack of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
        }

        if (cards[cardOnTop + 2] == "Queen of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
        }

        if (cards[cardOnTop + 2] == "Queen of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "Queen of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
        }

        if (cards[cardOnTop + 2] == "Queen of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
        }

        if (cards[cardOnTop + 2] == "King of Clubs")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
        }

        if (cards[cardOnTop + 2] == "King of Diamonds")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
        }

        if (cards[cardOnTop + 2] == "King of Hearts")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
        }

        if (cards[cardOnTop + 2] == "King of Spades")
        {
            SendMessageW(hCardOnTable2, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
        }
    }

    if (turn == 2)
    {

        int cardOnTable3_x = 900, cardOnTable3_y = 350;

        hCardOnTable3 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, cardOnTable3_x, cardOnTable3_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

        if (cards[cardOnTop + 3] == "Ace of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
        }

        if (cards[cardOnTop + 3] == "Ace of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
        }
        if (cards[cardOnTop + 3] == "Ace of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
        }

        if (cards[cardOnTop + 3] == "Ace of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
        }

        if (cards[cardOnTop + 3] == "Two of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
        }

        if (cards[cardOnTop + 3] == "Two of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Two of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
        }

        if (cards[cardOnTop + 3] == "Two of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
        }

        if (cards[cardOnTop + 3] == "Three of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
        }

        if (cards[cardOnTop + 3] == "Three of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Three of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
        }

        if (cards[cardOnTop + 3] == "Three of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
        }

        if (cards[cardOnTop + 3] == "Four of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
        }

        if (cards[cardOnTop + 3] == "Four of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Four of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
        }

        if (cards[cardOnTop + 3] == "Four of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
        }

        if (cards[cardOnTop + 3] == "Five of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
        }

        if (cards[cardOnTop + 3] == "Five of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Five of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
        }

        if (cards[cardOnTop + 3] == "Five of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
        }

        if (cards[cardOnTop + 3] == "Six of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
        }

        if (cards[cardOnTop + 3] == "Six of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Six of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
        }

        if (cards[cardOnTop + 3] == "Six of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
        }

        if (cards[cardOnTop + 3] == "Seven of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
        }

        if (cards[cardOnTop + 3] == "Seven of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Seven of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
        }

        if (cards[cardOnTop + 3] == "Seven of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
        }

        if (cards[cardOnTop + 3] == "Eight of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
        }

        if (cards[cardOnTop + 3] == "Eight of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Eight of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
        }

        if (cards[cardOnTop + 3] == "Eight of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
        }

        if (cards[cardOnTop + 3] == "Nine of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
        }

        if (cards[cardOnTop + 3] == "Nine of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Nine of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
        }

        if (cards[cardOnTop + 3] == "Nine of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
        }

        if (cards[cardOnTop + 3] == "Ten of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
        }

        if (cards[cardOnTop + 3] == "Ten of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Ten of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
        }

        if (cards[cardOnTop + 3] == "Ten of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
        }

        if (cards[cardOnTop + 3] == "Jack of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
        }

        if (cards[cardOnTop + 3] == "Jack of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Jack of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
        }

        if (cards[cardOnTop + 3] == "Jack of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
        }

        if (cards[cardOnTop + 3] == "Queen of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
        }

        if (cards[cardOnTop + 3] == "Queen of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "Queen of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
        }

        if (cards[cardOnTop + 3] == "Queen of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
        }

        if (cards[cardOnTop + 3] == "King of Clubs")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
        }

        if (cards[cardOnTop + 3] == "King of Diamonds")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
        }

        if (cards[cardOnTop + 3] == "King of Hearts")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
        }

        if (cards[cardOnTop + 3] == "King of Spades")
        {
            SendMessageW(hCardOnTable3, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
        }
    }

    if (turn == 3)
    {

        int cardOnTable4_x = 1000, cardOnTable4_y = 350;

        hCardOnTable4 = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, cardOnTable4_x, cardOnTable4_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst

        if (cards[cardOnTop + 4] == "Ace of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
        }

        if (cards[cardOnTop + 4] == "Ace of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
        }
        if (cards[cardOnTop + 4] == "Ace of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
        }

        if (cards[cardOnTop + 4] == "Ace of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
        }

        if (cards[cardOnTop + 4] == "Two of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
        }

        if (cards[cardOnTop + 4] == "Two of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Two of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
        }

        if (cards[cardOnTop + 4] == "Two of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
        }

        if (cards[cardOnTop + 4] == "Three of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
        }

        if (cards[cardOnTop + 4] == "Three of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Three of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
        }

        if (cards[cardOnTop + 4] == "Three of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
        }

        if (cards[cardOnTop + 4] == "Four of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
        }

        if (cards[cardOnTop + 4] == "Four of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Four of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
        }

        if (cards[cardOnTop + 4] == "Four of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
        }

        if (cards[cardOnTop + 4] == "Five of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
        }

        if (cards[cardOnTop + 4] == "Five of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Five of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
        }

        if (cards[cardOnTop + 4] == "Five of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
        }

        if (cards[cardOnTop + 4] == "Six of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
        }

        if (cards[cardOnTop + 4] == "Six of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Six of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
        }

        if (cards[cardOnTop + 4] == "Six of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
        }

        if (cards[cardOnTop + 4] == "Seven of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
        }

        if (cards[cardOnTop + 4] == "Seven of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Seven of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
        }

        if (cards[cardOnTop + 4] == "Seven of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
        }

        if (cards[cardOnTop + 4] == "Eight of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
        }

        if (cards[cardOnTop + 4] == "Eight of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Eight of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
        }

        if (cards[cardOnTop + 4] == "Eight of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
        }

        if (cards[cardOnTop + 4] == "Nine of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
        }

        if (cards[cardOnTop + 4] == "Nine of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Nine of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
        }

        if (cards[cardOnTop + 4] == "Nine of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
        }

        if (cards[cardOnTop + 4] == "Ten of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
        }

        if (cards[cardOnTop + 4] == "Ten of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Ten of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
        }

        if (cards[cardOnTop + 4] == "Ten of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
        }

        if (cards[cardOnTop + 4] == "Jack of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
        }

        if (cards[cardOnTop + 4] == "Jack of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Jack of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
        }

        if (cards[cardOnTop + 4] == "Jack of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
        }

        if (cards[cardOnTop + 4] == "Queen of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
        }

        if (cards[cardOnTop + 4] == "Queen of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "Queen of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
        }

        if (cards[cardOnTop + 4] == "Queen of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
        }

        if (cards[cardOnTop + 4] == "King of Clubs")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
        }

        if (cards[cardOnTop + 4] == "King of Diamonds")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
        }

        if (cards[cardOnTop + 4] == "King of Hearts")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
        }

        if (cards[cardOnTop + 4] == "King of Spades")
        {
            SendMessageW(hCardOnTable4, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
        }
    }
}

void PassCards(int p1, int p2, int p3, int p4) {
    if (p1 == 1)
    {
        DestroyWindow(hP1Hand0);
        DestroyWindow(hP1Hand1);
    }
    if (p2 == 1)
    {
        DestroyWindow(hP2Hand0);
        DestroyWindow(hP2Hand1);
    }
    if (p3 == 1)
    {
        DestroyWindow(hP3Hand0);
        DestroyWindow(hP3Hand1);
    }
    if (p4 == 1)
    {
        DestroyWindow(hP4Hand0);
        DestroyWindow(hP4Hand1);
    }
}