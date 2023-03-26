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
	
	//s.erase(s.find(x)); //查不到时没有输出 
	set<int>::iterator it = s.find(x);
    if (it != s.end()) {
        s.erase(it);
    }
	
	for(set<int>::iterator it=s.begin();it!=s.end();it++){
		if(it!=s.begin()){ //末尾无空格 
			cout<<" ";
		}
		cout<<*it;
	} 
	
	return 0;
}
