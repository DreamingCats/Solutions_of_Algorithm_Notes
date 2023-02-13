#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int a[maxn],dp[maxn];

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int len=-1; //记录最大的dp[i] 
	for(int i=0;i<n;i++){
		dp[i]=1; //边界初始条件（先假设每个元素自成一个子序列） 
		for(int j=0;j<i;j++){
			if(a[i]>=a[j] && dp[i]<dp[j]+1){
				dp[i]=dp[j]+1; //状态转移方程 
			}
		}
		len=max(len,dp[i]);
	}
	
	cout<<len;
	return 0;
}
