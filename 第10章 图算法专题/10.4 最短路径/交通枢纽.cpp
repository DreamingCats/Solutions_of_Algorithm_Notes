#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;
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

void dijkstra(int n, int s) {
    fill(d, d + MAXN, INF);
    memset(vis, false, sizeof(vis));
    d[s] = 0;
    for (int i = 0; i < n; i++) {
        int u = -1, minDis = INF;
        for (int j = 0; j < n; j++) {
            if (!vis[j] && d[j] < minDis) {
                u = j;
                minDis = d[j];
            }
        }
        if (u == -1) {
            return;
        }
        vis[u] = true;
        for (int j = 0; j < G[u].size(); j++) {
            int v = G[u][j].v;
            int dis = G[u][j].dis;
            if (!vis[v] && d[u] + dis < d[v]) {
                d[v] = d[u] + dis;
            }
        }
    }
}

int main() {
    int n, m, k, s;
    scanf("%d%d%d", &n, &m, &k);
    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &u, &v, &w);
        G[u].push_back(Edge(v, w));
        G[v].push_back(Edge(u, w));
    }
    int centerId, centerDisSum = INF;
    for (int i = 0; i < k; i++) {
        scanf("%d", &s);
        dijkstra(n, s);
        int disSum = 0;
        for (int j = 0; j < n; j++) {
            disSum += d[j];
        }
        if (disSum < centerDisSum) {
            centerId = s;
            centerDisSum = disSum;
        } else if (disSum == centerDisSum && s < centerId) {
            centerId = s;
        }
    }
    printf("%d %d", centerId, centerDisSum);
    return 0;
}
