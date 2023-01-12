#include<iostream>
using namespace std;
int main() {
    
    int len=0;
    char str[100];
    int ans[26] = { 0 };

    cin >> str;
    
    for (int i = 0;i < 100;i++) {
        if (str[i]>='a'&&str[i]<='z') {
            len++;
        }
    }
    //cout << len;

    for (int i = 0;i < len;i++) {
       
        for (int k = 0;k < 26;k++) {
            if (str[i] == 97+k) {
                ans[k]++;
            }
        }

    }
    for (int j = 0;j < 26;j++) {
        if (ans[j] != 0) {
            printf("%c", j + 97);
            cout << " " << ans[j] << endl;
        }
    }
    return 0;
}
