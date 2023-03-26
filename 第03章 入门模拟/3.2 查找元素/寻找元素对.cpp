#include<iostream>
#define maxsize 1000
using namespace std;
int main(){
    int n,K;
    int a[maxsize];
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>K;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]+a[j]==K){
                count++;
            }
        }
    }
    cout<<count/2;
    return 0;
}
