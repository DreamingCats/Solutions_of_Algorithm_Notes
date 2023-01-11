#include<iostream>
#include<cstring>
#include<cstdio>
#define maxsize 300
using namespace std;
int main(){
    int n;
    cin>>n;
    char str[maxsize];
    getchar();
    for(int i=0;i<n;i++){
        fgets(str, maxsize, stdin);
        printf("%s",str);
    }
    

    return 0;
}
