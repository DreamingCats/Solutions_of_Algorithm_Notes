#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

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
	for(i=n;;i++){ //�Ӻ���ǰ�� 
		if(isPrime(i)){ //�����һ�� 
			cout<<i;
			break;
		}
	}
	return 0;
}


