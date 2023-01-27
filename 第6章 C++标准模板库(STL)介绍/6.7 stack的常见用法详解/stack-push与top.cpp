#include <stack>
#include <iostream>
using namespace std;
int main(){
	stack<int> s;
	int n,a,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a;
		s.push(a);
	}
	
	cout<<s.top();
	return 0;
}
