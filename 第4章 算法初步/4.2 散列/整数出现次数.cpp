#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[1000];
    int ans[101] = { 0 };
    for (int i = 0;i < n;i++) {
        cin >> a[i];
        for (int k = 0;k < 101;k++) {
            if (a[i] == k) {
                ans[k]++;
            }
        }
        
    }
    for (int j = 0;j < 101;j++) {
        if (ans[j] != 0) {
            cout << j << " " << ans[j] << endl;
        }
    }
    return 0;
}
