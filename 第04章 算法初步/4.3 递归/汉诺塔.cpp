#include<iostream>
#include<cstring>
#include <algorithm>
#include<cmath>
using namespace std;

void hano(int n,char from,char to,char mid) {
    if (n == 0) {
        return;
    }
    else {
        hano(n - 1, from, mid, to);
        cout << from << "->" << to<<endl;
        hano(n - 1, mid, to, from);
    }
}

int main() {
    int n;
    cin >> n;
    cout << (int)pow(2, n) - 1 << endl;
    hano(n, 'A', 'C', 'B');
    return 0;
}
