#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;


//时间复杂度为O(n^(3/2)),这里超时了 
bool isPrime(int n){
	long long i;
	if(n<=1) {
		return false;
	}
	for(i=2;i<=(int)sqrt(n);i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
} 

int main(){
	long long n,i;
	cin>>n;
	for(i=n;i>=2;i--){ //从后往前查 
		if(isPrime(i)){ //输出第一个 
			cout<<i;
			break;
		}
	}
	return 0;
}


