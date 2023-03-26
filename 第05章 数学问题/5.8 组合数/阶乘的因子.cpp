#include <cstdio>
#include <iostream> 
#include <cstring>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;


const int MAXN = 101;
bool isPrime[MAXN];
vector<int> primes;

void getPrimes() {
    memset(isPrime, true, sizeof(isPrime));
    for (int i = 2; i < MAXN; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i + i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int getPrimeFactorCnt(int n, int p) {
    int cnt = 0;
    while (n) {
        cnt += n / p;
        n /= p;
    }
    return cnt;
}

int primem(int n,int m){ 
	//判断一个数有多少个质因子m 
	int cnt=0;
	while(n%m==0){
		cnt++;
		n/=m;
	}
	return cnt;
}

bool isnPrime(int n){
	long long i;
	if(n<=1) {
		return false;
	}
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
} 


int main() {
    getPrimes();
    int n, m,i;
    cin>>n>>m;
    int ans=0;
    if(isnPrime(m)){ //m是质数，按照之前的方法来 
    	for(i=1;i<=n;i++){
			ans+=primem(i,m);
		}
	}
    
    else{ //m是合数 
    	ans = INT_MAX;
    	for (int i = 0; i < primes.size() && m > 1; i++) {
        	int counter = 0;
        	while (m % primes[i] == 0) {
            	counter++;
            	m /= primes[i];
        	}
        	if (counter > 0) {
            	ans = min(ans, getPrimeFactorCnt(n, primes[i]) / counter);
        	}
    	}
    	if (m > 1) {
        	ans = min(ans, getPrimeFactorCnt(n, m));
    	}
	}
	
    cout<<ans;
    return 0;
}
