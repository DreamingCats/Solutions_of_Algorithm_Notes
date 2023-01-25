#include <cmath> 
#include <iostream>
using namespace std;

int exGcd(int a,int b,int &x,int &y) {
	if(b==0){
		x=1;
		y=0;
		return a;
	}
	int g=exGcd(b,a%b,x,y);
	
	int temp=x;
	x=y;
	y=temp-a;
	return g;
}

int main(){
	int a,b,c;
	int x,y;
	cin>>a>>b>>c;
	
	if(c%exGcd(a,b,x,y)==0){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
