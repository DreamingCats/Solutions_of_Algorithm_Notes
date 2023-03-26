#include<stdio.h>
int increase(int n){
    n++;
    return n;
}
int main(){
    int n;
    scanf("%d",&n);
    
    int x=increase(n);
    printf("%d ",x);
    printf("%d",n);
    return 0;
}
