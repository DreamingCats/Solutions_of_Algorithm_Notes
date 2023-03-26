#include <iostream>
#include <string>
using namespace std;
int main(){
	string s1,s2,s3;
	int k,len;
	cin>>s1>>k>>len>>s2;
	s3=s1.replace(k,len,s2);
	cout<<s3;
	return 0;
}
