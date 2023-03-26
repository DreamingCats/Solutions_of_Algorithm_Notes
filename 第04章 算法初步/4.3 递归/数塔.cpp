#include <cstdio>
#include<iostream>
#include <algorithm>
using namespace std;

const int MAXN = 20 + 1;
int n, a[MAXN][MAXN];

int getMax(int i, int j) {
    if (i == n) {
        return a[n][j];
    }
    else {
        return max(getMax(i + 1, j), getMax(i + 1, j + 1)) + a[i][j];
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin>>a[i][j];
        }
    }
    cout<<getMax(1, 1);
    return 0;
}
