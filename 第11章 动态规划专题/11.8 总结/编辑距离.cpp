#include <bits/stdc++.h>
using namespace std;

const int maxn=100;
int dp[maxn][maxn];

int main(){
	string s1,s2;
	cin>>s1>>s2;
	
	int len1=s1.length(),len2=s2.length();
	
	for(int i=0;i<=len1;i++){
		dp[i][0]=i;
	}
	for(int j=0;j<=len2;j++){
		dp[0][j]=j;
	}
	
	for(int i=1;i<=len1;i++){
		for(int j=1;j<=len2;j++){
			dp[i][j]=min(dp[i-1][j] , dp[i][j-1]) +1;
			if(s1[i-1]!=s2[j-1]){
				dp[i][j]=min(dp[i][j] , dp[i-1][j-1]+1);
			}
			else{
				dp[i][j]=min(dp[i][j] , dp[i-1][j-1]);
			}
		}
	}
	
	cout<<dp[len1][len2];
	return 0;
} 
