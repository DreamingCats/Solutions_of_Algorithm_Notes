#include <iostream>
using namespace std;
typedef long long ll;
const int mod=10007; 
int main() {
    int n;
    cin >> n;
    ll dp[n+1][2];
    dp[1][0] = 9;
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i-1][1]%mod * 9 + dp[i-1][0]%mod * 9;
        dp[i][1] = dp[i-1][0]%mod;
    }
    
    ll ans=(dp[n][0]%mod+ dp[n][1]%mod)%mod;
    /*
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i-1][1] * 9 + dp[i-1][0]* 9;
        dp[i][1] = dp[i-1][0];
    }
    
    ll ans=dp[n][0]+ dp[n][1];
    */
    
    cout << ans;
    return 0;
}

