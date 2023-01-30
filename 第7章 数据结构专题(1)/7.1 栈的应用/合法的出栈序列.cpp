//有408选择内味了 
#include <iostream>
#include <stack>
#include <string>
using namespace std;
int main(){
	int n,x;
	cin>>n;
	stack<int> s;
	int max=0;
	bool isValid=true;
	for(int i=0;i<n;i++){
		cin>>x;
		if(x>max){
			for(int j=max+1;j<=x;j++){
				s.push(j);
			}
			max=x;
		}
		if(s.top()!=x){
			isValid=false;
			break;
		}
		else{
			s.pop();
		}
	}
	
	cout<<(isValid?"Yes":"No");
	return 0;
} 
