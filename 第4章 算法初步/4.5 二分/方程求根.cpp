//求导可知函数单调
#include <cmath>
#include <iostream>
#include <cstdio>

const double eps=1e-8; //精度 
int a;

double f(double x){
	return x*x*x+x*x+x;
} 
double ans(double left,double right){
	double mid;
	while(right-left>eps){
		mid=(left+right)/2;
		if(f(mid)>a){
			right=mid;
		}
		else{
			left=mid;
		}
	}
	return mid;
}


int main(){
	std::cin>>a;
	printf("%.2f",ans(-5,5)); //估下值先 
}
