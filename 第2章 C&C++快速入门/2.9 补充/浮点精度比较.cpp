//由于精度问题，在程序上其实并不相等 
#include<iostream>
#include<math.h>
const double eps=1e-8;
using namespace std;
bool xmorey(double x,double y){
    return x-y>eps;
}
bool xlessy(double x,double y){
    return y-x>eps;
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    double x,y;
    x=a*asin(sqrt(b)/2);
    y=c*asin(sqrt(d)/2);
    if(xmorey(x,y))
        cout<<"1";
    else if(xlessy(x,y))
        cout<<"2";
    else
        cout<<"0";
}
