#include <iostream> 
#include <cmath>
using namespace std;

bool isFull(int n){ //只看n就行 
	for(int j=0;j<7;j++){
		if(n==(int)pow(2,j)-1){
			return true;
		}
	}
	return false;
}

int main(){
	int n;
	cin>>n;
	int a[128];
	for(int i=0;i<n*2;i++){
		cin>>a[i];
	}
	
	cout<<(isFull(n)?"Yes":"No");
	return 0;
}
