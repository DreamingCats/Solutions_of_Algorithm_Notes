#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int M[maxn][maxn]; //¾ØÕó
int dp[maxn][maxn]={0};

int main(){
	int n,m;
	cin>>n>>m;
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>M[i][j];
		} 
	}
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j]=max(dp[i][j-1], dp[i-1][j]) +M[i][j];
		} 
	}
	cout<<dp[n][m];
	return 0;
}
