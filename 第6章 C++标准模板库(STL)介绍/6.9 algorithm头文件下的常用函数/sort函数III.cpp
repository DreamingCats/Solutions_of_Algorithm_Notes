#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	string str[10]; 
	int n,i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>str[i];
	}
	
	sort(str,str+n);
	
	for(i=0;i<n;i++){
		cout<<str[i]<<endl;
	}
	
	return 0; 
}
