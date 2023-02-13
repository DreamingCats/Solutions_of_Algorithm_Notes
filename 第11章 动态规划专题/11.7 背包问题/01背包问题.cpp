#include <bits/stdc++.h>
using namespace std;

const int maxn=100; //��Ʒ������
const int maxv=1000; //������������
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
			//״̬ת�Ʒ���
			 dp[j]=max(dp[j], dp[j-w[i]]+c[i]); 
		}
	}
	
	//���ļ�Ϊ�� 
	int maxValue=0;
	for(int i=0;i<=v;i++){
		if(dp[i]>maxValue){
			maxValue=dp[i];
		}
	}
	cout<<maxValue;
	return 0;
}
