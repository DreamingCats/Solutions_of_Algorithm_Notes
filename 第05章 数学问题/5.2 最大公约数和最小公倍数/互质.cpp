#include<algorithm>
#include<iostream>
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
	if(__gcd(a,b)==1){  //���� 
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
