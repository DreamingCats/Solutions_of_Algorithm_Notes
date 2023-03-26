#include<iostream>
#include<cstring>
#include<cstdio>
#define maxsize 50
using namespace std;
int main(){
    char str1[maxsize],str2[maxsize];
    scanf("%s",str1);
    scanf("%s",str2);
    int cmp=strcmp(str1,str2);
    if(cmp<0){
        cout<<"<";
    }
    if(cmp==0){
        cout<<"=";
    }
    if(cmp>0){
        cout<<">";
    }
    

    return 0;
}
