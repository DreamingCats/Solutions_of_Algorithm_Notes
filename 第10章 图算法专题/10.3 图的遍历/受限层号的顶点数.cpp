//ÓÐÏòÍ¼ 
#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int layers[maxn];
vector<int> G[maxn];
bool inQ[maxn]={false};

int BFS(int s,int maxLayer){
	queue<int> q;
	q.push(s);
	inQ[s]=true;
	int layer=0,vCnt=0;
	
	while(!q.empty() && layer<=maxLayer){
		int cnt=q.size();
		vCnt+=cnt;
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
	return vCnt;
}

int main(){
	int n,m,s,k;
	cin>>n>>m>>s>>k;
	
	int i,u,v;
	for(i=0;i<m;i++){
		cin>>u>>v;
		G[u].push_back(v);
	}
	
	cout<<BFS(s,k);
	return 0;
}
