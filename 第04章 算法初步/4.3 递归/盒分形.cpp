//不会，直接抄题解了 
#include <cstdio>
#include <cmath>
#include <cstring>
#include<iostream>
using namespace std; 
const int MAXN = 3 * 3 * 3 * 3 * 3 * 3;
char mp[MAXN][MAXN];

void f(int n, int x, int y) {
    if (n == 1) {
        mp[x][y] = 'X';
    }
    else {
        int unit = (int)pow(3, n - 2);
        f(n - 1, x, y);
        f(n - 1, x, y + 2 * unit);
        f(n - 1, x + unit, y + unit);
        f(n - 1, x + 2 * unit, y);
        f(n - 1, x + 2 * unit, y + 2 * unit);
    }
}

int main() {
    int n;
    cin >> n;
    memset(mp, ' ', sizeof(mp));
    f(n, 0, 0);
    int edge = (int)pow(3.0, n - 1);
    for (int i = 0; i < edge; i++) {
        for (int j = 0; j < edge; j++) {
            printf("%c", mp[i][j]);
        }
        printf("\n");
    }
    return 0;
}
