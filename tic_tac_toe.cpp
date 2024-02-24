#include <iostream>
#include <vector>
#include <string>

using namespace std;

const int BOARD_SIZE = 3;
const char EMPTY = ' ';
const char PLAYER_X = 'X';
const char PLAYER_O = 'O';

vector<vector<char>> board(BOARD_SIZE, vector<char>(BOARD_SIZE, EMPTY));

void printBoard() 
{
    for (int i = 0; i < BOARD_SIZE; ++i) 
    {
        for (int j = 0; j < BOARD_SIZE; ++j) 
        {
            cout << board[i][j];
            if (j < BOARD_SIZE - 1) 
            {
                cout << " | ";
            }
        }
        cout << endl;
        if (i < BOARD_SIZE - 1) 
        {
            cout << "---------" << endl;
        }
    }
}

bool isValidMove(int row, int col) 
{
    return row >= 0 && row < BOARD_SIZE && col >= 0 && col < BOARD_SIZE && board[row][col] == EMPTY;
}

bool checkWin(char player) 
{
    // Check rows and columns
    for (int i = 0; i < BOARD_SIZE; ++i) 
    {
        if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
            (board[0][i] == player && board[1][i] == player && board[2][i] == player)) 
            {
            return true;
            }
    }

    // Check diagonals
    if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
        (board[0][2] == player && board[1][1] == player && board[2][0] == player)) 
        {
        return true;
        }

    return false;
}

bool isBoardFull() 
{
    for (int i = 0; i < BOARD_SIZE; ++i) 
    {
        for (int j = 0; j < BOARD_SIZE; ++j) 
        {
            if (board[i][j] == EMPTY) 
            {
                return false;
            }
        }
    }
    return true;
}

int main() 
{
    char currentPlayer = PLAYER_X;
    bool gameover = false;

    while (!gameover) 
    {
        cout << "Current board:" << endl;
        printBoard();

        int row, col;
        cout << "Player " << currentPlayer << ", enter your move (row col): ";
        cin >> row >> col;

        if (isValidMove(row, col)) 
        {
            board[row][col] = currentPlayer;

            if (checkWin(currentPlayer)) 
            {
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameover = true;
            } else if (isBoardFull()) 
            {
                cout << "It's a tie!" << endl;
                gameover = true;
            }

            // Switch players
            currentPlayer = (currentPlayer == PLAYER_X) ? PLAYER_O : PLAYER_X;
        } 
        else 
        {
            cout << "Invalid move. Please try again." << endl;
        }
    }

    cout << "Final board:" << endl;
    printBoard();

    return 0;
}
