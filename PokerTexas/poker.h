#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>  
#include <stdlib.h>
#include <ctime>
#include <windows.h>

#define IDC_COINS 100
#define IDC_OUT 101

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

#define CHECK 200
#define BET 201
#define PASS 202
#define WAIT 203

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
void EraseHand();