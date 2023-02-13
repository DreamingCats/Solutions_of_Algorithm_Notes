#include <bits/stdc++.h>
using namespace std;
const int maxn=100;
int dp[maxn][maxn];

int main(){
	string s1,s2;
	cin>>s1>>s2;
	int len1=s1.length(),len2=s2.length();
	
	for(int i=1;i<=len1;i++){
		for(int j=1;j<=len2;j++){
			if(s1[i-1]==s2[j-1]){
				dp[i][j]=dp[i-1][j-1]+1;
			}
			else{
				dp[i][j]=max(dp[i][j-1], dp[i-1][j]);
			}
		}	
	}
	cout<<dp[len1][len2];
	return 0;
}
