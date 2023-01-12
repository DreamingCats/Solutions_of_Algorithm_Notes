#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=n/100;

    int c=n%10;
    int b=(n-a*100)/10;
    cout<<a<<" ";
    cout<<b<<" ";
    cout<<c;
    return 0;
}
