#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int pos=s1.find(s2);
	if(pos==1<<64-1){  //如果查不到会输出18446744073709551615，会报Warning 
		cout<<"-1";
	}
	else{
		cout<<pos;
	}
	return 0;
}
