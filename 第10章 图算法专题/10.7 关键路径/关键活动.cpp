#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100;

struct Edge {
    int v, w;
    Edge(int _v, int _w) {
        v = _v, w = _w;
    }
};

vector<Edge> G[MAXN];
int inDegree[MAXN] = {0};
vector<int> topoOrder;
int ve[MAXN], vl[MAXN];
vector<int> activity[MAXN];

bool topoSort(int n) {
    priority_queue<int, vector<int>, greater<int> > q;
    for (int i = 0; i < n; i++) {
        if (inDegree[i] == 0) {
            q.push(i);
        }
    }
    
    int num=0;
    while (!q.empty()) {
        int u = q.top();
        q.pop();
        topoOrder.push_back(u);
        for (int i = 0; i < G[u].size(); i++) {
            int v = G[u][i].v;
            inDegree[v]--;
            if (inDegree[v] == 0) {
                q.push(v);
            }
            if (ve[u] + G[u][i].w > ve[v]) {
                ve[v] = ve[u] + G[u][i].w;
            }
        }
        num++;
    }
    return num == n;
}

int getPath(int n) {
    memset(ve, 0, sizeof(ve));
    if (!topoSort(n)) {
        return -1;
    }
    int maxLength = 0;
    for(int i = 0; i < n; i++) {
        if(ve[i] > maxLength) {
            maxLength = ve[i];
        }
    }
    
    fill(vl,vl+n,maxLength);
    for(int i=n-1;i>=0;i--){
    	int u = topoOrder[i];
        for (int j = 0; j < G[u].size(); j++) {
            int v = G[u][j].v;
            int w = G[u][j].w;
            if (vl[v] - w < vl[u]) {
                vl[u] = vl[v] - w;
            }
        }
	}
	
	for (int u = 0; u < n; u++) {
        for (int i = 0; i < G[u].size(); i++) {
            int v = G[u][i].v;
            int w = G[u][i].w;
            int e = ve[u], l = vl[v] - w;
            if (e == l) {
                activity[u].push_back(v);
            }
        }
    }
    
    return maxLength;
}

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int u, v, w;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &u, &v, &w);
        G[u].push_back(Edge(v, w));
        inDegree[v]++;
    }
    
    if (getPath(n) == -1) {
        printf("No");
    } else {
        printf("Yes\n");
        for(int i=0;i<n;i++){
        	sort(activity[i].begin(),activity[i].end());
        	for (int j = 0; j < activity[i].size(); j++) {
                printf("%d %d\n", i, activity[i][j]);
            }
		}
    }
    return 0;
}
