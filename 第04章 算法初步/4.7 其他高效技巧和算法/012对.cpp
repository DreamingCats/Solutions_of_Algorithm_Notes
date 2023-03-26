#include <iostream>
const int maxn=100000;
int input[maxn];

using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>input[i];
	}
	
	/*
	//O(n^3)���㷨��ʱ�� 
	int cnt=0;
	for(i=0;i<n;i++){
		if(input[i]==0){
			for(j=i+1;j<n;j++){
				if(input[j]==1){
					for(k=j+1;k<n;k++){
						if(input[k]==2){
							cnt++;
						}
					}
				}
			}
		}
	}
	cout<<cnt;
	*/
	
	//01���Ĵ���Ľ�һ��,16ms���� 
	int num0=0,num1=0;
	long long result01=0,result012=0; //int�������� 
	for(i=0;i<n;i++){
		if (input[i] == 0){  //���ҵ�0 
			num0++;
		} 
		else if(input[i]==1){  //���ҵ�1��ƥ��01��
			result01+=num0; //01�������� 
			//num1++;
		} 
		else{ 
			result012+=result01;
		}
	} 
	
	cout<<result012;
	
	
	return 0;
} 
