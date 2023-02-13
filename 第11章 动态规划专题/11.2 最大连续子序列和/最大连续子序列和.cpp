#include <bits/stdc++.h>
using namespace std;

const int maxn=10000;
int a[maxn]; //存放序列 
int dp[maxn]; //dp[i]存放以a[i]结尾的连续序列的最大和


int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	dp[0]=a[0]; //边界
	for(i=1;i<n;i++){
		dp[i]=max(a[i], dp[i-1]+a[i]); //状态转移方程 
	} 
	
	//dp[i]存放以a[i]结尾的连续序列的最大和，需要遍历i得到最大的才是结果
	int k=0;
	for(i=1;i<n;i++){
		if(dp[i]>dp[k]){
			k=i;
		}
	} 
	cout<<dp[k];
	return 0;
} 
