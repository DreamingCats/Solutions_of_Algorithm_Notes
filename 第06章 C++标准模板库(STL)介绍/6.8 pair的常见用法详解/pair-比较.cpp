#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){
	pair<int,int> p1,p2;
	int k1,k2,k3,k4;
	cin>>k1>>k2>>k3>>k4;
	
	p1=make_pair(k1,k2);
	p2=make_pair(k3,k4);
	
	cout<<(p1<p2?"Yes":"No");
	return 0;
} 
