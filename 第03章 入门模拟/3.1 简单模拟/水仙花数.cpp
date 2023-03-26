#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n/100;
    int c=n%10;
    int b=(n-a*100)/10;
    if(n==pow(a,3)+pow(b,3)+pow(c,3)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
