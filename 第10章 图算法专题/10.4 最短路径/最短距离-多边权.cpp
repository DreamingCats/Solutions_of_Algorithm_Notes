#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int INF=INT_MAX;
const int maxn=100;
int DIST[maxn],COST[maxn];
bool visited[maxn];

struct Edge{
	int v,dist,cost;
	Edge(int _v,int _d,int _c){
		v=_v;
		dist=_d;
		cost=_c;
	}
};

vector<Edge> G[maxn];

void dijk(int n,int s){
	fill(DIST, DIST+maxn, INF);
	fill(COST, COST+maxn, INF); 
    memset(visited, false, sizeof(visited));
	
	DIST[s]=0;
	COST[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,minD=INF;
		
		for(int j=0;j<n;j++){
			if(!visited[j] && DIST[j]<minD){
				u=j;
				minD=DIST[j];
			}
		}
		
		if(u==-1){
			return;
		}
		
		visited[u]=true;
		for(int j=0;j<G[u].size();j++){
			int v=G[u][j].v;
			int dist2=G[u][j].dist;
			int cost2=G[u][j].cost;
			
			if(!visited[v] && DIST[u]+dist2<DIST[v]){
				DIST[v]=DIST[u]+dist2;
				COST[v]=COST[u]+cost2;
			}
			else if(DIST[u]+dist2==DIST[v] && COST[u]+cost2<COST[v]){
				COST[v]=COST[u]+cost2;
			}
		}
	}
}

int main(){
	int n,m,s,t;
	cin>>n>>m>>s>>t;
	
	int i,u,v,dist,cost;
	for(i=0;i<m;i++){
		cin>>u>>v>>dist>>cost;
		G[u].push_back(Edge(v,dist,cost));
		G[v].push_back(Edge(u,dist,cost));
	}
	
	dijk(n,s);
	
	cout<<DIST[t]<<" "<<COST[t];
	return 0;
}
