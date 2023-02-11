#include <bits/stdc++.h>
using namespace std;
const int maxn=100;
vector<int> G[maxn];
vector<int> topoOrder;
int inDegree[maxn]; //入度
int n,m;

void topoSort(){
	int num=0;
	priority_queue<int, vector<int>, greater<int> > q;
	for(int i=0;i<n;i++){
		if(inDegree[i]==0){
			q.push(i); //所有入度为0的顶点入队 
		}
	}
	
	while(!q.empty()){
		int u=q.top();
		
		q.pop();
		topoOrder.push_back(u);
		for(int i=0;i<G[u].size();i++){
			int v=G[u][i]; //u的后继顶点v
			inDegree[v]--;
			if(inDegree[v]==0){
				q.push(v);
			} 
		}
		G[u].clear();
		num++;
	} 
	//return num==n;
}

int main(){
	cin>>n>>m;
	
	int u,v,i;
	for(i=0;i<m;i++){
		cin>>u>>v;
		G[u].push_back(v);
		inDegree[v]++;
	}
	
	topoSort();
	
	int k=topoOrder.size();
	for(i=0;i<k;i++){
		cout<<topoOrder[i];
		if(i<k-1){
			cout<<" ";
		}
	}
	return 0;
} 
