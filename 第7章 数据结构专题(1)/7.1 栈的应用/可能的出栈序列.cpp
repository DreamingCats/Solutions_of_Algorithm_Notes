#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
using namespace std;
int a[9];

bool isValidOutput(int n,int a[9]){
	stack<int> s;
	int max=0;
	bool isValid=true;
	for(int i=0;i<n;i++){
		if(a[i]>max){
			for(int j=max+1;j<=a[i];j++){
				s.push(j);
			}
			max=a[i];
		}
		if(s.top()!=a[i]){
			isValid=false;
			break;
		}
		else{
			s.pop();
		}
	}
	
	return isValid;
} 


int main(){
	int n,i;
	cin>>n;
	
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	
	//生成全排列，依次判断，符合的输出 
	do{
		for(i=0;i<n;i++){
			if(isValidOutput(n,a)){
				cout<<a[i]<<(i<n-1?" ":"\n");
			}
		}
	}while(next_permutation(a,a+n));
	
	return 0;
}
