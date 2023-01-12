#include <cstdio>
#include <cstring>

const int MAXN = 100;
char matrix[MAXN][MAXN];

int main() {
    int n;
    scanf("%d", &n);
    memset(matrix, 0, sizeof(matrix));
    for (int i = 0; i < n; i++) {
        int numSpace = (i < n / 2) ? (n - i) : (i + 1);
        for (int j = 0; j < numSpace; j++) {
            matrix[i][j] = ' ';
        }
    }
    for (int i = 0; i < n; i++) {
        matrix[i][i] = matrix[i][n - i - 1] = '*';
    }
    for (int i = 0; i < n; i++) {
        puts(matrix[i]);
    }
    return 0;
}

//用官方题解了，我写的差末尾几个空格 
