#include <cstdio>
#include <cmath>
#include <algorithm>
const int maxn=100001;
int input[maxn];

using namespace std;

/*
//对于input[j],找出前j-1项的最大值 
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
	int premax=input[0]; //之前的最大值 
	for(j=0;j<n;j++){
		if(j==0){ //input[0]肯定符合 
			ans++;
		}
		//注释掉的超时了。。最后一个没算完 
		/*
		else if(input[j]<input[j-1]){  
			continue;
			//如果下一项比上一项小的话，
			//不用算最大值了，这项直接过，节省时间
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
		premax=max(premax,input[j]);  //更新最大值 
	}
	
	printf("%d",ans);
	return 0; 
}


