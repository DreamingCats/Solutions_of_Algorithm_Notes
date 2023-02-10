#include <iostream>
#include <vector>
using namespace std;
const int maxn=100;
vector<int> G[maxn];
bool visited[maxn]={false};

void DFS(int u){
	visited[u]=true;
	for(int i=0;i<G[u].size();i++){
		int v=G[u][i];
		if(!visited[v]){
			DFS(v);
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	
	int u,v;
	for(int i=0;i<m;i++){
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	int cnt=0;
	for(int i=0;i<n;i++){
		if(!visited[i]){
			DFS(i);
			cnt++;
		}
	}
	//由上题，判断连通块个数是否为1即可 
	cout<<(cnt==1?"Yes":"No");
	return 0;
}
