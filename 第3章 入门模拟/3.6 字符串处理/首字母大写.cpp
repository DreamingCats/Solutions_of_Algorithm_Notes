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
        int length=strlen(ans[i]);
        printf("%c", ans[i][0] -32); //Í¨¹ýASCII×ª»» 
        for(int j=1;j<length;j++){
            printf("%c",ans[i][j]);
        }
        if(i<num-1){
            cout<<" ";
        }
    }
    return 0;
}
