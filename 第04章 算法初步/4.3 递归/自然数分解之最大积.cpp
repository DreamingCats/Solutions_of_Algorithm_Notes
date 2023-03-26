/*
3=1+2>1*2 
4=2+2=2*2
5=2+3<2*3
因此，应该拆成2^n1+3^n2的形式，使得取最大值 
*/
#include <cstdio>
#include <cmath>
#include <cstring>
#include<iostream>
#include <algorithm>
using namespace std;

int ans(int n) {
    if (n == 1) {
        return 0;
    }
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
    else {
        int maxnum = 1;
        for (int i = 4;i < n;i++) {
            int temp = max(ans(n - i), n - i) ;
            maxnum = max(maxnum,temp*i );
        }
        return maxnum;
    }
    

}

int main() {
    int n;
    cin >> n;
    cout << ans(n);
    return 0;
}
