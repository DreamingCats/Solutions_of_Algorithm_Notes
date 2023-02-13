#include <bits/stdc++.h>
using namespace std;

const int maxn=10000;
int a[maxn],b[maxn],c[maxn];
int dp[maxn][3];


int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>c[i];
	} 
	
	dp[0][0]=a[0];
	dp[0][1]=b[0];
	dp[0][2]=c[0];
	for(int i=1;i<n;i++){
		dp[i][0]=min(dp[i-1][1] , dp[i-1][2]) +a[i];
		dp[i][1]=min(dp[i-1][0] , dp[i-1][2]) +b[i];
		dp[i][2]=min(dp[i-1][0] , dp[i-1][1]) +c[i];
	}
	
	//取三者最小值
	int temp=min(dp[n-1][0] , dp[n-1][1]);
	int cost=min(temp , dp[n-1][2]);
	cout<<cost;
	return 0;
}
