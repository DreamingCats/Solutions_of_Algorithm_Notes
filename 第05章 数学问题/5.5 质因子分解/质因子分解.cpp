#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
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
    getPrimes((int)sqrt(n));
    for (int i = 0; i < primes.size() && n > 1; i++) {
        int counter = 0;
        while (n > 1 && n % primes[i] == 0) {
            counter++;
            n /= primes[i];
        }
        if (counter > 0) {
            cout<< primes[i] <<" "<< counter << endl ;
        }
    }
    if (n > 1) {
        cout<<n<<" 1"<<endl; //n本身是质数 
    }
    return 0;
}
