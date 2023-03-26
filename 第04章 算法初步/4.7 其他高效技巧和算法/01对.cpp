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
	//O(n^2)���㷨448ms,��㳬ʱ 
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
	
	//���15ms���� 
	int numZero=0,result=0;
	for(i=0;i<n;i++){
		if (input[i] == 0){  //���ҵ�0 
			numZero++;
		} 
		else{  //���ҵ�1��ƥ��01�� 
			result+=numZero;
		}
	} 
	
	cout<<result;
	return 0;
} 
