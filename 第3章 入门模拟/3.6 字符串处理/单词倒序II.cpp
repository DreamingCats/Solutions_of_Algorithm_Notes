#include<iostream>
#include<cstring>
#include<algorithm>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
    char ans[1000][11];
    int num = 0;
    while (scanf("%s", ans[num]) != EOF) {
        num++;
    }
    for (int i =0;i < num;i++) {
        int lenth=strlen(ans[i]);
        for(int j=lenth-1;j>=0;j--){
            cout<<ans[i][j];
        }
        if(i<num-1){
            cout<<" ";
        }
    }
    return 0;
}
