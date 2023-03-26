#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
int main(){
    string str,str1;
    cin>>str;
    str1=str;
    reverse(str.begin(),str.end());
    if(str==str1){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}
//将字符串逆置，与原来的相比，如果一样就是回文串，否则不是 
