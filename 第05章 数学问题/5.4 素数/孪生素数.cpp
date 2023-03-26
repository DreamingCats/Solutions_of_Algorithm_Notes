#include<iostream>
#include<cmath>
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
	getPrimes(100000); //这么长够了 
	int cnt;
	for(int i=0;i<primes.size();i++){
		if(primes[i+1]-primes[i]==2){
			cnt++;
			if(cnt==n){
				cout<<primes[i]<<" "<<primes[i+1];
			}
		}
		//cout<<primes[i]<<endl;
	}
	return 0;
}
