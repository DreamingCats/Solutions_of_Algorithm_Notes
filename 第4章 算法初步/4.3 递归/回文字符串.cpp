#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
#define maxsize 100
int main() {
    string str,ans;
    cin >> ans;
    str = ans;
    reverse(str.begin(), str.end());
    if (str == ans) {
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}
