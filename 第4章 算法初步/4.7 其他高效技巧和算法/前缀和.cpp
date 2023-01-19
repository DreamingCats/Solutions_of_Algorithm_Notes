#include <iostream>

using namespace std;
const int maxn=10000;
int input[maxn],calc[maxn];

int main(){
	//ÊäÈë 
	int n,k,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>input[i]; 
	}
	cin>>k;
	int sum=0;
	for(j=0;j<k;j++){
		cin>>calc[j];
	}
	
	for(j=0;j<k;j++){
		for(i=0;i<calc[j];i++){
			sum+=input[i];
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
} 
