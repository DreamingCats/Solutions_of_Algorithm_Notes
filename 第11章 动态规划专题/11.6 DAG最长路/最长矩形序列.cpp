#include <bits/stdc++.h>
using namespace std;
const int maxn=100;
const int INF=INT_MAX;
int n;
int G[maxn][maxn];
int dp[maxn];

typedef pair<int,int> Rectangle; 
Rectangle R[maxn];

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
	cin>>n;
	
	int length,width;
	for(int i=0;i<n;i++){
		cin>>length>>width;
		R[i]=Rectangle(length,width);
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((R[i].first<R[j].first && R[i].second<R[j].second) ||
				(R[i].first<R[j].second && R[i].second<R[j].first)){
					G[i][j]=1;
				}
		}
	}
	
	int maxLen=0;
	for(int i=0;i<n;i++){
		maxLen=max(maxLen,DP(i));
	}
	cout<<maxLen+1;
	return 0;
}
