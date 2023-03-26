#include <iostream>
typedef unsigned long long ll;
using namespace std;

const int MAXN=1010;
ll res[MAXN][MAXN]={0};

ll C(ll n,ll m){
	ll ans=1;
	for(ll i=1;i<=m;i++){
		ans=ans*(n-m+i)/i;
	}
	return ans;
}

ll Cp(ll n,ll m,ll p){ //4ms
	if(m==0||m==n){
		return 1;
	}
	if(res[n][m]!=0){
		return res[n][m];
	}
	res[n][m]=(Cp(n-1,m,p)+Cp(n-1,m-1,p))%p;
	return res[n][m];
}

int main(){
	ll n;
	ll m;
	ll p;
	cin>>n>>m>>p;
	cout<<Cp(n,m,p);
	return 0;
}
