#include <bits/stdc++.h>
using namespace std;
const int maxn=100;
const int INF=INT_MAX;
int n,m;
int G[maxn][maxn];
int dp[maxn],choice[maxn];

int DP(int i){
	if(dp[i]>0){
		return dp[i];
	}
	
	for(int j=0;j<n;j++){
		if(G[i][j]!=INF){
			int temp=DP(j)+G[i][j];
			if(temp>dp[i]){
				dp[i]=temp;
				choice[i]=j;
			}
		}
	}
	return dp[i];
} 

void printPath(int i){
	cout<<i;
	while(choice[i]!=-1){
		i=choice[i];
		printf("->%d",i);
	}
}

int main(){
	memset(dp,0,sizeof(dp));
	memset(choice,-1,sizeof(choice));
	fill(G[0],G[0]+maxn*maxn,INF);
	cin>>n>>m;
	
	int u,v,w;
	for(int i=0;i<m;i++){
		cin>>u>>v>>w;
		G[u][v]=w;
	}
	
	int maxLen=0,k;
	for(int i=0;i<n;i++){
		int temp2=DP(i);
		if(temp2>maxLen){
			maxLen=temp2;
			k=i;
		}
	}
	printPath(k);
	return 0;
}
