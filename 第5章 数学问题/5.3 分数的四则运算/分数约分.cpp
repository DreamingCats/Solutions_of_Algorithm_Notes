#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct Fraction{ //���� 
	int up; //���� 
	int down; //��ĸ 
}; 

Fraction reduction(Fraction ans){
	if(ans.down<0){ //�����ĸΪ������ȡ�෴��������ת�������� 
		ans.up=-ans.up;
		ans.down=-ans.down; 
	}
	if(ans.up==0){ //Ϊ0 
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
