#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	cin>>str;
	int cnt=0;
	while(str!="123"){
		int n=str.length(); //�ַ�������
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
		�����DevC++�Ļ��� ����->����ѡ��->����ʱ�����������-std=c++11 
		����ʶ��to_string 
		*/
		str=to_string(even)+to_string(odd)+to_string(n);
		cnt++;
	}
	
	cout<<cnt;
	return 0;
}
