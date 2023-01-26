#include <iostream>
#include <string>
using namespace std;
int main(){
	string str,s2;
	int k,len;
	cin>>str>>k>>len;
	s2=str.substr(k,len);
	cout<<s2;
	return 0;
}
