#include <cstdio>
#include <cmath>
#include <cstring>
#include<iostream>
const int MAXN = 3 * 3 * 3 * 3 * 3 * 3;
char mp[MAXN][MAXN];
using namespace std;
void f(int n, int x, int y) {
    if (n == 1) {
        mp[x][y] = ' ';
    }
    else {
        int unit = (int)pow(3.0, n - 2);
        for (int i = x + unit; i < x + 2 * unit; i++) {
            for (int j = y + unit; j < y + 2 * unit; j++) {
                mp[i][j] = 'X';
            }
        }
        f(n - 1, x, y);
        f(n - 1, x, y + unit);
        f(n - 1, x, y + 2 * unit);
        f(n - 1, x + unit, y);
        f(n - 1, x + unit, y + 2 * unit);
        f(n - 1, x + 2 * unit, y);
        f(n - 1, x + 2 * unit, y + unit);
        f(n - 1, x + 2 * unit, y + 2 * unit);
    }
}

int main() {
    int n;
    cin >> n;
    memset(mp, ' ', sizeof(mp));
    f(n, 0, 0);
    int edge = (int)pow(3.0, n - 1);
    for (int i = 0; i < edge + 2; i++) {
        printf("+");
    }
    printf("\n");
    for (int i = 0; i < edge; i++) {
        printf("+");
        for (int j = 0; j < edge; j++) {
            printf("%c", mp[i][j]);
        }
        printf("+\n");
    }
    for (int i = 0; i < edge + 2; i++) {
        printf("+");
    }
    printf("\n");
    return 0;
}
