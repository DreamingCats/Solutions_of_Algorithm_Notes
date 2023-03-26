#include<iostream>
#include<cmath>
using namespace std;

bool judge(int n){
    int a=n/100;
    int c=n%10;
    int b=(n-a*100)/10;
    if(n==pow(a,3)+pow(b,3)+pow(c,3)){
        return true;
    }
    else{
        return false;
    }

}

int main(){
    int min,max;
    cin>>min>>max;
    int n;
    int a[100];
    int i=0;
    for(n=min;n<=max;n++){
        if(judge(n)==true){
            a[i++]=n;
        }
        
    }
    int j;
    //int num=sizeof(a)/sizeof(a[0]);
    for(j=0;j<i;j++){
        cout<<a[j];
        if(j<i-1){
            cout<<" ";
        }
    }
    if(i==0){
        cout<<"NO";
    }
    return 0;
}

