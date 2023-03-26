#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int x;
    int n;
    int i=0;
    cin>>n;
    while(scanf("%d",&x)!=EOF){
        cout<<x+1;
        i++;
        if(i<n){
            cout<<" ";
        }
    }
    

    return 0;
}
