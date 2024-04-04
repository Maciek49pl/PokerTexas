#include "poker.h";

HWND hAceOfClubs, hAceOfDiamonds, hAceOfHearts, hAceOfSpades;
HWND hTwoOfClubs, hTwoOfDiamonds, hTwoOfHearts, hTwoOfSpades;
HWND hThreeOfClubs, hThreeOfDiamonds, hThreeOfHearts, hThreeOfSpades;
HWND hFourOfClubs, hFourOfDiamonds, hFourOfHearts, hFourOfSpades;
HWND hFiveOfClubs, hFiveOfDiamonds, hFiveOfHearts, hFiveOfSpades;
HWND hSixOfClubs, hSixOfDiamonds, hSixOfHearts, hSixOfSpades;
HWND hSevenOfClubs, hSevenOfDiamonds, hSevenOfHearts, hSevenOfSpades;
HWND hEightOfClubs, hEightOfDiamonds, hEightOfHearts, hEightOfSpades;
HWND hNineOfClubs, hNineOfDiamonds, hNineOfHearts, hNineOfSpades;
HWND hTenOfClubs, hTenOfDiamonds, hTenOfHearts, hTenOfSpades;
HWND hJackOfClubs, hJackOfDiamonds, hJackOfHearts, hJackOfSpades;
HWND hQueenOfClubs, hQueenOfDiamonds, hQueenOfHearts, hQueenOfSpades;
HWND hKingOfClubs, hKingOfDiamonds, hKingOfHearts, hKingOfSpades;

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

HBITMAP hLogoImage, hCardImage, hGenerateImage;

