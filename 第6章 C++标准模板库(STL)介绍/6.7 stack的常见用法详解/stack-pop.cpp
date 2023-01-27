#include <stack>
#include <iostream>
using namespace std;
int main(){
	stack<int> s;
	int n,k,a,i;
	cin>>n>>k;
	if(n==k){
		cout<<"empty stack";
	}
	else{
		for(i=0;i<n;i++){
			cin>>a;
			s.push(a);
		}
		for(i=0;i<k;i++){
			s.pop();
		}
		cout<<s.top();
	}
	return 0;
}
