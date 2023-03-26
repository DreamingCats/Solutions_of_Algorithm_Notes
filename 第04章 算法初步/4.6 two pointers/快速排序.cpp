#include <iostream>
#include <algorithm>

const int maxn=1000;
int a[maxn];
int n;

using namespace std;

int cmp(const void *a,const void *b){
	return *(int*)a-*(int *)b; //*(int*)a ,把a强转成整形指针，然后取他的值。
}

int main() {
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	qsort(a,n,sizeof(int),cmp);  //调用快排 
	for(int i=0;i<n;i++){
		cout<<a[i];
		if(i<n-1){
			cout<<" ";
		}
	}
	return 0;
}
