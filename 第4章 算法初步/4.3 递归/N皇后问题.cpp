//上题的8改成N即可 
#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

const int MAXN = 20;

int columnIdxOfQueen[MAXN + 1];
bool existQueen[MAXN + 1];
int counter = 0;
int n;

void eightQueen(int rowIdx) {
    if (rowIdx == n + 1) {
        counter++;
        return;
    }
    for (int colIdx = 1; colIdx <= n; colIdx++) {
        if (!existQueen[colIdx]) {
            bool isDiagonalValid = true;
            for (int preRowIdx = 1; preRowIdx < rowIdx; preRowIdx++) {
                if (abs(rowIdx - preRowIdx) == abs(colIdx - columnIdxOfQueen[preRowIdx])) {
                    isDiagonalValid = false;
                    break;
                }
            }
            if (isDiagonalValid) {
                columnIdxOfQueen[rowIdx] = colIdx;
                existQueen[colIdx] = true;
                eightQueen(rowIdx + 1);
                existQueen[colIdx] = false;
            }
        }
    }
}

int main() {
	cin>>n;
    eightQueen(1);
    cout<<counter;
    return 0;
}
