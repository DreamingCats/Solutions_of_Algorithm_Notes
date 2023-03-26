#include<algorithm>
#include<iostream>
using namespace std;

int main(){
	int n,i,min;
	cin>>n;
	int ans,x;
	
	cin>>ans; //nums[0]
	for(int i=1;i<n;i++){
		cin>>x;
		ans=__gcd(ans,x);
	}
	
	if(ans==1){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
