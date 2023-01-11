#include<stdio.h>
#include<time.h>
int main(){
    int YYYY,MM,DD,HH,MI,SS;
    scanf("%d%d%d%d%d%d",&YYYY,&MM,&DD,&HH,&MI,&SS);
    printf("%04d-%02d-%02d %02d:%02d:%02d",YYYY,MM,DD,HH,MI,SS);
    return 0;
}
