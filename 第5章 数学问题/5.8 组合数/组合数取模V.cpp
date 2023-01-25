#include <cstdio>
#include <cmath>
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;
typedef long long ll;

const int MAXN = 100000;
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

int exGcd(int a, int b, int &x, int &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int d = exGcd(b, a % b, x, y);
    int temp = x;
    x = y;
    y = temp - a / b * y;
    return d;
}

int invert(int a, int p) {
    int x, y;
    int d = exGcd(a, p, x, y);
    return (x % p + p) % p;
}

ll fastPow(int a, int b, int p) {
    if (!b) {
        return 1;
    } else {
        ll halfPow = fastPow(a, b / 2, p);
        if (b % 2) {
            return halfPow * halfPow % p * a % p;
        } else {
            return halfPow * halfPow % p;
        }
    }
}

pair<ll, int> CPrime(int n, int m, int p) {
    ll ans = 1;
    int pCounter = 0;
    for (int i = 1; i <= m; i++) {
        int temp = n - m + i;
        while (temp % p == 0) {
            pCounter++;
            temp /= p;
        }
        ans = ans * temp % p;
        temp = i;
        while (temp % p == 0) {
            pCounter--;
            temp /= p;
        }
        ans = ans * invert(temp, p) % p;
    }
    return make_pair(ans, pCounter);
}

ll Cnmp(int n, int m, int p) {
    ll ans = 1;
    int tempP = p;
    int sqr = (int)sqrt(1.0 * p);
    for (int i = 0; i < primes.size() && primes[i] <= sqr; i++) {
        if (tempP % primes[i] == 0) {
            while (tempP % primes[i] == 0) {
                tempP /= primes[i];
            }
            pair<ll, int> CPrimeResult = CPrime(n, m, primes[i]);
            ans = ans * CPrimeResult.first % p;
            ans = ans * fastPow(primes[i], CPrimeResult.second, p) % p;
        }
    }
    if (tempP > 1) {
        pair<ll, int> CPrimeResult = CPrime(n, m, tempP);
        ans = ans * CPrimeResult.first % p;
        ans = ans * fastPow(tempP, CPrimeResult.second, p) % p;
    }
    return ans;
}

int main(){
	getPrimes();
	int n,m,p;
	cin>>n>>m>>p;
	cout<<Cnmp(n,m,p); 
	return 0;
}
