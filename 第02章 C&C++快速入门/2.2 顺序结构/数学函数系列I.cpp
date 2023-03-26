#include<cstdio>
#include<math.h>
int main(){
    double d;
    scanf("%lf",&d);
    printf("%.2f ",abs(d));
    printf("%d ",(int)floor(d));
    printf("%d ",(int)ceil(d));
    printf("%d ",(int)round(d));
    printf("%.2f",pow(d,5));
    return 0;
}
