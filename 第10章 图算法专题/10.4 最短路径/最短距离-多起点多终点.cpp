#include <bits/stdc++.h>
using namespace std;

const int maxn = 100;
const int INF = INT_MAX;

int d[maxn][maxn];

void floyd(int n){
	for(int k=0;k<n;k++){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(d[i][k]!=INF && d[k][j]!=INF && d[i][k]+d[k][j]<d[i][j]){
					d[i][j]=d[i][k]+d[k][j];
				}
			}
		}
	}
}

int main(){
	int n,m;
	cin>>n>>m;
	fill(d[0],d[0]+maxn*maxn,INF);
	
	for(int i=0;i<n;i++){
		d[i][i]=0;
	}
	
	int u,v,w;
	for(int i=0;i<m;i++){
		cin>>u>>v>>w;
		d[u][v]=d[v][u]=w; //ÎÞÏòÍ¼ 
	}
	
	floyd(n); 
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<(d[i][j]==INF?-1:d[i][j]);
			if(j<n-1){
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
