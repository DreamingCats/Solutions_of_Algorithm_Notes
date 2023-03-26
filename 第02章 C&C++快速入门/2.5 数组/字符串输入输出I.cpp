#include<iostream>
#include<cstring>
#include<cstdio>
#define maxsize 100
using namespace std;
int main(){
    char str[maxsize];
    fgets(str, maxsize, stdin);
    printf("%s",str);
    return 0;
}
