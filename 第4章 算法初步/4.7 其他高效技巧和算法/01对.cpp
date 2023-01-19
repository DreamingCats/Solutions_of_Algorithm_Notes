#include <iostream>
const int maxn=100000;
int input[maxn];

using namespace std;
int main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>input[i];
	}
	
	/*
	//O(n^2)的算法448ms,差点超时 
	int cnt=0;
	for(i=0;i<n;i++){
		if(input[i]==0){
			for(j=i+1;j<n;j++){
				if(input[j]==1){
					cnt++;
				}
			}
		}
	}
	cout<<cnt;
	*/
	
	//这个15ms过了 
	int numZero=0,result=0;
	for(i=0;i<n;i++){
		if (input[i] == 0){  //先找到0 
			numZero++;
		} 
		else{  //再找到1，匹配01串 
			result+=numZero;
		}
	} 
	
	cout<<result;
	return 0;
} 
