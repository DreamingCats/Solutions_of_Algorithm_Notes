#include <iostream> 
using namespace std; 

int ans=0;

int f5(int n){ 
	/*
	判断一个数有多少个质因子5 
	末尾0的个数等于质因子10（5）的个数 
	*/
	int cnt=0;
	while(n%5==0){
		cnt++;
		n/=5;
	}
	return cnt;
}

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){ //依次累加 
		ans+=f5(i);
	}
	
	cout<<ans;
	return 0;
} 
