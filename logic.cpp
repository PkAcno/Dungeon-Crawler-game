#include <iostream>
#include <fstream>
#include <string>
#include "logic.h"
#include <sstream>

using std::cout, std::endl, std::ifstream, std::string;

/**
 * TODO: Student implement this function
 * Load representation of the dungeon level from file into the 2D map.
 * Calls createMap to allocate the 2D array.
 * @param   fileName    File name of dungeon level.
 * @param   maxRow      Number of rows in the dungeon table (aka height).
 * @param   maxCol      Number of columns in the dungeon table (aka width).
 * @param   player      Player object by reference to set starting position.
 * @return  pointer to 2D dynamic array representation of dungeon map with player's location., or nullptr if loading fails for any reason
 * @updates  maxRow, maxCol, player
 */
char** loadLevel(const string& fileName, int& maxRow, int& maxCol, Player& player) {
    string line = "";
    int playercol;
    int playerrow;

    ifstream data(fileName);
    if(!data.is_open()){
      return nullptr;
    }
    
    data >> playerrow;
    
    if(data.fail()){
      return nullptr;
    }
    data >> playercol;

    if(data.fail()){
      return nullptr;
    }

    maxRow = playerrow;
    maxCol = playercol;

    data >> playerrow;
    if (data.fail())
    {
      return nullptr;
    }
    data >> playercol;
    if(data.fail()){
      return nullptr;
    }
    player.row = playerrow;
    player.col = playercol;
    if(maxRow < 1 || maxCol < 1 || player.col < 0 || player.row < 0 || maxRow > INT32_MAX/maxCol || player.row >= maxRow || player.col >= maxCol ){
        return nullptr;
    }
    char thing = ' '; // temp value
    bool valid = false;
    // char validchar[8] = {'-','+','M','$','!','?','@','o'};
    char** map = createMap(maxRow, maxCol);

    

    for(int x = 0; x < maxRow; x++){
        for(int y = 0; y < maxCol; y++){
            data >> map[x][y];
            if(map[x][y] != '-' && map[x][y] != '+' && map[x][y] != 'M' && map[x][y] != '$' && map[x][y] !='!' && 
              map[x][y] != '?' && map[x][y] != '@' && map[x][y] != 'o'){
              deleteMap(map, maxRow);
              return nullptr;
            }

            // if(data.eof() && x != maxRow-1 && y != maxCol-1){
            //   deleteMap(map,maxRow);
            //   return nullptr;
            // }
        }
        
    }

        
            


    string temp2 = ""; 
    data >> temp2;
    if(temp2 != ""){
        deleteMap(map, maxRow);
        return nullptr;
    }

    map[player.row][player.col] = 'o';



    bool exit = false;
    for(int x = 0; x < maxRow; x++){
        for(int y = 0; y < maxCol; y++){
            if(map[x][y] == '!' || map[x][y] == '?'){
                exit = true;
                break;
            }
        }
    }
    if(exit == false){
        deleteMap(map, maxRow);
        return nullptr;
    }
    return map;
}

/**
 * TODO: Student implement this function
 * Translate the character direction input by the user into row or column change.
 * That is, updates the nextRow or nextCol according to the player's movement direction.
 * @param   input       Character input by the user which translates to a direction.
 * @param   nextRow     Player's next row on the dungeon map (up/down).
 * @param   nextCol     Player's next column on dungeon map (left/right).
 * @updates  nextRow, nextCol
 */
void getDirection(char input, int& nextRow, int& nextCol) {
    if(input == 'w'){
        nextRow--;
    }
    if(input == 's'){
        nextRow++;
    }
    if(input == 'a'){
        nextCol--;
    }
    if(input == 'd'){
        nextCol++;
    }
}

/**
 * TODO: [suggested] Student implement this function
 * Allocate the 2D map array.
 * Initialize each cell to TILE_OPEN.
 * @param   maxRow      Number of rows in the dungeon table (aka height).
 * @param   maxCol      Number of columns in the dungeon table (aka width).
 * @return  2D map array for the dungeon level, holds char type.
 */
char** createMap(int maxRow, int maxCol) {
    char** map = new char*[maxRow];
    for (int i = 0; i < maxRow; i++){
        map[i] = new char[maxCol];
    }
    // for(int x = 0; x < maxRow; x++){
    //     for(int y = 0; y < maxCol; y++){
    //         map[x][y] = TILE_OPEN;
    //     }
    // }
    return map;
}

