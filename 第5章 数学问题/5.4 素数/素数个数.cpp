#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

const int maxn=1000001;
bool isPrime[maxn];
vector<int> primes;

void getPrimes(int n){
	memset(isPrime,true,sizeof(isPrime));
	for(int i=2;i<=n;i++){
		if(isPrime[i]){
			primes.push_back(i);
			for(int j=i<<1;j<=n;j+=i){
				isPrime[j]=false;
			}
		}
	}
}

int main(){
	int n;
	cin>>n;
	getPrimes(n);
	/*
	for(int i=0;i<primes.size();i++){
		cout<<primes[i]<<endl;
	}
	*/
	cout<<primes.size(); 
	return 0;
}
//7ms
