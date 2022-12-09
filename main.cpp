
//
// Created by Themos Papatheofanous on 4/12/22.
//

#include <iostream>
#include <Windows.h>
#include "header.h"
using namespace std;

int main() {
    Map map1;
    map1.Populate_Map();
    bool game_playing = true;
    bool pause = false;
    while (game_playing) {
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), { 0,0 });
        map1.Display_map();
        system("pause>nul");
        if (GetKeyState(VK_UP) & 0x8000) map1.movement(-1, 0);
        if (GetKeyState(VK_DOWN) & 0x8000) map1.movement(1, 0);
        if (GetKeyState(VK_LEFT) & 0x8000) map1.movement(0, -1);
        if (GetKeyState(VK_RIGHT) & 0x8000) map1.movement(0, 1);
        if (GetKeyState(VK_F1) & 0x8000) game_playing = false;
        if (GetKeyState(VK_F2) & 0x8000) pause = true;

        while (pause) {
            system("pause");
            pause = false;
            system("cls");
        }
    }
    return 0;
}