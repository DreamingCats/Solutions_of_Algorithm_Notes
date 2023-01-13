#include <cstdio>
#include <cmath>
#include <cstring>
#include<iostream>
#include <algorithm>
using namespace std;

int ans(int n,int bound) {
    if (n <= 1||bound<=0) {
        return 0;
    }
    /*
    else if (n == 2) {
        return 1;
    }
    else if (n == 3) {
        return 2;
    }
    else if (n == 4) {
        return 4;
    }
    else if (n == 5) {
        return 6;
    }
    */
    else {
        int count = 0;
        for (int i = 0;i <= bound;i++) {
            count += ans(n - i, i);
            if (n - i > 0 && n - i <= i && n - i <= bound) {
                count++;
            }
        }
        return count;
    }
    

}

int main() {
    int n;
    cin >> n;
    cout << ans(n, n - 1);
    
    return 0;
}
