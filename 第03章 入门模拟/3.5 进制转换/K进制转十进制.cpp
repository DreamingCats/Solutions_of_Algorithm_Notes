#include <cstdio>
#include <cstring>

const int MAXN = 8;
char radixK[MAXN];

int main() {
    int k;
    scanf("%s %d", radixK, &k);
    int radix10 = 0, base = 1, lenRadixK = strlen(radixK);
    for (int i = lenRadixK - 1; i >= 0; i--) {
        int thisPosition = (radixK[i] >= '0' && radixK[i] <= '9') ? (radixK[i] - '0') : (radixK[i] - 'A' + 10);
        radix10 += thisPosition * base;
        base *= k;
    }
    printf("%d", radix10);
    return 0;
}
