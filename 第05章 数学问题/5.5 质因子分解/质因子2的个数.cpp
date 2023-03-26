#include<iostream>
using namespace std;
int main(){
	int n,cnt=0;
	cin>>n;
	while(n%2==0){ //直到不是偶数为止 
		cnt++;
		n=n>>1;
	}
	cout<<cnt;
	return 0;
} 
