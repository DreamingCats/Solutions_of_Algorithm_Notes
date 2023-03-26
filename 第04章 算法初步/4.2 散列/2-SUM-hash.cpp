#include<iostream>
#include<cstring>
#define maxsize 100000;
int a[100000];

using namespace std;
int main() {
    int n,k;
    cin >> n>>k;
    int sum=0;
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;i++) {

        for (int j = 0;j < n;j++) {
            if (a[i] + a[j] == k) {
                sum++;
            }
        }
    }
    cout << sum / 2;
    return 0;
}
