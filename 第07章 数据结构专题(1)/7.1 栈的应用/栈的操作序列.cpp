//这么弄输入和输出混在一起了 
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	int n,i,x;
	cin>>n;
	stack<int> s;
	string str;
	for(i=0;i<n;i++){
		cin>>str;
		if(str=="push"){
			cin>>x;
			s.push(x);
		}
		if(str=="pop"){
			if(s.empty()){
				cout<<"-1"<<endl;
			}
			else{
				cout<<s.top()<<endl;
				s.pop();
			}
		}
	}
	
	return 0;
} 
