//67ms
#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;

const int maxn=200000;
int a[maxn];

int main(){
	int n,m;
	cin>>n>>m;
	int sum=n+m;
	for(int i=0;i<sum;i++){
		cin>>a[i];
	}
	
	sort(a,a+sum); 
	
	//ÕÒÖĞÎ»Êı 
	if(sum%2==1){
		printf("%.1f",(double)a[(sum+1)/2-1]);
	}
	else{
		printf("%.1f",(double)(a[sum/2-1]+a[sum/2])/2);
	}
	
	return 0;
}
