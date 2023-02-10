#include <cstdio>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
vector<int> G[MAXN];
int vis[MAXN];

bool isLoop(int u) {
    vis[u] = 0;
    for (int i = 0; i < G[u].size(); i++) {
        int v = G[u][i];
        if ((vis[v] == -1 && isLoop(v)) ||vis[v] == 0) {
            return true;
        } 
    }
    vis[u] = 1;
    return false;
}

int main() {
    memset(vis, -1, sizeof(vis));
    int n, m, u, v;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++) {
        scanf("%d%d", &u, &v);
        G[u].push_back(v);
    }
    int judge = false;
    for (int i = 0; i < n; i++) {
        if (vis[i] == -1 && isLoop(i)) {
            judge = true;
        }
        if (judge) {
            break;
        }
    }
    printf(judge ? "Yes" : "No");
    return 0;
}
