//完全背包的物品数量每种有无穷件，01背包只有1件 
#include <bits/stdc++.h>
using namespace std;

const int MOD = 10007;
const int MAXN = 100 + 1;
const int MAXV = 1000 + 1;
int w[MAXN], c[MAXN];
int dp[MAXN][MAXV];
int cnt[MAXN][MAXV];

int main() {
    int n, maxW;
    scanf("%d%d", &n, &maxW);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &w[i]);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &c[i]);
    }
    memset(dp, 0, sizeof(dp));
    for (int v = 0; v <= maxW; v++) {
        cnt[0][v] = 1;
    }
    for (int i = 1; i <= n; i++) {
        for (int v = 0; v <= maxW; v++) {
            if (v >= w[i]) {
                dp[i][v] = max(dp[i - 1][v], dp[i - 1][v - w[i]] + c[i]);
                if (dp[i][v] == dp[i - 1][v]) {
                    cnt[i][v] = cnt[i - 1][v];
                }
                if (dp[i][v] == dp[i - 1][v - w[i]] + c[i]) {
                    cnt[i][v] = (cnt[i][v] + cnt[i - 1][v - w[i]]) % MOD;
                }
            } else {
                dp[i][v] = dp[i - 1][v];
                cnt[i][v] = cnt[i - 1][v];
            }
        }
    }
    printf("%d %d", dp[n][maxW], cnt[n][maxW]);
    return 0;
}
