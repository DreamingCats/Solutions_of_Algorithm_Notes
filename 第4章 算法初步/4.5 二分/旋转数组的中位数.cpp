#include <iostream>
#include <algorithm>
#include <cstdio>
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
	
	sort(a,a+n); 
	
	//ÕÒÖÐÎ»Êý 
	if(n%2==1){
		printf("%.1f",(double)a[(n+1)/2-1]);
	}
	else{
		printf("%.1f",(double)(a[n/2-1]+a[n/2])/2);
	}
	
	return 0;
}
