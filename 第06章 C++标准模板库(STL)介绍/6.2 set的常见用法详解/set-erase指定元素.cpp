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
	
	s.erase(x); //x����s�У�ʲô������ 
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		if(it!=s.begin()){ //ĩβ�޿ո� 
			cout<<" ";
		}
		cout<<*it;
	} 
	
	return 0;
}
