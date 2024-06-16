#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <stdlib.h>
#include <ctime>
#include <windows.h>

#define FILE_MENU_NEW 1
#define FILE_MENU_OPEN 2
#define FILE_MENU_EXIT 3
#define GENERATE_BUTTON 4

#define ONE_PLAYER 5
#define TWO_PLAYER 6
#define THREE_PLAYER 7
#define FOUR_PLAYER 8
#define SELECT_COINS 9
#define START_GAME 10

#define IDC_COINS 100
#define IDC_OUT 101

#define CHECK 200
#define BET 201
#define PASS 202
#define WAIT 203

#define NEW_HAND 204

#define ODDS_HIGH_CARD 300
#define ODDS_PAIR 301
#define ODDS_TWO_OF_PAIRS 302
#define ODDS_THREE 303
#define ODDS_STRAIGHT 304
#define ODDS_FLUSH 305
#define ODDS_FULL_HOUSE 306
#define ODDS_FOUR_OF_KIND 307
#define ODDS_STRAIGHT_FLUSH 308
#define ODDS_ROYAL_FLUSH 309

LRESULT CALLBACK WindowProcedure(HWND, UINT, WPARAM, LPARAM);

using namespace std;

vector<string> CardGeneration(HWND hWnd);

class Player {
public:
    int ai = 0;
    int active = 0;
    int pass = 0;
    int coins = 0;
    int bid = 0;
    int odds = ODDS_HIGH_CARD;
    vector<string> hand;

    int AiMove(int nr, int ai, int currentBid, int playerBid);
    int AiPass(int nr, int& pass);
    void AiWait(int nr);
    int AiBet(int nr, int& coinsOnTable, int& currentBid, int& coins);
    int AiCheck(int nr, int& coinsOnTable, int& currentBid, int& coins, int& playerBid);
};

int AiCharacter();
void AddMenus(HWND);
void AddControls(HWND);
void LoadImages(HWND, vector<string> cards, Player p1, Player p2, Player p3, Player p4);
void LoadDealingCards(HWND, int turn, vector<string> cards, Player p1, Player p2, Player p3, Player p4);
void PassCards(int p1, int p2, int p3, int p4);
void StartGame(HWND);
void DealingCards(vector<string> cards);
int PlayGame(HWND hWnd, int turn, vector<string> cards, Player p1, Player p2, Player p3, Player p4, int cardOnTop);

int GetWindow(HWND getHwnd);
void SetWindow(int value, HWND setHwnd);
void SetHands(HWND hWnd);
void EraseHand(Player p1, Player p2, Player p3, Player p4);