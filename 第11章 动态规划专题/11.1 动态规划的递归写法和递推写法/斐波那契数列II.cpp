/*
(a+b)%c=(a%c+b%c)%c;�����ӷ�ͬ�ඨ��
(a*b)%c=(a%c*b%c)%c;�����˷�ͬ�ඨ��
*/
#include <bits/stdc++.h>
using namespace std;

const int maxn=10000;
const int mod=10007;
int ans[maxn];

int main(){
	int n;
	cin>>n;
	ans[1]=ans[2]=1;
	for(int i=3;i<=n;i++){
		ans[i]=(ans[i-1]%mod+ans[i-2]%mod)%mod;
	}
	cout<<ans[n];
	return 0;
}
