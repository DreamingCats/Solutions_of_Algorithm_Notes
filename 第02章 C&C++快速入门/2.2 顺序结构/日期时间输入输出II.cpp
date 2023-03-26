#include<stdio.h>
#include<time.h>
int main(){
    int YYYY,MM,DD,HH,MI,SS;
    scanf("%d-%d-%d %d:%d:%d",&YYYY,&MM,&DD,&HH,&MI,&SS);
    printf("%04d\n%02d\n%02d\n%02d\n%02d\n%02d\n",YYYY,MM,DD,HH,MI,SS);
    return 0;
}
