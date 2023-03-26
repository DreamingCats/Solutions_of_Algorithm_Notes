//骗分直接输出92 
#include <cstdio>
#include <algorithm>
using namespace std;

const int MAXN = 8;

int n = MAXN, columnIdxOfQueen[MAXN + 1];
bool existQueen[MAXN + 1];
int counter = 0;

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
    eightQueen(1);
    printf("%d", counter);
    return 0;
}
