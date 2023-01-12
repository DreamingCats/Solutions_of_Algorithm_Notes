#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

const int MAXN = 20;
const int MAXL = 51;
char str[MAXN][MAXL];

int main() {
    int n, minL = MAXL;
    cin >> n;
    getchar();
    for (int i = 0; i < n; i++) {
        cin.getline(str[i], MAXL);
        minL = min(minL, (int)strlen(str[i]));
    }
    for (int j = 0; j < minL; j++) {
        bool isSame = true;
        for (int i = 1; i < n; i++) {
            if (str[i][j] != str[0][j]) {
                isSame = false;
                break;
            }
        }
        if (isSame) {
            printf("%c", str[0][j]);
        } else {
            break;
        }
    }
    printf("\n");
    return 0;
}
