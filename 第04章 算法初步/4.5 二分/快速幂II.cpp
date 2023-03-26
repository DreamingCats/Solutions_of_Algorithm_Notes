#include <cmath>
#include <iostream>
using namespace std;
typedef long long ll;  //用int会溢 

ll pow0(ll a,ll b,ll m){ //普通解 
	ll ans=1;
	for(int i=0;i<b;i++){
		ans=ans*a%m;
	}
	return ans;
}

ll quickPow1(ll a,ll b,ll m){  //递归写法 
	if(b==0){
		return 1; //b^0=1
	} 
	if(b&1){
		return a*quickPow1(a,b-1,m)%m;
	}
	else{ //b为偶数 
		ll mul=quickPow1(a,b/2,m);
		return mul*mul%m; 
	}
}

ll quickPow2(ll a,ll b,ll m) { //迭代写法 
	long long ans=1;
	while(b>0){
		if(b&1){ //b二进制位末尾为1,奇数时返回1 
			ans=ans*a%m; 
		}
		a=a*a%m;
		b>>=1;
	}
	return ans;
}

int main(){
	ll a,b,m;
	cin>>a>>b>>m;
	cout<<pow0(a,b,m);
	//cout<<quickPow1(a,b,m);
	//cout<<quickPow2(a,b,m);
	return 0;
} 
