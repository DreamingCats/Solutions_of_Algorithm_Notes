#include <iostream> 
using namespace std; 

int ans=0;

int f2(int n){ //判断一个数有多少个质因子2 
	int cnt=0;
	while(n%2==0){
		cnt++;
		n=n>>1;
	}
	return cnt;
}

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){ //依次累加 
		ans+=f2(i);
	}
	
	cout<<ans;
	return 0;
} 
