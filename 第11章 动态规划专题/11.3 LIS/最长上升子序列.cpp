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
	
	int len=-1; //��¼����dp[i] 
	for(int i=0;i<n;i++){
		dp[i]=1; //�߽��ʼ�������ȼ���ÿ��Ԫ���Գ�һ�������У� 
		for(int j=0;j<i;j++){
			if(a[i]>=a[j] && dp[i]<dp[j]+1){
				dp[i]=dp[j]+1; //״̬ת�Ʒ��� 
			}
		}
		len=max(len,dp[i]);
	}
	
	cout<<len;
	return 0;
}
