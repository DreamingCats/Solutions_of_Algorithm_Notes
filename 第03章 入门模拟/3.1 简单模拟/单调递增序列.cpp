#include<iostream>
#include<cstring>
#define maxsize 100
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[maxsize];
    int i=0,j=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n-1;j++){
        if(a[j]<=a[j+1]){
            if(j==n-2){
                cout<<"YES";
            }
        }
        else{
            if(j==n-2){
                cout<<"NO";
            }
        }
    }
    return 0;
}