/**
 * TODO: Student implement this function
 * Deallocates the 2D map array.
 * @param   map         Dungeon map.
 * @param   maxRow      Number of rows in the dungeon table (aka height).
 * @return None
 * @update map, maxRow
 */
void deleteMap(char**& map, int& maxRow) {
    if(map){
        for(int x = 0; x < maxRow; x++){
            delete[] map[x];
        }
        delete[] map;
    }
    map = nullptr;
    maxRow = 0;
}

/**
 * TODO: Student implement this function
 * Resize the 2D map by doubling both dimensions.
 * Copy the current map contents to the right, diagonal down, and below.
 * Do not duplicate the player, and remember to avoid memory leaks!
 * You can use the STATUS constants defined in logic.h to help!
 * @param   map         Dungeon map.
 * @param   maxRow      Number of rows in the dungeon table (aka height), to be doubled.
 * @param   maxCol      Number of columns in the dungeon table (aka width), to be doubled.
 * @return  pointer to a dynamically-allocated 2D array (map) that has twice as many columns and rows in size.
 * @update maxRow, maxCol
 */
char** resizeMap(char** map, int& maxRow, int& maxCol) {
    int row = maxRow;
    int col = maxCol;
    char** tempmap = new char*[maxRow];
    for (int i = 0; i < maxRow; i++){
        tempmap[i] = new char[maxCol];
    }
    //copies the old stuff into a temp
    for(int x = 0; x < maxRow; x++){
        for(int y = 0; y < maxCol; y++){
            tempmap[x][y] = map[x][y];
        }
    }
    if(map){// delete to reallocate
        for(int x = 0; x < row; x++){
            delete[] map[x];
        }
        delete[] map;
    } 
    maxRow += maxRow;
    maxCol += maxCol;
    map = new char*[maxRow];
    for (int i = 0; i < maxRow; i++){
        map[i] = new char[maxCol];
    }
    for(int x = 0; x < row; x++){
        for(int y = 0; y < col; y++){
            map[x][y] = tempmap[x][y];
            if(tempmap[x][y] != 'o'){
                map[x+row][y] = tempmap[x][y];
                map[x][y+col] = tempmap[x][y];
                map[x+row][y+col] = tempmap[x][y];
            }
            else{
                map[x+row][y] = '-';
                map[x][y+col] = '-';
                map[x+row][y+col] = '-';
            }
        }
    }
    if(tempmap){// delete to reallocate
        for(int x = 0; x < row; x++){
            delete[] tempmap[x];
        }
        delete[] tempmap;
    } 
    return map;
}

/**
 * TODO: Student implement this function
 * Checks if the player can move in the specified direction and performs the move if so.
 * Cannot move out of bounds or onto TILE_PILLAR or TILE_MONSTER.
 * Cannot move onto TILE_EXIT without at least one treasure. 
 * If TILE_TREASURE, increment treasure by 1.
 * Remember to update the map tile that the player moves onto and return the appropriate status.
 * You can use the STATUS constants defined in logic.h to help!
 * @param   map         Dungeon map.
 * @param   maxRow      Number of rows in the dungeon table (aka height).
 * @param   maxCol      Number of columns in the dungeon table (aka width).
 * @param   player      Player object to by reference to see current location.
 * @param   nextRow     Player's next row on the dungeon map (up/down).
 * @param   nextCol     Player's next column on dungeon map (left/right).
 * @return  Player's movement status after updating player's position.
 * @update map contents, player
 */
int doPlayerMove(char** map, int maxRow, int maxCol, Player& player, int nextRow, int nextCol) {
    int result;
    if(maxCol == nextCol || maxRow == nextRow || nextRow == -1 || nextCol == -1){
        result = STATUS_STAY;
    }
    else if(map[nextRow][nextCol] == '+'){
        result = STATUS_STAY;
    }
    else if(map[nextRow][nextCol] == 'M'){
        result = STATUS_STAY;
    }
    else if(map[nextRow][nextCol] == '-'){
        map[player.row][player.col] = '-';
        map[nextRow][nextCol] = 'o';
        player.row = nextRow;
        player.col = nextCol;
        result = STATUS_MOVE;
    }
    else if(map[nextRow][nextCol] == '$'){
        map[player.row][player.col] = '-';
        map[nextRow][nextCol] = 'o';
        player.row = nextRow;
        player.col = nextCol;
        player.treasure++;
        result = STATUS_TREASURE;
    }
    else if(map[nextRow][nextCol] == '@'){
        map[player.row][player.col] = '-';
        map[nextRow][nextCol] = 'o';
        player.row = nextRow;
        player.col = nextCol;
        result = STATUS_AMULET;
    }
    else if(map[nextRow][nextCol] == '?'){
        map[player.row][player.col] = '-';
        map[nextRow][nextCol] = 'o';
        player.row = nextRow;
        player.col = nextCol;
        result = STATUS_LEAVE;
    }
    else if(map[nextRow][nextCol] == '!'){
        if(player.treasure < 1){
            result = STATUS_STAY;
        }
        else{
            map[player.row][player.col] = '-';
            map[nextRow][nextCol] = 'o';
            player.row = nextRow;
            player.col = nextCol;
            result = STATUS_ESCAPE;
        }
    }
    return result;
}

