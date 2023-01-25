#include <iostream>
typedef unsigned long long ll;
using namespace std;



ll F(ll n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return F(n - 1) * n;
    }
} 

//会溢出 
ll C1(ll n,ll m){
	return F(n)/(F(m)*F(n-m)); 
}

ll C2(ll n,ll m){ //会超时 
	if(m==0||m==n){
		return 1;
	}
	else{
		return C2(n-1,m)+C2(n-1,m-1);
	}
} 

ll C3(ll n,ll m){
	ll ans=1;
	for(ll i=1;i<=m;i++){
		ans=ans*(n-m+i)/i;
	}
	return ans;
}

int main(){
	ll n;
	ll m;
	cin>>n>>m;
	cout<<C3(n,m);
	return 0;
}
