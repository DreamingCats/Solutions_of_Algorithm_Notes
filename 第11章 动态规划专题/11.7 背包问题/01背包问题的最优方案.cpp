#include <bits/stdc++.h>
using namespace std;

const int maxn=101; //物品最大件数
const int maxv=1001; //背包容量上限
int w[maxn] ,c[maxn];
int dp[maxn][maxv],choice[maxn][maxv];

int main(){
	int n,v;
	cin>>n>>v;

	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=1;i<=n;i++){
		cin>>c[i];
	}
	
	memset(dp,0,sizeof(dp));
	memset(choice,-1,sizeof(choice));
	
	for(int i=n;i>=1;i--){
		for(int j=0;j<=v;j++){
			if(j>=w[i] && dp[i+1][j-w[i]]+c[i]>=dp[i+1][j]){
				dp[i][j]=dp[i+1][j-w[i]]+c[i];
				choice[i][j]=0;
			}
			else{
				dp[i][j]=dp[i+1][j];
				choice[i][j]=1;
			}
		}
	}
	
	cout<<dp[1][v]<<endl;
	
	vector<int> chosenItem;
	int j=v;
	for(int i=1;i<=n;i++){
		if(choice[i][j]==0){
			chosenItem.push_back(i);
			j-=w[i];
		}
	} 
	
	int num=chosenItem.size();
	for(int i=0;i<num;i++){
		cout<<chosenItem[i];
		if(i<num-1){
			cout<<" ";
		}
	}
	
	return 0;
}
