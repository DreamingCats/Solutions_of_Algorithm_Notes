#include <iostream> 
using namespace std; 

int ans=0;

int f2(int n){ //�ж�һ�����ж��ٸ�������2 
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
	
	for(int i=1;i<=n;i++){ //�����ۼ� 
		ans+=f2(i);
	}
	
	cout<<ans;
	return 0;
} 
