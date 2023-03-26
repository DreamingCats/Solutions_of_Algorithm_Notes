#include <cstdio>
#include <cmath>
#include <algorithm>
const int maxn=100000;
const int INF=1<<31-1;
int input[maxn],leftMax[maxn];


int n;
using namespace std;


int main(){
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&input[i]);
	}
	
	leftMax[0]=input[0];
	for(i=1;i<n;i++){
		leftMax[i]=max(leftMax[i-1],input[i]);  //更新最大值 
	}
	
	int rightMin=INF,ans=0;
	for(i=n-1;i>=0;i--){
		if((i==0||leftMax[i-1]<input[i])&&input[i]<rightMin){
			ans++;
		}
		rightMin=min(rightMin,input[i]);  //更新最小值 
	}

	printf("%d",ans);
	return 0; 
}


