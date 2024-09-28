#include <iostream>
#include <vector>

using namespace std;

// The chess board
vector<vector<char>> board = {
    {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
    {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
    {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
    {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
};

// Function to draw the chess board
void drawBoard() {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

// Function to handle player move
void playerMove() {
    int fromRow, fromCol, toRow, toCol;
    cout << "Enter the row and column of the piece you want to move (1-8): ";
    cin >> fromRow >> fromCol;
    cout << "Enter the row and column of the destination (1-8): ";
    cin >> toRow >> toCol;

    // Check if the move is valid
    if (board[fromRow - 1][fromCol - 1]!= ' ' && board[fromRow - 1][fromCol - 1]!= 'P' && board[fromRow - 1][fromCol - 1]!= 'p') {
        // Check if the destination is empty
        if (board[toRow - 1][toCol - 1] == ' ') {
            // Move the piece
            board[toRow - 1][toCol - 1] = board[fromRow - 1][fromCol - 1];
            board[fromRow - 1][fromCol - 1] = ' ';
        } else {
            cout << "Invalid move, try again.\n";
            playerMove();
        }
    } else {
        cout << "Invalid move, try again.\n";
        playerMove();
    }
}

int main() {
    while (true) {
        drawBoard();
        playerMove();
    }

    return 0;
}