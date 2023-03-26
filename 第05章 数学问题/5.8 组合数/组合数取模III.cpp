#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long ll;

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

int invert(int a, int p) { //ÄæÔª 
    int x, y;
    int d = exGcd(a, p, x, y);
    return (x % p + p) % p;
}

ll Cnmp(int n, int m, int p) {
    ll ans = 1;
    for (int i = 1; i <= m; i++) {
        ans = ans * (n - m + i) % p;
        ans = ans * invert(i, p) % p;
    }
    return ans;
}

int main() {
    int n, m, p;
    cin>>n>>m>>p;
    cout<<Cnmp(n, m, p);
    return 0;
}
