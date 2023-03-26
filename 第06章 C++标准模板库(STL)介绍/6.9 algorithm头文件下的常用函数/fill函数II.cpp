#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[3][5];
	int k,i,j;
	cin>>k;
	
	fill(a[0],a[0]+15,k); //前n个元素置为k 
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			cout<<a[i][j]<<(j<4?" ":"\n");
		}
	}
	return 0;	
}
