#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int cnt=0;
	while(str!="123"){
		int n=str.length(); //字符串长度
		int odd=0,even=0;
		for(int i=0;i<n;i++){
			if(str[i]%2==1){
				odd++;
			}
			else{
				even++;
			}
		} 
		/*
		如果用DevC++的话， 工具->编译选项->编译时加入以下命令：-std=c++11 
		否则不识别to_string 
		*/
		str=to_string(even)+to_string(odd)+to_string(n);
		cnt++;
	}
	
	cout<<cnt;
	return 0;
}
