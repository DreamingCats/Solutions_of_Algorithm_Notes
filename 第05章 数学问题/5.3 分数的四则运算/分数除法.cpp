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

Fraction div(Fraction f1,Fraction f2){
	Fraction ans;
	ans.up=f1.up*f2.down; //����
	ans.down=f1.down*f2.up; //��ĸ
	return reduction(ans); 
}

int main(){
	Fraction f1,f2;
	cin>>f1.up>>f1.down;
	cin>>f2.up>>f2.down;
	if(f2.up==0){
		cout<<"undefined";
	}
	else{
		Fraction ans=div(f1,f2);
		if(ans.down==1){
			cout<<ans.up;
		}
		else{
			cout<<ans.up<<" "<<ans.down;
		}	
	}	
	return 0;
}
