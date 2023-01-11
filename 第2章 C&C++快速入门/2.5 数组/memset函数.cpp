#include<iostream>
#include<cstring>
#define maxsize 100
using namespace std;
int main(){
    int x;
    cin>>x;
    int A[maxsize];
    memset(A, x, sizeof(A));
    cout<<A[0];
    return 0;
}
