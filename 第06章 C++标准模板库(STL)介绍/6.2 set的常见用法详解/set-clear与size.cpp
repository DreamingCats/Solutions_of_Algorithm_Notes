#include <iostream>
#include <set>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	set<int> s;
	for(int i=0;i<n;i++){
		cin>>x;
		s.insert(x);
	}
	
	s.clear();
	
	cout<<s.size(); 
	
	/*
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		if(it!=s.begin()){ //ĩβ�޿ո� 
			cout<<" ";
		}
		cout<<*it;
	} 
	*/
	
	return 0;
}
