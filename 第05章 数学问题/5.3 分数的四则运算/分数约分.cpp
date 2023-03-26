#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Fraction{ //分数 
	int up; //分子 
	int down; //分母 
}; 

Fraction reduction(Fraction ans){
	if(ans.down<0){ //如果分母为负，都取相反数，负号转到分子上 
		ans.up=-ans.up;
		ans.down=-ans.down; 
	}
	if(ans.up==0){ //为0 
		ans.down=1;
	}
	else{
		int gcd=__gcd(abs(ans.up),abs(ans.down));
		ans.up/=gcd;
		ans.down/=gcd;
	} 
	return ans;
} 

int main(){
	Fraction f;
	cin>>f.up>>f.down;
	Fraction ans=reduction(f);
	if(ans.down==1){
		cout<<ans.up;
	}
	else{
		cout<<ans.up<<" "<<ans.down;
	}
	
	return 0;
}
