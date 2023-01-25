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

int solve(int a, int b, int c) {
    int x, y;
    int d = exGcd(a, b, x, y);
    if (c % d) {
        return -1;
    } else {
        int step = abs(b / d);
        int minX = (c * x / d % step + step) % step;
        return minX;
    }
}

int main() {
    int a, b, c;
    cin>>a>>b>>c;
    int minX = solve(a, b, c);
    if (minX == -1) {
        cout<<"No Solution";
    } else {
        cout<<minX<<" "<<(c-a*minX)/b;
    }
    return 0;
}
