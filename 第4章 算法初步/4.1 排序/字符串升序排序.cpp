#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}



int main() {
    int n;
    cin >> n;
    string str[50];
    for (int i = 0;i < n;i++) {
        cin >> str[i];
    }
    sort(str,str+n);
    for (int i = 0;i < n;i++) {
        cout << str[i];
        if (i < n - 1) {
            cout << endl;
        }
    }
    return 0;
}
