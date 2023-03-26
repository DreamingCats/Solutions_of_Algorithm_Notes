#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	pair<string,int> p;
	string str;
	int k;
	cin>>str>>k;
	p=make_pair(str,k);
	cout<<p.first<<" "<<p.second;
	return 0;
} 
