#include<iostream>
#define maxsize 100
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
    int temp;
    temp=0;
    for(i=0;i<n;i++){
        if(a[i]==x){
            temp++;
        }
    }
    cout<<temp;
    return 0;
}
