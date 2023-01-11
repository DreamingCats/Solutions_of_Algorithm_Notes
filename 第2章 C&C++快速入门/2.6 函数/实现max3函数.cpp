#include<stdio.h>
#include<math.h>
int max2(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int max3(int a,int b,int c){
    a=max2(a,b);
    b=max2(b,c);
    c=max2(a,b);
    return c;
}

int main(){
    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    printf("%d",max3(a,b,c));
    return 0;
}
