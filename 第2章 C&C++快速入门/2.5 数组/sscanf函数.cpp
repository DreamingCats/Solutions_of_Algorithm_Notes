#include<cstdio>
#include<iostream>
#include<cstring>
#define maxsize 100
using namespace std;
int main(){
    int a,b,c;
    char str[maxsize];

    fgets(str, maxsize, stdin);

    if(sscanf(str,"%d is greater than %d",&a,&b)==2){
        cout<<(a>b?"Yes":"No");
    }
    else if(strcmp(str,"No Information")==0){
        cout<<"???";
    }
    else if(sscanf(str,"%d is equal to %d plus %d",&a,&b,&c)==3){
        cout<<(a==b+c?"Yes":"No");
    }
    return 0;
}
