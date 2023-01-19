#include <cstdio>

const int MAXV = 10001;
bool hashTable[MAXV] = {false};

int main () {
    int n, m, x;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        hashTable[x] = true;
    }
    for (int i = 0; i < m; i++) {
        scanf("%d", &x);
        hashTable[x] = true;
    }
    bool isFirst = true;
    for (int i = 1; i < MAXV; i++) {
        if (hashTable[i]) {
            if (!isFirst) {
                printf(" ");
            }
            printf("%d", i);
            isFirst = false;
        }
    }
    return 0;
}