void LoadImages(HWND hWnd, Player p1, Player p2, Player p3, Player p4) {
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

    int p1Hand0_x = 400 + 300, p1Hand0_y = 850;

    if (p1.hand[0] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p1.hand[0] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p1.hand[0] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p1.hand[0] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p1.hand[0] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p1.hand[0] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p1.hand[0] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p1.hand[0] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p1.hand[0] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p1.hand[0] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p1.hand[0] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p1.hand[0] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p1.hand[0] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p1.hand[0] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p1.hand[0] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p1.hand[0] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p1.hand[0] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p1.hand[0] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p1.hand[0] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p1.hand[0] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p1.hand[0] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p1.hand[0] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p1.hand[0] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p1.hand[0] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p1.hand[0] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p1.hand[0] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p1.hand[0] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p1.hand[0] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p1.hand[0] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p1.hand[0] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p1.hand[0] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p1.hand[0] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p1.hand[0] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p1.hand[0] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p1.hand[0] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p1.hand[0] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p1.hand[0] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p1.hand[0] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p1.hand[0] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p1.hand[0] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p1.hand[0] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p1.hand[0] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p1.hand[0] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p1.hand[0] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p1.hand[0] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p1.hand[0] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p1.hand[0] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p1.hand[0] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p1.hand[0] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p1.hand[0] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p1.hand[0] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p1.hand[0] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand0_x, p1Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p1Hand1_x = 500 + 300, p1Hand1_y = 850;

    if (p1.hand[1] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p1.hand[1] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p1.hand[1] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p1.hand[1] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p1.hand[1] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p1.hand[1] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p1.hand[1] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p1.hand[1] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p1.hand[1] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p1.hand[1] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p1.hand[1] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p1.hand[1] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p1.hand[1] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p1.hand[1] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p1.hand[1] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p1.hand[1] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p1.hand[1] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p1.hand[1] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p1.hand[1] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p1.hand[1] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p1.hand[1] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p1.hand[1] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p1.hand[1] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p1.hand[1] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p1.hand[1] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p1.hand[1] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p1.hand[1] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p1.hand[1] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p1.hand[1] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p1.hand[1] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p1.hand[1] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p1.hand[1] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p1.hand[1] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p1.hand[1] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p1.hand[1] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p1.hand[1] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p1.hand[1] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p1.hand[1] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p1.hand[1] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p1.hand[1] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p1.hand[1] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p1.hand[1] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p1.hand[1] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p1.hand[1] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p1.hand[1] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p1.hand[1] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p1.hand[1] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p1.hand[1] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p1.hand[1] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p1.hand[1] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p1.hand[1] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p1.hand[1] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p1Hand1_x, p1Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p2Hand0_x = 200 + 100, p2Hand0_y = 450;

    if (p2.hand[0] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p2.hand[0] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p2.hand[0] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p2.hand[0] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p2.hand[0] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p2.hand[0] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p2.hand[0] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p2.hand[0] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p2.hand[0] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p2.hand[0] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p2.hand[0] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p2.hand[0] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p2.hand[0] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p2.hand[0] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p2.hand[0] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p2.hand[0] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p2.hand[0] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p2.hand[0] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p2.hand[0] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p2.hand[0] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p2.hand[0] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p2.hand[0] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p2.hand[0] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p2.hand[0] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p2.hand[0] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p2.hand[0] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p2.hand[0] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p2.hand[0] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p2.hand[0] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p2.hand[0] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p2.hand[0] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p2.hand[0] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p2.hand[0] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p2.hand[0] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p2.hand[0] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p2.hand[0] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p2.hand[0] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p2.hand[0] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p2.hand[0] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p2.hand[0] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p2.hand[0] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p2.hand[0] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p2.hand[0] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p2.hand[0] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p2.hand[0] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p2.hand[0] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p2.hand[0] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p2.hand[0] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p2.hand[0] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p2.hand[0] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p2.hand[0] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p2.hand[0] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand0_x, p2Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p2Hand1_x = 300 + 100, p2Hand1_y = 450;

    if (p2.hand[1] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p2.hand[1] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p2.hand[1] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p2.hand[1] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p2.hand[1] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p2.hand[1] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p2.hand[1] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p2.hand[1] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p2.hand[1] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p2.hand[1] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p2.hand[1] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p2.hand[1] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p2.hand[1] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p2.hand[1] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p2.hand[1] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p2.hand[1] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p2.hand[1] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p2.hand[1] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p2.hand[1] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p2.hand[1] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p2.hand[1] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p2.hand[1] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p2.hand[1] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p2.hand[1] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p2.hand[1] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p2.hand[1] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p2.hand[1] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p2.hand[1] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p2.hand[1] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p2.hand[1] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p2.hand[1] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p2.hand[1] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p2.hand[1] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p2.hand[1] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p2.hand[1] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p2.hand[1] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p2.hand[1] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p2.hand[1] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p2.hand[1] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p2.hand[1] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p2.hand[1] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p2.hand[1] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p2.hand[1] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p2.hand[1] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p2.hand[1] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p2.hand[1] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p2.hand[1] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p2.hand[1] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p2.hand[1] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p2.hand[1] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p2.hand[1] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p2.hand[1] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p2Hand1_x, p2Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p3Hand0_x = 400 + 300, p3Hand0_y = 100;

    if (p3.hand[0] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p3.hand[0] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p3.hand[0] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p3.hand[0] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p3.hand[0] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p3.hand[0] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p3.hand[0] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p3.hand[0] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p3.hand[0] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p3.hand[0] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p3.hand[0] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p3.hand[0] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p3.hand[0] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p3.hand[0] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p3.hand[0] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p3.hand[0] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p3.hand[0] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p3.hand[0] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p3.hand[0] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p3.hand[0] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p3.hand[0] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p3.hand[0] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p3.hand[0] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p3.hand[0] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p3.hand[0] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p3.hand[0] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p3.hand[0] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p3.hand[0] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p3.hand[0] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p3.hand[0] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p3.hand[0] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p3.hand[0] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p3.hand[0] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p3.hand[0] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p3.hand[0] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p3.hand[0] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p3.hand[0] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p3.hand[0] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p3.hand[0] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p3.hand[0] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p3.hand[0] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p3.hand[0] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p3.hand[0] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p3.hand[0] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p3.hand[0] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p3.hand[0] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p3.hand[0] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p3.hand[0] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p3.hand[0] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p3.hand[0] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p3.hand[0] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p3.hand[0] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand0_x, p3Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p3Hand1_x = 500 + 300, p3Hand1_y = 100;

    if (p3.hand[1] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p3.hand[1] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p3.hand[1] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p3.hand[1] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p3.hand[1] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p3.hand[1] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p3.hand[1] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p3.hand[1] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p3.hand[1] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p3.hand[1] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p3.hand[1] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p3.hand[1] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p3.hand[1] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p3.hand[1] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p3.hand[1] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p3.hand[1] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p3.hand[1] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p3.hand[1] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p3.hand[1] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p3.hand[1] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p3.hand[1] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p3.hand[1] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p3.hand[1] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p3.hand[1] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p3.hand[1] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p3.hand[1] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p3.hand[1] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p3.hand[1] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p3.hand[1] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p3.hand[1] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p3.hand[1] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p3.hand[1] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p3.hand[1] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p3.hand[1] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p3.hand[1] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p3.hand[1] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p3.hand[1] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p3.hand[1] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p3.hand[1] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p3.hand[1] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p3.hand[1] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p3.hand[1] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p3.hand[1] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p3.hand[1] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p3.hand[1] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p3.hand[1] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p3.hand[1] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p3.hand[1] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p3.hand[1] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p3.hand[1] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p3.hand[1] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p3.hand[1] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p3Hand1_x, p3Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p4Hand0_x = 600 + 800, p4Hand0_y = 450;

    if (p4.hand[0] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p4.hand[0] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p4.hand[0] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p4.hand[0] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p4.hand[0] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p4.hand[0] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p4.hand[0] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p4.hand[0] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p4.hand[0] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p4.hand[0] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p4.hand[0] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p4.hand[0] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p4.hand[0] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p4.hand[0] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p4.hand[0] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p4.hand[0] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p4.hand[0] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p4.hand[0] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p4.hand[0] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p4.hand[0] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p4.hand[0] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p4.hand[0] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p4.hand[0] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p4.hand[0] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p4.hand[0] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p4.hand[0] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p4.hand[0] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p4.hand[0] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p4.hand[0] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p4.hand[0] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p4.hand[0] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p4.hand[0] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p4.hand[0] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p4.hand[0] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p4.hand[0] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p4.hand[0] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p4.hand[0] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p4.hand[0] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p4.hand[0] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p4.hand[0] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p4.hand[0] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p4.hand[0] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p4.hand[0] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p4.hand[0] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p4.hand[0] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p4.hand[0] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p4.hand[0] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p4.hand[0] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p4.hand[0] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p4.hand[0] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p4.hand[0] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p4.hand[0] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand0_x, p4Hand0_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }

    int p4Hand1_x = 700 + 800, p4Hand1_y = 450;

    if (p4.hand[1] == "Ace of Clubs")
    {
        hAceOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfClubs);
    }

    if (p4.hand[1] == "Ace of Diamonds")
    {
        hAceOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfDiamonds);
    }
    if (p4.hand[1] == "Ace of Hearts")
    {
        hAceOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfHearts);
    }

    if (p4.hand[1] == "Ace of Spades")
    {
        hAceOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hAceOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbAceOfSpades);
    }

    if (p4.hand[1] == "Two of Clubs")
    {
        hTwoOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfClubs);
    }

    if (p4.hand[1] == "Two of Diamonds")
    {
        hTwoOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfDiamonds);
    }

    if (p4.hand[1] == "Two of Hearts")
    {
        hTwoOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfHearts);
    }

    if (p4.hand[1] == "Two of Spades")
    {
        hTwoOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTwoOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTwoOfSpades);
    }

    if (p4.hand[1] == "Three of Clubs")
    {
        hThreeOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfClubs);
    }

    if (p4.hand[1] == "Three of Diamonds")
    {
        hThreeOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfDiamonds);
    }

    if (p4.hand[1] == "Three of Hearts")
    {
        hThreeOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfHearts);
    }

    if (p4.hand[1] == "Three of Spades")
    {
        hThreeOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hThreeOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbThreeOfSpades);
    }

    if (p4.hand[1] == "Four of Clubs")
    {
        hFourOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfClubs);
    }

    if (p4.hand[1] == "Four of Diamonds")
    {
        hFourOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfDiamonds);
    }

    if (p4.hand[1] == "Four of Hearts")
    {
        hFourOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfHearts);
    }

    if (p4.hand[1] == "Four of Spades")
    {
        hFourOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFourOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFourOfSpades);
    }

    if (p4.hand[1] == "Five of Clubs")
    {
        hFiveOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfClubs);
    }

    if (p4.hand[1] == "Five of Diamonds")
    {
        hFiveOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfDiamonds);
    }

    if (p4.hand[1] == "Five of Hearts")
    {
        hFiveOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfHearts);
    }

    if (p4.hand[1] == "Five of Spades")
    {
        hFiveOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hFiveOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbFiveOfSpades);
    }

    if (p4.hand[1] == "Six of Clubs")
    {
        hSixOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfClubs);
    }

    if (p4.hand[1] == "Six of Diamonds")
    {
        hSixOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfDiamonds);
    }

    if (p4.hand[1] == "Six of Hearts")
    {
        hSixOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfHearts);
    }

    if (p4.hand[1] == "Six of Spades")
    {
        hSixOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSixOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSixOfSpades);
    }

    if (p4.hand[1] == "Seven of Clubs")
    {
        hSevenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfClubs);
    }

    if (p4.hand[1] == "Seven of Diamonds")
    {
        hSevenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfDiamonds);
    }

    if (p4.hand[1] == "Seven of Hearts")
    {
        hSevenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfHearts);
    }

    if (p4.hand[1] == "Seven of Spades")
    {
        hSevenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hSevenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbSevenOfSpades);
    }

    if (p4.hand[1] == "Eight of Clubs")
    {
        hEightOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfClubs);
    }

    if (p4.hand[1] == "Eight of Diamonds")
    {
        hEightOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfDiamonds);
    }

    if (p4.hand[1] == "Eight of Hearts")
    {
        hEightOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfHearts);
    }

    if (p4.hand[1] == "Eight of Spades")
    {
        hEightOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hEightOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbEightOfSpades);
    }

    if (p4.hand[1] == "Nine of Clubs")
    {
        hNineOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfClubs);
    }

    if (p4.hand[1] == "Nine of Diamonds")
    {
        hNineOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfDiamonds);
    }

    if (p4.hand[1] == "Nine of Hearts")
    {
        hNineOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfHearts);
    }

    if (p4.hand[1] == "Nine of Spades")
    {
        hNineOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hNineOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbNineOfSpades);
    }

    if (p4.hand[1] == "Ten of Clubs")
    {
        hTenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfClubs);
    }

    if (p4.hand[1] == "Ten of Diamonds")
    {
        hTenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfDiamonds);
    }

    if (p4.hand[1] == "Ten of Hearts")
    {
        hTenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfHearts);
    }

    if (p4.hand[1] == "Ten of Spades")
    {
        hTenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hTenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbTenOfSpades);
    }

    if (p4.hand[1] == "Jack of Clubs")
    {
        hJackOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfClubs);
    }

    if (p4.hand[1] == "Jack of Diamonds")
    {
        hJackOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfDiamonds);
    }

    if (p4.hand[1] == "Jack of Hearts")
    {
        hJackOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfHearts);
    }

    if (p4.hand[1] == "Jack of Spades")
    {
        hJackOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hJackOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbJackOfSpades);
    }

    if (p4.hand[1] == "Queen of Clubs")
    {
        hQueenOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfClubs);
    }

    if (p4.hand[1] == "Queen of Diamonds")
    {
        hQueenOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfDiamonds);
    }

    if (p4.hand[1] == "Queen of Hearts")
    {
        hQueenOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfHearts);
    }

    if (p4.hand[1] == "Queen of Spades")
    {
        hQueenOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hQueenOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbQueenOfSpades);
    }

    if (p4.hand[1] == "King of Clubs")
    {
        hKingOfClubs = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfClubs, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfClubs);
    }

    if (p4.hand[1] == "King of Diamonds")
    {
        hKingOfDiamonds = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfDiamonds, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfDiamonds);
    }

    if (p4.hand[1] == "King of Hearts")
    {
        hKingOfHearts = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfHearts, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfHearts);
    }

    if (p4.hand[1] == "King of Spades")
    {
        hKingOfSpades = CreateWindow(L"Static", NULL, WS_VISIBLE | WS_CHILD | SS_BITMAP, p4Hand1_x, p4Hand1_y, 80, 30, hWnd, NULL, NULL, NULL); // statyczny tekst
        SendMessageW(hKingOfSpades, STM_SETIMAGE, IMAGE_BITMAP, (LPARAM)hbKingOfSpades);
    }
}