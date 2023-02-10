#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int layers[maxn];
vector<int> G[maxn];
bool inQ[maxn]={false};

void BFS(int s){
	queue<int> q;
	q.push(s);
	inQ[s]=true;
	int layer=0;
	
	while(!q.empty()){
		int cnt=q.size();
		for(int i=0;i<cnt;i++){
			int front=q.front();
			q.pop();
			layers[front]=layer;
			
			for(int j=0;j<G[front].size();j++){
				int v=G[front][j];
				if(!inQ[v]){
					q.push(v);
					inQ[v]=true;
				}
			}
		}
		layer++;
	}
	
}

int main(){
	int n,m,s,k;
	cin>>n>>m>>s>>k;
	
	int i,u,v;
	for(i=0;i<m;i++){
		cin>>u>>v;
		G[u].push_back(v);
		G[v].push_back(u);
	}
	
	BFS(s);
	
	for(int i=0;i<n;i++){
		cout<<layers[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	return 0;
}
