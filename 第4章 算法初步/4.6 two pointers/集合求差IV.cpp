#include <cstdio>

const int MAXV = 10001;
int hashTable[MAXV] = {0};

int main () {
    int n, m, x;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        hashTable[x]++;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        hashTable[x]--;
    }
    bool isFirst = true;
    for (int i = 1; i < MAXV; i++) {
        for (int j = 0; j < hashTable[i]; j++) {
            if (!isFirst) {
                printf(" ");
            }
            printf("%d", i);
            isFirst = false;
        }
    }
    return 0;
}
