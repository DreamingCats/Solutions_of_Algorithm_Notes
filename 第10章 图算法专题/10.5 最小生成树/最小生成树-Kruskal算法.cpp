#include <bits/stdc++.h>
using namespace std;

const int MAXN = 10000;

struct Edge {
    int u, v, w;
    Edge(int _u, int _v, int _w) {
        u = _u, v = _v, w = _w;
    }
};

vector<Edge> edges;

bool cmp(Edge a, Edge b) {
    return a.w < b.w;
}

int father[MAXN];

int findFather(int x) {
    int xCopy = x;
    while (father[x] != x) {
        x = father[x];
    }
    int root = x;
    x = xCopy;
    while (father[x] != x) {
        int fatherX = father[x];
        father[x] = root;
        x = fatherX;
    }
    return root;
}

int Kruskal(int n, int m) {
    for (int i = 0; i < n; i++) {
        father[i] = i;
    }
    int weightSum = 0, edgeCount = 0;
    sort(edges.begin(), edges.end(), cmp);
    for (int i = 0; i < m; i++) {
        int faU = findFather(edges[i].u);
        int faV = findFather(edges[i].v);
        if (faU != faV) {
            father[faU] = faV;
            weightSum += edges[i].w;
            edgeCount++;
        }
        if (edgeCount == n - 1) {
            break;
        }
    }
    if (edgeCount != n - 1) {
        return -1;
    } else {
        return weightSum;
    }
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &u, &v, &w);
        edges.push_back(Edge(u, v, w));
    }
    printf("%d",Kruskal(n, m));
    return 0;
}
