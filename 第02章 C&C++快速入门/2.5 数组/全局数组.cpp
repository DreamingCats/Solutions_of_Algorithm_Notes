#include<iostream>
#define maxsize 1000000
using namespace std;

int a[maxsize];

int main(){
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int j=0;j<n;j++){
        cout<<a[j];
        if(j<n-1){
            cout<<" ";
        }
    }
    return 0;
}
