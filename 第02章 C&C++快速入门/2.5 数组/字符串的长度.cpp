#include<iostream>
#include<cstring>
#define maxsize 50
using namespace std;
int main(){
    char str[maxsize];
    fgets(str, maxsize, stdin);
    cout<<strlen(str);
    return 0;
}
