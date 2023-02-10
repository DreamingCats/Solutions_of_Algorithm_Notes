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
vector<int> pre[MAXN];

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
            if (!vis[v]) {
                if (d[u] + dis < d[v]) {
                    d[v] = d[u] + dis;
                    pre[v].clear();
                    pre[v].push_back(u);
                } else if (d[u] + dis == d[v]) {
                    pre[v].push_back(u);
                }
            }
        }
    }
}

vector<vector<int> > paths;
vector<int> tempPath;

void DFS(int v, int s) {
    if (v == s) {
        tempPath.push_back(v);
        paths.push_back(tempPath);
        tempPath.pop_back();
        return;
    }
    tempPath.push_back(v);
    for (int i = 0; i < pre[v].size(); i++) {
        DFS(pre[v][i], s);
    }
    tempPath.pop_back();
}

int main() {
    int n, m, s, t;
    scanf("%d%d%d%d", &n, &m, &s, &t);
    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &u, &v, &w);
        G[u].push_back(Edge(v, w));
        G[v].push_back(Edge(u, w));
    }
    dijkstra(n, s);
    DFS(t, s);
    for (int i = 0; i < paths.size(); i++) {
        reverse(paths[i].begin(), paths[i].end());
    }
    sort(paths.begin(), paths.end());
    printf("%d\n", (int)paths.size());
    for (int i = 0; i < paths.size(); i++) {
        for (int j = 0; j < paths[i].size(); j++) {
            printf("%d", paths[i][j]);
            if (j < (int)paths[i].size() - 1) {
                printf("->");
            }
        }
        printf("\n");
    }
    return 0;
}
