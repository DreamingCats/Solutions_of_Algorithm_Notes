//��ȫ��������Ʒ����ÿ�����������01����ֻ��1�� 
#include <bits/stdc++.h>
using namespace std;

const int maxn=100; //��Ʒ������
const int maxv=1000; //������������
const int mod=10007; 
int w[maxn];
int dp[maxn][maxv];

int main(){
	int n,v;
	cin>>n>>v;

	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	
	
	memset(dp,0,sizeof(dp));
	dp[0][0]=1;
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<=v;j++){  
			dp[i][j]=dp[i-1][j];
			if(j>=w[i]){
				dp[i][j]=(dp[i][j]+dp[i-1][j-w[i]])%mod;
			}
		}
	}
	
	cout<<dp[n][v];
	return 0;
}
