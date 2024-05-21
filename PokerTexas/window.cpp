#include "poker.h"

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInst, LPSTR args, int ncmdshow) {
    WNDCLASSW wc = { 0 }; //definiuje klase okienka

    //przydziela parametry do okienka
    wc.hbrBackground = (HBRUSH)COLOR_WINDOW; // definiuje t³o okna
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