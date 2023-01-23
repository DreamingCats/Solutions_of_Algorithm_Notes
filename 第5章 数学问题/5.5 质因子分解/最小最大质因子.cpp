#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <limits.h>
#include <algorithm>
using namespace std;

const int MAXN = 1000 + 1; //sqrt(10^6)
bool isPrime[MAXN];
vector<int> primes;

void getPrimes(int n) {
    memset(isPrime, true, sizeof(isPrime));
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i + i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    /*
    int input[10];
	for(int i=0;i<n;i++){
		cin>>input[i];
	} 
	*/
    getPrimes(MAXN);
    
    int maxFactor=0,minFactor=INT_MAX;
    int input;
    for(int j=0;j<n;j++){
    	cin>>input;
    	for (int i = 0; i < primes.size() && input > 1; i++) {
        	int counter = 0;
        	while (input > 1 && input % primes[i] == 0) {
            	counter++;
            	input /= primes[i];
        	}
        	if (counter > 0) {
            	//cout<< primes[i] <<" "<< counter << endl ;
            	minFactor=min(minFactor,primes[i]);
            	maxFactor=max(maxFactor,primes[i]);
        	}
    	}
    	if (input > 1) { //n本身是质数
        	//cout<<n<<" 1"<<endl;  
        	minFactor=min(minFactor,input);
        	maxFactor=max(maxFactor,input);
    	}
	}
    
    cout<<minFactor<<" "<<maxFactor;
    return 0;
}
