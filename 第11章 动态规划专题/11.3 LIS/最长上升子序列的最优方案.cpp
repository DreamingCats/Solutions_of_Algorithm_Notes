#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int a[maxn],dp[maxn],pre[maxn];

int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	memset(pre,-1,sizeof(pre));
	int k,maxLen=0;
	for(i=0;i<n;i++){
		dp[i]=1; //边界初始条件（先假设每个元素自成一个子序列） 
		for(int j=0;j<i;j++){
			if(a[i]>=a[j] && dp[i]<dp[j]+1){
				dp[i]=dp[j]+1; //状态转移方程 
				pre[i]=j;
			}
		}
		if(dp[i]>maxLen){
			maxLen=dp[i];
			k=i;
		}
		maxLen=max(maxLen,dp[i]);
	}	
	cout<<maxLen<<endl;
	
	vector<int> seq;
	while(k!=-1){
		seq.push_back(a[k]);
		k=pre[k];
	}
	reverse(seq.begin(),seq.end());
	for(i=0;i<maxLen;i++){
		cout<<seq[i];
		if(i<maxLen-1){
			cout<<" ";
		}
	}
	return 0;
}
