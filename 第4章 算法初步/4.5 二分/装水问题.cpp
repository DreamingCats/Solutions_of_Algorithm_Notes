#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

const double pi=acos(-1); //精确定义π
const double eps=1e-8;
double R,r;

double f(double R,double h){
	double L=2*sqrt(2*h*R-h*h);
	double S1=acos(1-h/R)*R*R-L*(R-h)/2;
	double S2=pi*R*R/2;
	return S1/S2;
}

double ans(double right,double r){  //[0,R]
	double left=0,mid;
	while(right-left>eps){
		mid=(left+right)/2;
		if(f(R,mid)>r){
			right=mid;
		}
		else{
			left=mid;
		}
	}
	return mid;
}

int main(){
	cin>>R>>r;
	printf("%.2f",ans(R,r)); //样例的精度错了，2位	
	
	return 0;
} 
