#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n){
	long long i;
	if(n<=1) {
		return false;
	}
	for(i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
} 

int main(){
	int n;
	cin>>n;
	if(isPrime(n)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	return 0;
}
