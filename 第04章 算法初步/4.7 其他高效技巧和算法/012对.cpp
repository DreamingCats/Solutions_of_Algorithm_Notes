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
	//O(n^3)的算法超时了 
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
	
	//01串的代码改进一下,16ms过了 
	int num0=0,num1=0;
	long long result01=0,result012=0; //int不够用了 
	for(i=0;i<n;i++){
		if (input[i] == 0){  //先找到0 
			num0++;
		} 
		else if(input[i]==1){  //再找到1，匹配01串
			result01+=num0; //01串的数量 
			//num1++;
		} 
		else{ 
			result012+=result01;
		}
	} 
	
	cout<<result012;
	
	
	return 0;
} 
