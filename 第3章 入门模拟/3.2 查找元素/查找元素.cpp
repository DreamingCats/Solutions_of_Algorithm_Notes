#include<iostream>
#define maxsize 20
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[maxsize];
    int i=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int temp=0;
    for(i=0;i<n;i++){
        if(a[i]==x){
            cout<<i+1;
        }
        else{
            temp++;
        }
    }
    if(temp==n){
        cout<<"NO";
    }
    return 0;
}
