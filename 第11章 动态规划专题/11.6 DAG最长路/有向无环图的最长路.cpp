#include <bits/stdc++.h>
using namespace std;
const int maxn=100;
const int INF=INT_MAX;
int n,m;
int G[maxn][maxn];
int dp[maxn];

int DP(int i){
	if(dp[i]>0){
		return dp[i];
	}
	
	for(int j=0;j<n;j++){
		if(G[i][j]!=INF){
			dp[i]=max(dp[i], DP(j)+G[i][j]);
		}
	}
	return dp[i];
} 

int main(){
	memset(dp,0,sizeof(dp));
	fill(G[0],G[0]+maxn*maxn,INF);
	cin>>n>>m;
	
	int u,v,w;
	for(int i=0;i<m;i++){
		cin>>u>>v>>w;
		G[u][v]=w;
	}
	
	int maxLen=0;
	for(int i=0;i<n;i++){
		maxLen=max(maxLen,DP(i));
	}
	cout<<maxLen;
	return 0;
}
