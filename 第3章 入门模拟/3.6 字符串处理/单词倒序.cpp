#include<iostream>
#include<cstring>
#include<algorithm>
char ans[1000];
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {

    int num = 0;
    while (scanf("%s", ans) != EOF) {
        num++;
    }
    for (int i = num - 1;i >= 0;i--) { //·´ÏòÊä³ö 
        cout << ans[i];
        if (i != 0) {
            cout << " ";
        }
    }
    return 0;
}
