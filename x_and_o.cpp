#include <iostream>
#include <vector>

using namespace std;

const int ROWS = 6;
const int COLS = 7;

vector<vector<char>> board(ROWS, vector<char>(COLS, ' '));

void printboard() 
{
    for (int i = 0; i < ROWS; ++i) 
    {
        for (int j = 0; j < COLS; ++j) 
        {
            cout << "| " << board[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "-----------------------------" << endl;
}

bool iscolumnfull(int col) 
{
    return board[0][col] != ' ';
}

bool isvalidmove(int col) 
{
    return col >= 0 && col < COLS && !iscolumnfull(col);
}

bool checkwin(char player) 
{
    // Check horizontal
    for (int i = 0; i < ROWS; ++i) 
    {
        for (int j = 0; j <= COLS - 4; ++j) 
        {
            if (board[i][j] == player && board[i][j+1] == player && board[i][j+2] == player && board[i][j+3] == player) 
            {
                return true;
            }
        }
    }

    // Check vertical
    for (int i = 0; i <= ROWS - 4; ++i) 
    {
        for (int j = 0; j < COLS; ++j) 
        {
            if (board[i][j] == player && board[i+1][j] == player && board[i+2][j] == player && board[i+3][j] == player) 
            {
                return true;
            }
        }
    }

    // Check diagonal
    for (int i = 0; i <= ROWS - 4; ++i) 
    {
        for (int j = 0; j <= COLS - 4; ++j) 
        {
            if (board[i][j] == player && board[i+1][j+1] == player && board[i+2][j+2] == player && board[i+3][j+3] == player) 
            {
                return true;
            }
            if (board[i][j+3] == player && board[i+1][j+2] == player && board[i+2][j+1] == player && board[i+3][j] == player) 
            {
                return true;
            }
        }
    }

    return false;
}

bool isboardfull() {
    for (int i = 0; i < ROWS; ++i) 
    {
        for (int j = 0; j < COLS; ++j) 
        {
            if (board[i][j] == ' ') 
            {
                return false;
            }
        }
    }
    return true;
}

int main() 
{
    char currentPlayer = 'X';
    bool gameover = false;

    while (!gameover) 
    {
        printboard();

        int col;
        cout << "Player " << currentPlayer << ", enter column (0-6) to drop your piece: ";
        cin >> col;

        if (isvalidmove(col)) 
        {
            // Find the lowest empty row in the selected column
            int row = ROWS - 1;
            while (row >= 0 && board[row][col] != ' ') 
            {
                row--;
            }
            board[row][col] = currentPlayer;

            if (checkwin(currentPlayer)) 
            {
                printboard();
                cout << "Player " << currentPlayer << " wins!" << endl;
                gameover = true;
            } else if (isboardfull()) 
            {
                printboard();
                cout << "It's a tie!" << endl;
                gameover = true;
            }

            // Switch players
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        } else 
        {
            cout << "Invalid move. Please try again." << endl;
        }
    }

    return 0;
}