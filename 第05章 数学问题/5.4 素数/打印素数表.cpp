#include<iostream>
#include<cstring>
#include<vector>
using namespace std;

/*
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
	for(i=2;i<=n;i++){
		if((i!=2&&i%2==0)||i%3==0||i%5==0||i%7==0||i%11==0){
			continue;
		}
		else if(isPrime(i)){
			cout<<i<<endl;
		}
	}
	return 0;
}
*/

//题解用了133ms，不用vector貌似会超时 
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
	for(int i=0;i<primes.size();i++){
		cout<<primes[i]<<endl;
	}
	return 0;
}
