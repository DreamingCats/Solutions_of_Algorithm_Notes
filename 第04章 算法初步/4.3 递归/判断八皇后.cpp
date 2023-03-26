#include <iostream>
#include <cmath>

using namespace std;

bool isSafe(int board[8][8], int row, int col) {
    int i, j;

    // Check this row on left side
    for (i = 0; i < col; i++) {
        if (board[row][i]) {
            return false;
        }
    }

    // Check upper diagonal on left side
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    // Check lower diagonal on left side
    for (i = row, j = col; j >= 0 && i < 8; i++, j--) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;
}

bool solve(int board[8][8], int col) {
    for (int i = 0; i < 8; i++) {
        if (board[i][col]) {
            if (isSafe(board, i, col)) {
                board[i][col] = 0;

                if (solve(board, col + 1)) {
                    return true;
                }

                board[i][col] = 1; // backtrack
            } else {
                return false;
            }
        }
    }

    return false;
}

int main() {
    int board[8][8] = {0};

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> board[i][j];
        }
    }

    if (solve(board, 0)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}

