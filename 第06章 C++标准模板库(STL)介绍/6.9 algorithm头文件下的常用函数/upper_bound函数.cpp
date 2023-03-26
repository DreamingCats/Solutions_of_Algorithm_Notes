#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n,k,i;
	int a[10];
	cin>>n>>k;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int ans=upper_bound(a,a+n,k)-a+1; //´óÓÚ 
	
	cout<<ans;
	return 0;
}
