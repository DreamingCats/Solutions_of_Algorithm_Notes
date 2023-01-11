#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        if(sum>=2000){
            break;
        }
    }

    cout<<sum;
    return 0;
}
