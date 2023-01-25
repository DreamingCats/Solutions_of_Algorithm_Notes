#include<iostream>
#include<cstring>
#include<vector>
using namespace std;
typedef unsigned long long ll;

const ll maxn=1000001;
bool isPrime[maxn];
vector<ll> primes;
ll i;

void getPrimes(){ //得到素数表 
	memset(isPrime,true,sizeof(isPrime));
	for(ll i=2;i<=maxn;i++){
		if(isPrime[i]){
			primes.push_back(i);
			for(ll j=i<<1;j<=maxn;j+=i){
				isPrime[j]=false;
			}
		}
	}
}

ll quickPow(ll a,ll b,ll m){  //递归写法 
	if(b==0){
		return 1; //b^0=1
	} 
	if(b&1){
		return a*quickPow(a,b-1,m)%m;
	}
	else{ //b为偶数 
		ll mul=quickPow(a,b/2,m);
		return mul*mul%m; 
	}
}

ll cal(ll n, ll p) {
    ll cnt = 0;
    while (n) {
        cnt += n / p;
        n /= p;
    }
    return cnt;
}

ll Cnmp(ll n,ll m,ll p){
	ll ans=1;
	for(i=0;primes[i]<=n;i++){
		
		ll c=cal(n,primes[i])-cal(m,primes[i])-cal(n-m,primes[i]);
		
		ans=ans*quickPow(primes[i],c,p)%p;
	}
	return ans;
} 

int main(){
	ll n,m,p;
	cin>>n>>m>>p;
	getPrimes();
	/*
	for(ll i=0;i<primes.size();i++){
		cout<<primes[i]<<endl;
	}
	*/
	cout<<Cnmp(n,m,p); //11ms
	return 0;
}
