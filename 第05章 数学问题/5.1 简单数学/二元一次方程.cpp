//ax^2+bx+c=0
#include <cmath>
#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	double a,b,c;
	cin>>a>>b>>c;
	double delta=b*b-4*a*c;
	if(delta<0){
		cout<<"No Solution";
	}
	else if(delta==0){
		printf("%.2f",-b/(2*a));
	}
	else{
		printf("%.2f %.2f",(-b-sqrt(delta))/(2*a),(-b+sqrt(delta))/(2*a));
	}
	return 0;
}
