#include <iostream>
#include "logic.h"

using std::cout, std::endl;

// TODO(student): Write unit tests for the functions in logic.h
//                You should end up with at least 500 lines of test code

// int main() {
    
//     // example
//     /*
//     example.txt
//     -----------
//     5 3
//     3 0
//     M + -
//     - + -
//     - + !
//     - - -
//     @ - $
//     */
//     ////////////////////
//     // this is the only code _required_ to get coverage points on part 1 (test first)
//     //   invocation --> coverage
//     int maxRow;
//     int maxCol;
//     Player player;
//     char** level = loadLevel("example.txt", maxRow, maxCol, player);
//     ////////////////////
    
//     ////////////////////
//     // this is optional but STRONGLY recommended for preparing for part 2 (development)
//     //   coverage -/-> correctness
//     // note: there are _many_ ways to do this part, including ways that are more elegant and efficient than this way demonstrated here
//     if (level == nullptr) {
//         cout << "FAIL: level is nullptr" << endl;
//     } else {
//         cout << " OK : level is not nullptr" << endl;
//         if (maxRow == 5) {
//             cout << " OK : maxRow is 5" << endl;
//         } else {
//             cout << "FAIL: expected maxRow to be 5, got " << maxRow << endl; 
//         }
//         if (maxCol == 3) {
//             cout << " OK : maxCol is 3" << endl;
//         } else {
//             cout << "FAIL: expected maxCol to be 3, got " << maxCol << endl; 
//         }
//         if (player.row == 3) {
//             cout << " OK : player.row is 3" << endl;
//         } else {
//             cout << "FAIL: expected player.row to be 3, got " << player.row << endl; 
//         }
//         if (player.col == 0) {
//             cout << " OK : player.col is 0" << endl;
//         } else {
//             cout << "FAIL: expected player.col to be 0, got " << player.col << endl; 
//         }
//         if (level[0][0] == 'M') {
//             cout << " OK : level[0][0] is M" << endl;
//         } else {
//             cout << "FAIL: expected level[0][0] to be M, got " << level[0][0] << endl; 
//         }
//         if (level[0][1] == '+') {
//             cout << " OK : level[0][1] is +" << endl;
//         } else {
//             cout << "FAIL: expected level[0][1] to be +, got " << level[0][1] << endl; 
//         }
//         if (level[0][2] == '-') {
//             cout << " OK : level[0][2] is -" << endl;
//         } else {
//             cout << "FAIL: expected level[0][2] to be -, got " << level[0][2] << endl; 
//         }
//         if (level[1][0] == '-') {
//             cout << " OK : level[1][0] is -" << endl;
//         } else {
//             cout << "FAIL: expected level[1][0] to be -, got " << level[1][0] << endl; 
//         }
//         if (level[1][1] == '+') {
//             cout << " OK : level[1][1] is +" << endl;
//         } else {
//             cout << "FAIL: expected level[1][1] to be +, got " << level[1][1] << endl; 
//         }
//         if (level[1][2] == '-') {
//             cout << " OK : level[1][2] is -" << endl;
//         } else {
//             cout << "FAIL: expected level[1][2] to be -, got " << level[1][2] << endl; 
//         }
//         if (level[2][0] == '-') {
//             cout << " OK : level[2][0] is -" << endl;
//         } else {
//             cout << "FAIL: expected level[2][0] to be -, got " << level[2][0] << endl; 
//         }
//         if (level[2][1] == '+') {
//             cout << " OK : level[2][1] is +" << endl;
//         } else {
//             cout << "FAIL: expected level[2][1] to be +, got " << level[2][1] << endl; 
//         }
//         if (level[2][2] == '!') {
//             cout << " OK : level[2][2] is !" << endl;
//         } else {
//             cout << "FAIL: expected level[2][2] to be !, got " << level[2][2] << endl; 
//         }
//         if (level[3][0] == 'o') {
//             cout << " OK : level[3][0] is o" << endl;
//         } else {
//             cout << "FAIL: expected level[3][0] to be o, got " << level[3][0] << endl; 
//         }
//         if (level[3][1] == '-') {
//             cout << " OK : level[3][1] is -" << endl;
//         } else {
//             cout << "FAIL: expected level[3][1] to be -, got " << level[3][1] << endl; 
//         }
//         if (level[3][2] == '-') {
//             cout << " OK : level[3][2] is -" << endl;
//         } else {
//             cout << "FAIL: expected level[3][2] to be -, got " << level[3][2] << endl; 
//         }
//         if (level[4][0] == '@') {
//             cout << " OK : level[4][0] is @" << endl;
//         } else {
//             cout << "FAIL: expected level[4][0] to be @, got " << level[4][0] << endl; 
//         }
//         if (level[4][1] == '-') {
//             cout << " OK : level[4][1] is -" << endl;
//         } else {
//             cout << "FAIL: expected level[4][1] to be -, got " << level[4][1] << endl; 
//         }
//         if (level[4][2] == '$') {
//             cout << " OK : level[4][2] is $" << endl;
//         } else {
//             cout << "FAIL: expected level[4][2] to be $, got " << level[4][2] << endl; 
//         }
//     ////////////////////
//     // this is required to prevent memory leaks on part 1 (test first)
//     if (level) {
//         for (int row = 0; row < 5; row++) {
//             delete[] level[row];
//         }
//         delete[] level;
//     }
//     }
    ////////////////////
    // checking if it throws an error for having a letter
    
    // loadLevel("example1.txt", maxRow, maxCol, player);
    // loadLevel("example2.txt", maxRow, maxCol, player);
    // loadLevel("example3.txt", maxRow, maxCol, player);
    // loadLevel("example4.txt", maxRow, maxCol, player);
    // loadLevel("example5.txt", maxRow, maxCol, player);
    // loadLevel("example6.txt", maxRow, maxCol, player);
    // loadLevel("example7.txt", maxRow, maxCol, player);
    // loadLevel("example8.txt", maxRow, maxCol, player);
    // // loadLevel("example9.txt", maxRow, maxCol, player);
    // loadLevel("example10.txt", maxRow, maxCol, player);
    // loadLevel("dezznuts.txt", maxRow, maxCol, player);
    // loadLevel("example19.txt", maxRow, maxCol, player);
    // loadLevel("example20.txt", maxRow, maxCol, player);

    
    // ////////////////////
    // // testing w input
    // {
    //     char input = 'w'; 
    //     int nextRow = 2; 
    //     int nextCol = 2;
    //     getDirection(input, nextRow, nextCol);
    //     if(nextCol == 2){
    //         cout << "nextCol is good and got 2" << endl;
    //     }
    //     else{
    //         cout << "nextCol is supposed to be 2 but got" << nextCol << endl;
    //     }
    //     if(nextRow == 1){
    //         cout << "nextRow is good and got 1" << endl;
    //     }
    //     else{
    //         cout << "nextRow is supposed to be 1 but got" << nextRow << endl;
    //     }
    // }
    // // testing non valid inputs
    // {
    //     char input = 'P'; 
    //     int nextRow = 2; 
    //     int nextCol = 2;
    //     getDirection(input, nextRow, nextCol);
    // }
    // //testing non valid inputs
    // {
    //     char input = '3'; 
    //     int nextRow = 2; 
    //     int nextCol = 2;
    //     getDirection(input, nextRow, nextCol);
    // }
    // // testing s input
    // {
    //     char input = 's'; 
    //     int nextRow = 2; 
    //     int nextCol = 2;
    //     getDirection(input, nextRow, nextCol);
    //     if(nextCol == 2){
    //         cout << "nextCol is good and got 2" << endl;
    //     }
    //     else{
    //         cout << "nextCol is supposed to be 2 but got" << nextCol << endl;
    //     }
    //     if(nextRow == 3){
    //         cout << "nextRow is good and got 3" << endl;
    //     }
    //     else{
    //         cout << "nextRow is supposed to be 3 but got" << nextRow << endl;
    //     }
    // }
    // // testing a input
    // {
    //     char input = 'a'; 
    //     int nextRow = 2; 
    //     int nextCol = 2;
    //     getDirection(input, nextRow, nextCol);
    //     if(nextCol == 1){
    //         cout << "nextCol is good and got 1" << endl;
    //     }
    //     else{
    //         cout << "nextCol is supposed to be 1 but got" << nextCol << endl;
    //     }
    //     if(nextRow == 2){
    //         cout << "nextRow is good and got 2" << endl;
    //     }
    //     else{
    //         cout << "nextRow is supposed to be 2 but got" << nextRow << endl;
    //     }
    // }
    // // testing d input
    // {
    //     char input = 'd'; 
    //     int nextRow = 2; 
    //     int nextCol = 2;
    //     getDirection(input, nextRow, nextCol);
    //     if(nextCol == 3){
    //         cout << "nextCol is good and got 3" << endl;
    //     }
    //     else{
    //         cout << "nextCol is supposed to be 3 but got" << nextCol << endl;
    //     }
    //     if(nextRow == 2){
    //         cout << "nextRow is good and got 2" << endl;
    //     }
    //     else{
    //         cout << "nextRow is supposed to be 2 but got" << nextRow << endl;
    //     }
    // }
    // // map deletion
    // {
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     deleteMap(map,maxRow);
    //     if(map){
    //         cout << "map didn't delete properly" << endl;
    //     }
    //     else{
    //         cout << "map did delete properly" << endl;
    //     }
        
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //map resizing
    // {
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     map = resizeMap(map, maxRow, maxCol);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
        
    // }
    // //map with ?
    // {
    //     char** map = loadLevel("example9.txt", maxRow, maxCol, player);
    //     map = resizeMap(map, maxRow, maxCol);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
        
    // }
    // //doPlayerMove and checks if player stays still after trying to move out of bounds downwards
    // {
    //     int nextRow = 5;
    //     int nextCol = 1;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 0){
    //         cout << "output is good trying to move out of bounds downwards" << status << endl;
    //     }
    //     else{
    //         cout << "output is bad" << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //Checks if player stays still trying to go out of bounds on the right
    // {
    //     int nextRow = 4;
    //     int nextCol = 3;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 0){
    //         cout << "output is good for trying to go out of bounds on the right" << status << endl;
    //     }
    //     else{
    //         cout << "output is bad" << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //Checks if player stays still trying to go out of bounds on the left
    // {
    //     int nextRow = 4;
    //     int nextCol = -1;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 0){
    //         cout << "output is good trying to go out of bounds on the left" << status << endl;
    //     }
    //     else{
    //         cout << "output is bad" << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //Checks if player stays still trying to go out of bounds on the top
    // {
    //     int nextRow = -1;
    //     int nextCol = 2;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 0){
    //         cout << "output is good trying to go out of bounds on the top" << status << endl;
    //     }
    //     else{
    //         cout << "output is bad" << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //Checks if player can go into obstacle
    // {
    //     int nextRow = 2;
    //     int nextCol = 1;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 0){
    //         cout << "output is good player can't go into obstacle" << status << endl;
    //     }
    //     else{
    //         cout << "output is bad" << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //Checks if player treasure counter goes up
    // {
    //     int nextRow = 4;
    //     int nextCol = 2;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 2){
    //         cout << "output is good player registered the treasure" << endl;
    //     }
    //     else{
    //         cout << "output is bad and didn't change to treasure status" << endl;
    //     }
    //     if (player.treasure >= 1){
    //         cout << "output is good player treasure counter went up" << endl;
    //     }
    //     else{
    //         cout << "output is bad and didn't change to treasure counter" << status << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //checks if u can exit without treasure
    // {
    //     int nextRow = 2;
    //     int nextCol = 2;
    //     player.treasure = 0;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 5 && player.treasure >= 1){
    //         cout << "output is good player escaped with treasure" << endl;
    //     }
    //     else{
    //         cout << "output is bad and escaped without treasure" << status << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //checks if u can go to different room with ?
    // {
    //     int nextRow = 2;
    //     int nextCol = 2;
    //     char** map = loadLevel("example9.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 4){
    //         cout << "output is good player went to different room" << endl;
    //     }
    //     else{
    //         cout << "output is bad and didn't go to different room" << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // // checks if it can register the @
    // {
    //     int nextRow = 4;
    //     int nextCol = 0;
     
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 2){
    //         cout << "output is good player got the magic amulet" << endl;
    //     }
    //     else{
    //         cout << "output is bad and didn't get the magic amulet" << status <<endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    //  // checks if it can move normally
    // {
    //     int nextRow = 2;
    //     int nextCol = 0;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 1){
    //         cout << "output is good player moved" << endl;
    //     }
    //     else{
    //         cout << "output is bad and didn't move and got " << status << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    //  // checks if it can move to the monster
    // {
    //     int nextRow = 0;
    //     int nextCol = 0;
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     int status = doPlayerMove(map, maxRow,maxCol,player, nextRow, nextCol);
    //     if (status == 0){
    //         cout << "output is good player couldn't mvoe to the monster" << endl;
    //     }
    //     else{
    //         cout << "output is bad and got" << status << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // // monster attack
    // {
    //     char** map = loadLevel("example.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //monster attack will kill person
    // {
    //     char** map = loadLevel("example11.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if(mon == true){
    //         cout << "The monster killed the adventurer" << endl;
    //     }
    //     else{
    //         cout << "The monster didn't kill the adventurer" << endl;
    //     }
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //surrounds monster with stuff (@ and $)
    // {
    //     char** map = loadLevel("example12.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //surrounds person on right
    // {
    //     char** map = loadLevel("example13.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //surrounds monster on left
    // {
    //     char** map = loadLevel("example14.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //surrounds monsters top left and bottom 
    // {
    //     char** map = loadLevel("example15.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //surrounds monsters with pillar bottom
    // {
    //     char** map = loadLevel("example18.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //surrounds monsters with pillar on top
    // {
    //     char** map = loadLevel("example16.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    // //surrounds monsters with pillar on left
    // {
    //     char** map = loadLevel("example17.txt", maxRow, maxCol, player);
    //     bool mon = doMonsterAttack(map, maxRow, maxCol, player);
    //     if (map) {
    //         for (int row = 0; row < maxRow; row++) {
    //             delete[] map[row];
    //         }
    //         delete[] map;
    //     }
    // }
    
//     return 0;
// }