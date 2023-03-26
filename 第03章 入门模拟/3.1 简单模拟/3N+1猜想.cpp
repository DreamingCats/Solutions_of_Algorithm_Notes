#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int n;
    int step=0;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3+1)/2;
        }  
        step++;
    }
    printf("%d",step);
    return 0;
}
