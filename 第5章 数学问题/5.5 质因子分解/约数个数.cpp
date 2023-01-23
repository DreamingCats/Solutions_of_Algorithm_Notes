#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
using namespace std;

const int MAXN = 1000000;
bool isPrime[MAXN];
vector<int> primes;

void getPrimes(int n) {
    memset(isPrime, true, sizeof(isPrime));
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2 ; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int ans=1;
    getPrimes((int)sqrt(n));
    
    if(!isPrime[n]){ //n本身是质数,约数只有1和它本身,直接输出2即可 
    	cout<<"2";
	} 
	else{  
		for (int i = 0; i < primes.size() && n > 1; i++) {
        	int counter = 0;
        	while (n > 1 && n % primes[i] == 0) {
            	counter++;
            	n /= primes[i];
        	}
        	if (counter > 0) {
            	//cout<< primes[i] <<" "<< counter << endl ;
            	ans*=(counter+1);
        	}
    	}
    	if(n>1){
    		ans*=2;
		}

    	cout<<ans;
	}
    return 0;
}
