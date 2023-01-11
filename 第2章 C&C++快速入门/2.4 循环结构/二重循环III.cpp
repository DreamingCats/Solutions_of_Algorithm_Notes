#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j;
            printf(j<n-i+1?" ":"\n");
        }
    }
    return 0;
}
