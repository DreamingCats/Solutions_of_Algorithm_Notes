//û���� 
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

int solve(int a, int m) { //���ﲻ�ø� 
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
    int n,a,m;
    cin>>n>>a>>m;
    int minX = solve(abs(a), m); //�����һ�� 
    
    int input[10];
    int i;
    for(i=0;i<n;i++){
    	cin>>input[i];
    	minX=(minX*input[i])%m;
	}
    
    cout<<minX;
    return 0;
}
