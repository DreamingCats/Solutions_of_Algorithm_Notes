#include<iostream>
using namespace std;

const int maxn=100001;
int a[maxn];

int main(){
	int n;
	cin>>n;
	int i;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	
	int min=a[0]; 
	for(i=1;i<n;i++){
		if(a[i]<min){
			min=a[i];
		}
	}
	cout<<min;
	return 0;
}
