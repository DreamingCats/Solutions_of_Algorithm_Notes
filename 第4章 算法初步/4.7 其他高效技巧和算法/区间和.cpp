#include <iostream>

using namespace std;
const int maxn=10000;
int input[maxn],calc[maxn][2];

int main(){
	//���� 
	int n,k,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>input[i]; 
	}
	cin>>k;
	int sum=0;
	for(i=0;i<k;i++){
		for(j=0;j<2;j++){
			cin>>calc[i][j];
		}
	}
	
	for(i=0;i<k;i++){
		for(j=calc[i][0];j<=calc[i][1];j++){
			sum+=input[j-1]; //��j���Ӧ����j-1��λ�� 
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
} 
