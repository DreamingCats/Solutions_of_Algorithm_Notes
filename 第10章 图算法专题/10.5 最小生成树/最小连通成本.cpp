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

int G[MAXN][MAXN];
int d[MAXN],linked[MAXN];
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
        for (int v = 0; v < n; v++) {
            if (!vis[v] && G[u][v] < d[v]) {
                d[v] = G[u][v];
            }
        }
    }
    return weightSum;
}

int main() {
    int n, k;
    cin>>n>>k;
    
    int i,j;
    for (i = 0; i < n; i++) {
        for(j=0;j<n;j++){
        	cin>>G[i][j];
		}
    }
    
    for(i=0;i<k;i++){
    	cin>>linked[i];
	}
    
    for(i=0;i<k;i++){
    	for(j=0;j<i;j++){
    		G[linked[i]][linked[j]]=G[linked[j]][linked[i]]=0;
		}
	}
    
    cout<<Prim(n);
    return 0;
}
