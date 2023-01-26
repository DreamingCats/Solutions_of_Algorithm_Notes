#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int k1,k2;
	char c; 
	cin>>str>>k1>>c>>k2;
	str.insert(str.begin()+k1,c);
	str.erase(str.begin()+k2);
	cout<<str;
	return 0;
}
