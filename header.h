//
// Created by Themos Papatheofanous on 4/12/22.
//

#ifndef OOP_WNV_THE_GAME_HEADER_H
#define OOP_WNV_THE_GAME_HEADER_H

#endif //OOP_WNV_THE_GAME_HEADER_H
class Graphics{
protected:
    int playble_width = 0;
    int playble_height = 0;
public:

    Graphics();
};

class Map : protected Graphics {
protected:
    int map_x = playble_width + 2;
    int map_y = playble_height + 2;
    int avatar_x = playble_width / 2;
    int avatar_y = playble_height / 2;
public:
    char** map = NULL;
    Map();
    void Populate_Map();
    void Display_map();
    void movement(int ud, int lr);
    ~Map();
};