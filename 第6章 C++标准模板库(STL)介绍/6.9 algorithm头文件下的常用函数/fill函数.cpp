#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[100];
	int n,k;
	cin>>n>>k;
	
	fill(a,a+n,k); //ǰn��Ԫ����Ϊk 
	
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	return 0;	
}
