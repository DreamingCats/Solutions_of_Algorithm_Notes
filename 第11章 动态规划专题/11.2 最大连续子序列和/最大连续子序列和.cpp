#include <bits/stdc++.h>
using namespace std;

const int maxn=10000;
int a[maxn]; //������� 
int dp[maxn]; //dp[i]�����a[i]��β���������е�����


int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	dp[0]=a[0]; //�߽�
	for(i=1;i<n;i++){
		dp[i]=max(a[i], dp[i-1]+a[i]); //״̬ת�Ʒ��� 
	} 
	
	//dp[i]�����a[i]��β���������е����ͣ���Ҫ����i�õ����Ĳ��ǽ��
	int k=0;
	for(i=1;i<n;i++){
		if(dp[i]>dp[k]){
			k=i;
		}
	} 
	cout<<dp[k];
	return 0;
} 
