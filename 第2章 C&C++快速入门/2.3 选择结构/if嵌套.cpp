#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0)
        cout<<"Negative Number";
    if(n>=0&&n%2==1)
        cout<<"Odd Number";
    if(n>=0&&n%2==0)
        cout<<"Even Number";
    return 0;
}
