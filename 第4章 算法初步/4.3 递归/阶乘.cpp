#include<iostream>

using namespace std;

int ans(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return ans(n - 1) * n;
    }
}

int main() {
    int n;
    cin >> n;
    cout << ans(n);
    return 0;
}
