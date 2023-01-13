#include<iostream>
using namespace std;
#define maxsize 100
int main() {
    int n;
    int a[maxsize];
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    int max = a[0];
    for (int j = 0;j < n;j++) {
        if (a[j] > max) {
            max = a[j];
        }
    }
    cout << max;
    return 0;
}
