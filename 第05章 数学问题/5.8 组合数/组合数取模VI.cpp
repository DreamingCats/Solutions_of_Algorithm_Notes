#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

typedef long long LL;

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

LL CSmall(int n, int m, int p) {
    LL ans = 1;
    for (int i = 1; i <= m; i++) {
        ans = ans * (n - m + i) % p;
        ans = ans * invert(i, p) % p;
    }
    return ans;
}

LL lucas(LL n, LL m, int p) {
    if (m == 0) {
        return 1;
    } else {
        return CSmall(n % p, m % p, p) * lucas(n / p, m / p, p) % p;
    }
}


int main(){
	LL n,m,p;
	cin>>n>>m>>p;
	cout<<lucas(n,m,p); 
	return 0;
}
