#include <bits/stdc++.h>
using namespace std;

const int maxn=100; //物品最大件数
const int maxv=1000; //背包容量上限
int w[maxn] ,c[maxn],dp[maxv];

int main(){
	int n,v;
	cin>>n>>v;

	for(int i=0;i<n;i++){
		cin>>w[i];
	}
	for(int i=0;i<n;i++){
		cin>>c[i];
	}
	
	memset(dp,0,sizeof(dp));
	
	for(int i=0;i<=n;i++){
		for(int j=v;j>=w[i];j--){
			//状态转移方程
			 dp[j]=max(dp[j], dp[j-w[i]]+c[i]); 
		}
	}
	
	//最大的即为答案 
	int maxValue=0;
	for(int i=0;i<=v;i++){
		if(dp[i]>maxValue){
			maxValue=dp[i];
		}
	}
	cout<<maxValue;
	return 0;
}
