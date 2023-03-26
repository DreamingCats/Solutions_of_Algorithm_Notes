#include<iostream>

using namespace std;

int ans(int n) {
    if (n == 1 || n == 2) {
        return 1;
    }
    else {
        return ans(n - 1) +ans(n-2);
    }
}

int main() {
    int n;
    cin >> n;
    cout << ans(n);
    return 0;
}
