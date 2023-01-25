#include <cmath> 
#include <algorithm>
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
	y=temp-a/b*y;
	return g;
}

int main(){
	int a,b;
	int x,y;
	cin>>a>>b;
	
    int c = exGcd(a, b, x, y);
    int step = b / c;
    int minX = (x % step + step) % step;
    cout<<minX<<" "<<(c-a*minX)/b;
    return 0;
}
