#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,i,min;
	cin>>n;
	int gcd,x;
	
	int ans=1;
	for(int i=0;i<n;i++){
		cin>>x;
		ans=ans*x/__gcd(ans,x);  //优先级相同，从左往右算 
	}
	
	cout<<ans;
	return 0;
}
