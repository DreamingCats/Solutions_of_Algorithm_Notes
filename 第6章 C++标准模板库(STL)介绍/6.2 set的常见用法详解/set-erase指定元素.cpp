#include <iostream>
#include <set>
using namespace std;
int main(){
	int n,x,a;
	cin>>n>>x;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>a;
		s.insert(a);
	}
	
	s.erase(x); //x不在s中，什么都不做 
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		if(it!=s.begin()){ //末尾无空格 
			cout<<" ";
		}
		cout<<*it;
	} 
	
	return 0;
}
