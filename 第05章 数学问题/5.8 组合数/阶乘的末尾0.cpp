#include <iostream> 
using namespace std; 

int ans=0;

int f5(int n){ 
	/*
	�ж�һ�����ж��ٸ�������5 
	ĩβ0�ĸ�������������10��5���ĸ��� 
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
	
	for(int i=1;i<=n;i++){ //�����ۼ� 
		ans+=f5(i);
	}
	
	cout<<ans;
	return 0;
} 
