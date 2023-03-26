#include<iostream>
using namespace std;
bool isleap(int year){
    return ((year%4==0&&year%100!=0)||(year%400==0));
}
int main(){
    int year;
    cin>>year;
    if(isleap(year)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