/**
 * TODO: Student implement this function
 * Update monster locations:
 * We check up, down, left, right from the current player position.
 * If we see an obstacle, there is no line of sight in that direction, and the monster does not move.
 * If we see a monster before an obstacle, the monster moves one tile toward the player.
 * We should update the map as the monster moves.
 * At the end, we check if a monster has moved onto the player's tile.
 * @param   map         Dungeon map.
 * @param   maxRow      Number of rows in the dungeon table (aka height).
 * @param   maxCol      Number of columns in the dungeon table (aka width).
 * @param   player      Player object by reference for current location.
 * @return  Boolean value indicating player status: true if monster reaches the player, false if not.
 * @update map contents
 */
bool doMonsterAttack(char** map, int maxRow, int maxCol, const Player& player) {
    bool death = false;
    for(int x = player.row; x < maxRow; x++){ // checks bottom of player
        if(map[x][player.col] == '+'){
            break;
        }
        else if(map[x][player.col] == 'M'){
            if(map[x-1][player.col] == map[player.row][player.col]){
                map[x-1][player.col] = 'M';
                map[x][player.col] = '-';
                death = true;
                continue;
            }
            else if(map[x-1][player.col] == '@' || map[x-1][player.col] == '!' || map[x-1][player.col] == '?' || map[x-1][player.col] == '$' || map[x-1][player.col] == 'M'){
                continue;
            }
            else if(player.row == x){
                continue;
            }
            else{
                map[x-1][player.col] = 'M';
                map[x][player.col] = '-';
            }
        }
    }

    for(int x = player.row; x >= 0; x--){ // top
        if(map[x][player.col] == '+'){
            break;
        }
        else if(map[x][player.col] == 'M'){
            if(map[x+1][player.col] == map[player.row][player.col]){
                map[x+1][player.col] = 'M';
                map[x][player.col] = '-';
                death = true;
                continue;
            }
            else if(map[x+1][player.col] == '@' || map[x+1][player.col] == '!' || map[x+1][player.col] == '?' || map[x+1][player.col] == '$' || map[x+1][player.col] == 'M'){
                continue;
            }
            else if(player.row == x){
                continue;
            }
            else{
                map[x+1][player.col] = 'M';
                map[x][player.col] = '-';
            }
        }
    }

    for(int x = player.col; x < maxCol; x++){ // checks right 
        if(map[player.row][x] == '+'){
            break;
        }
        else if(map[player.row][x] == 'M'){
            if(map[player.row][x-1] == map[player.row][player.col]){
                map[player.row][x-1] = 'M';
                map[player.row][x] = '-';
                death = true;
                continue;
            }
            else if(map[player.row][x-1] == '@' || map[player.row][x-1] == '!' || map[player.row][x-1] == '?' || map[player.row][x-1] == '$' || map[player.row][x-1] == 'M'){
                continue;
            }
            else if(player.col == x){
                continue;
            }
            else{
                map[player.row][x-1] = 'M';
                map[player.row][x] = '-';
            }
        }
    }

    for(int x = player.col; x >= 0; x--){ // checks left
        if(map[player.row][x] == '+'){
            break;
        }
        else if(map[player.row][x] == 'M'){
            if(map[player.row][x+1] == map[player.row][player.col]){
                map[player.row][x+1] = 'M';
                map[player.row][x] = '-';
                death = true;
                continue;
            }
            else if(map[player.row][x+1] == '@' || map[player.row][x+1] == '!' || map[player.row][x+1] == '?' || map[player.row][x+1] == '$' || map[player.row][x+1] == 'M'){
                continue;
            }
            else if(x == player.col){
                continue;
            }
            else{
                map[player.row][x+1] = 'M';
                map[player.row][x] = '-';
            }
        }
    }
    return death;
}