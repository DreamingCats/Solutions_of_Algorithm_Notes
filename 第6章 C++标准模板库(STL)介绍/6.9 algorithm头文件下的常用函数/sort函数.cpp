#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,a[10],i;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	
	for(i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	
	return 0; 
}
