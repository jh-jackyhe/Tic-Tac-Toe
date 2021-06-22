#include <iostream>
#include <vector>
#include "help.h"

std::vector<int> board = {0,0,0,0,0,0,0,0,0};
int step = 0;
int temp = 0;


void is_winner() {
    int c1 = board[0] + board[1] + board[2];
    int c2 = board[0] + board[3] + board[6];
    int c3 = board[0] + board[4] + board[8];
    int c4 = board[3] + board[4] + board[5];
    int c5 = board[6] + board[7] + board[8];
    int c6 = board[1] + board[4] + board[7];
    int c7 = board[2] + board[5] + board[8];
    int c8 = board[2] + board[4] + board[6];
    
    if (c1 == 3 or c2 == 3 or c3 == 3 or c4 == 3 or c5 == 3 or c6 == 3 or c7 == 3 or c8 == 3) {
        std::cout << "P1 wins!\n";
    }
    else if (c1 == 6 or c2 == 6 or c3 == 6 or c4 == 6 or c5 == 6 or c6 == 6 or c7 == 6 or c8 == 6) {
        std::cout << "P2 wins!\n";
    }
    else {
        std::cout << "Draw!\n";
    }
}




bool filled_up() {
    int sum = 0;
    for (int i = 0; i < board.size(); i++) {
        sum += board[i];
    }
    if (sum >= 9) {
        std::cout << "board is full.\n";
        return true;
    }
    else {
        std::cout << "board not full.\n";
        return false;
    }
}


void introduction() {
    std::cout << "Welcome. Let's play Tic-Tac-Toe!\n";
}


void take_turn() {
    while (step <= 8) {
        if (step % 2 == 0) {
            std::cout << "P1, your turn! Which position do you want to mark? 0 - 8\n";
            std::cin >> temp;
            board[temp] = 1;
        }
        else {
            std::cout << "P2, your turn! Which position do you want to mark? 0 - 8\n";
            std::cin >> temp;
            board[temp] = 2;
        }
        step++;
    }
}


void set_position();

void update_board() {

}
void change_player();

void draw() {
 
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[0] << "  |  " << board[1] << "  |  " << board[2] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[3] << "  |  " << board[4] << "  |  " << board[5] << "\n";
 
    std::cout << "_____|_____|_____ \n";
    std::cout << "     |     |      \n";
 
    std::cout << "  " << board[6] << "  |  " << board[7] << "  |  " << board[8] << "\n";
    std::cout << "     |     |      \n";
 
    std::cout << "\n";
}

void end_game();