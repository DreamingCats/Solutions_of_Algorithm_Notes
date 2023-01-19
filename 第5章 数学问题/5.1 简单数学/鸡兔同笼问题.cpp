/*
x+y=a;
2x+4y=b;
*/

#include <iostream>
using namespace std;
int main(){
	int a,b,x,y;
	cin>>a>>b;
	
	y=(b-2*a)/2;
	x=a-y;
	
	cout<<x<<" "<<y;
	return 0;
}
