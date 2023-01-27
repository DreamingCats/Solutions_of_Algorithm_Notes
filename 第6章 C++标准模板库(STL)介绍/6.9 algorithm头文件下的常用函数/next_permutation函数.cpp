#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int n,i;
	cin>>n;
	int a[5];
	for(i=0;i<n;i++){
		a[i]=i+1;
	}
	do{
		for(i=0;i<n;i++){
			cout<<a[i]<<(i<n-1?" ":"\n");
		}
	}while(next_permutation(a,a+n));
	return 0;
}
