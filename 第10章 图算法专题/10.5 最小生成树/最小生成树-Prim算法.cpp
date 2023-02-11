#include <bits/stdc++.h>
using namespace std;

const int MAXN = 500;
const int INF = INT_MAX;

struct Edge {
    int v, dis;
    Edge(int _v, int _dis) {
        v = _v, dis = _dis;
    }
};

vector<Edge> G[MAXN];
int d[MAXN];
bool vis[MAXN];

int Prim(int n) {
    fill(d, d + MAXN, INF);
    memset(vis, false, sizeof(vis));
    d[0] = 0;
    int weightSum = 0;
    for (int i = 0; i < n; i++) {
        int u = -1, minDis = INF;
        for (int j = 0; j < n; j++) {
            if (!vis[j] && d[j] < minDis) {
                u = j;
                minDis = d[j];
            }
        }
        if (u == -1) {
            return -1;
        }
        vis[u] = true;
        weightSum += d[u];
        for (int j = 0; j < G[u].size(); j++) {
            int v = G[u][j].v;
            int dis = G[u][j].dis;
            if (!vis[v] && dis < d[v]) {
                d[v] = dis;
            }
        }
    }
    return weightSum;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &u, &v, &w);
        G[u].push_back(Edge(v, w));
        G[v].push_back(Edge(u, w));
    }
    printf("%d", Prim(n));
    return 0;
}
