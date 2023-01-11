#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        scanf("%d",&a[j]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i];
        printf(i<n-1?" ":"");
    }
}
