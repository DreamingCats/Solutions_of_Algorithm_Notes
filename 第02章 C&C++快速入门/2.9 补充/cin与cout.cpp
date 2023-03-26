#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n;
    double d;
    char s[100];
    cin>>n>>d;
    getchar();
    cin.getline(s,100);
    cout<<n<<endl;
    printf("%.2f\n",d);
    cout<<s;
    return 0;
}
