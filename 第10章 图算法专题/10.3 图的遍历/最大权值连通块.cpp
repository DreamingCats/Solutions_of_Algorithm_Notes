#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int value[maxn];
vector<int> G[maxn];
bool visited[maxn]={false};

int DFS(int u){
	visited[u]=true;
	int sum=value[u];
	for(int i=0;i<G[u].size();i++){
		int v=G[u][i];
		if(!visited[v]){
			sum+=DFS(v);
		}
	}
	return sum;
}

int main(){
	int n,m;
	cin>>n>>m;
	
	int i;
	for(i=0;i<n;i++){
		cin>>value[i];
	}
	
	int u,v;
	for(i=0;i<m;i++){
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	int ans=0;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			ans=max(ans,DFS(i));
		}
	}
	cout<<ans;
	return 0;
}
