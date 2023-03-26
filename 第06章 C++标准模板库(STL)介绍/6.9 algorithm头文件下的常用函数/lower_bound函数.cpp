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
	
	int ans=lower_bound(a,a+n,k)-a+1; //大于等于 
	
	cout<<ans;
	return 0;
}
