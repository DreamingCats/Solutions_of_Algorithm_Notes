#include <cstdio>
#include <cmath>
#include <algorithm>
const int maxn=100001;
int input[maxn];

using namespace std;

/*
//����input[j],�ҳ�ǰj-1������ֵ 
int maxnum(int input[],int j){
	int max=input[0];
	for(int i=1;i<j;i++){
		if(input[i]>max){
			max=input[i];
		}
	}
	return max;
}
*/

int main(){
	int n,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	
	int ans=0;  
	int premax=input[0]; //֮ǰ�����ֵ 
	for(j=0;j<n;j++){
		if(j==0){ //input[0]�϶����� 
			ans++;
		}
		//ע�͵��ĳ�ʱ�ˡ������һ��û���� 
		/*
		else if(input[j]<input[j-1]){  
			continue;
			//�����һ�����һ��С�Ļ���
			//���������ֵ�ˣ�����ֱ�ӹ�����ʡʱ��
		}
		else{
			if(maxnum(input,j)<input[j]){
				ans++;
			}
		}
		*/
		
		else if(premax<input[j]){
			ans++;
		} 
		premax=max(premax,input[j]);  //�������ֵ 
	}
	
	printf("%d",ans);
	return 0; 
}


