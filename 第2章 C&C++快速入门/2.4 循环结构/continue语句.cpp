#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int sum=0;
    for(i=1;i<=n;i++){
        if(i%3!=0){
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}
