#include <bits/stdc++.h>
#include <vector>
using namespace std;

const int INF=INT_MAX;
const int maxn=100;
int d[maxn],pre[maxn];
bool visited[maxn];

struct Edge{
	int v,dis;
	Edge(int vv,int dd){
		v=vv;
		dis=dd;
	}
};

vector<Edge> G[maxn];
vector<int> path;

void dijk(int n,int s){
	fill(d, d + maxn, INF);
	memset(pre, -1, sizeof(pre));
    memset(visited, false, sizeof(visited));
	
	d[s]=0;
	for(int i=0;i<n;i++){
		int u=-1,minD=INF;
		
		for(int j=0;j<n;j++){
			if(!visited[j] && d[j]<minD){
				u=j;
				minD=d[j];
			}
		}
		
		if(u==-1){
			return;
		}
		
		visited[u]=true;
		for(int j=0;j<G[u].size();j++){
			int v=G[u][j].v;
			int dis=G[u][j].dis;
			if(!visited[v] && d[u]+dis<d[v]){
				d[v]=d[u]+dis;
				pre[v]=u;
			}
		}
	}
}

void DFS(int v,int s){
	if(v==s){
		path.push_back(v);
		return;
	}
	
	DFS(pre[v],s);
	path.push_back(v);
}

int main(){
	int n,m,s,t;
	cin>>n>>m>>s>>t;
	
	int i,u,v,w;
	for(i=0;i<m;i++){
		cin>>u>>v>>w;
		G[u].push_back(Edge(v,w));
		G[v].push_back(Edge(u,w));
	}
	
	dijk(n,s);
	DFS(t,s);
	
	cout<<(d[t]==INF?-1:d[t])<<" ";
	int num=path.size();
	for(i=0;i<num;i++){
		cout<<path[i];
		if(i<num-1){
			cout<<"->";
		}
	}
	return 0;
}
