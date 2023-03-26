#include <iostream>
#include <algorithm>
const int maxn=1000;
int a[maxn];
int n;

using namespace std;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	sort(a,a+n);
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	return 0;
}
