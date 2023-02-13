#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int tower[maxn][maxn],dp[maxn][maxn];

int main(){
	int n;
	cin>>n;
	
	int i,j;
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			cin>>tower[i][j];
		}
	}
	
	//�߽�
	for(j=1;j<=n;j++){
		dp[n][j]=tower[n][j];
	} 
	
	//�ӵ�n-1�㲻�����ϼ����dp[i][j]
	for(i=n-1;i>=1;i--){
		for(j=1;j<=i;j++){
			dp[i][j]=max(dp[i+1][j],dp[i+1][j+1]) +tower[i][j];
		}
	}
	
	cout<<dp[1][1];
	return 0; 
}
