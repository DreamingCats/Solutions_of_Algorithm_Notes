#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;

ll exGcd(ll a, ll b, ll &x, ll &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = exGcd(b, a % b, x, y);
    ll temp = x;
    x = y;
    y = temp - a / b * y;
    return d;
}

ll invert(ll a, ll p) { //逆元 
    ll x, y;
    ll d = exGcd(a, p, x, y);
    return (x % p + p) % p;
}

ll Cnmp(ll n, ll m, ll p) {
    ll ans=1;
	ll nump=0; //统计分子中的p比分母中的p多几个
	for (int i=1;i<=m;i++){
		ll temp=n-m+i; //分子
		while(temp%p==0){
			nump++;
			temp/=p;
		} 
		ans=ans*temp%p;
		
		temp=i; //分母
		while(temp%p==0){
			nump--;
			temp/=p;
		} 
		ans=ans*invert(temp,p)%p; //除以分母中除了p以外的部分 
	}
	if(nump>0){
		return 0;
	} 
	else{
		return ans;
	}
}

int main() {
    ll n, m, p;
    cin>>n>>m>>p;
    cout<<Cnmp(n, m, p);
    return 0;
}
