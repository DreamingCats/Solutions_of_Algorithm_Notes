//拿下一题改的 
#include <cstdio>
#include <iostream>
#include <cmath>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 1001;
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

struct Factor {
    int fac, cnt;
    Factor(int _fac, int _cnt) {
        fac = _fac, cnt = _cnt;
    }
};

vector<Factor> factors;
vector<int> divisors;

void genDivisors(int idx, int product) {
    if (idx == factors.size()) {
        divisors.push_back(product);
        return;
    }
    int factorPow = 1;
    for (int i = 0; i <= factors[idx].cnt; i++) {
        genDivisors(idx + 1, product * factorPow);
        factorPow *= factors[idx].fac;
    }
}

int main() {
    int n;
    cin>>n;
    getPrimes((int)sqrt(n));
    int result = 1;
    for (int i = 0; i < primes.size() && n > 1; i++) {
        int counter = 0;
        while (n > 1 && n % primes[i] == 0) {
            counter++;
            n /= primes[i];
        }
        if (counter > 0) {
            factors.push_back(Factor(primes[i], counter));
        }
    }
    if (n > 1) {
        factors.push_back(Factor(n, 1));
    }
    genDivisors(0, 1);
    sort(divisors.begin(), divisors.end());
    int cnt=0;
    for (int i = 0; i < divisors.size(); i++) {
        cnt+=divisors[i];
    }
    
    cout<<cnt;
    return 0;
}
