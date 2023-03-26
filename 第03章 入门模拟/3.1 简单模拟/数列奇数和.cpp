#include<iostream>
#include<cstring>
#define maxsize 100
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[maxsize];
    int i=0,j=0;
    int sum=0;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        if(a[j]%2==1){
            sum=sum+a[j];
        }
    }
    cout<<sum;
    return 0;
}
