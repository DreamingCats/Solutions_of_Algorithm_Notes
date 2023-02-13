#include <bits/stdc++.h>
using namespace std;

string str;
const int maxn=100;
bool dp[maxn][maxn];

int main(){
	memset(dp,false,sizeof(dp));
	cin>>str;
	int len=str.length();
	
	int maxLen=1;
	for(int i=0;i<len;i++){
		dp[i][i]=true;
	}
	
	for(int i=0;i<len-1;i++){
		if(str[i]==str[i+1]){
			dp[i][i+1]=true;
			maxLen=2;
		}
	}
	
	for(int k=3;k<=len;k++){
		for(int i=0;i+k-1<len;i++){
			int j=i+k-1;
			if(str[i]==str[j] && dp[i+1][j-1]){
				dp[i][j]=true;
				maxLen=k;
			}
		}
	}
	cout<<maxLen;
	return 0;
}
