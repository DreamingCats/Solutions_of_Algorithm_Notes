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

int solve(int a, int m) { //上一题的简化版本 
    int x, y;
    int d = exGcd(a, m, x, y);
    if(d!=1){
    	return -1;
	} 
	else{
		int minX = (x%m+m)%m;
    	return minX;
	}
}

int main() {
    int a,m;
    cin>>a>>m;
    int minX = solve(a, m); //这里改一下 
    if (minX == -1) {
        cout<<"No Solution";
    } else {
        cout<<minX;
        //cout<<" "<<(c-a*minX)/b;
    }
    return 0;
}
