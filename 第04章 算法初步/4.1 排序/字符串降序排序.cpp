#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int compare(string a, string b) {
    return a > b;
}



int main() {
    int n;
    cin >> n;
    string str[50];
    for (int i = 0;i < n;i++) {
        cin >> str[i];
    }
    sort(str, str + n,compare);
    for (int i = 0;i < n;i++) {
        cout << str[i];
        if (i < n - 1) {
            cout << endl;
        }
    }
    return 0;
}
