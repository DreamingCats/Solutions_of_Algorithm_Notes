#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;
#define maxsize 100
int main() {
    string str;
    cin >> str;
    reverse(str.begin(),str.end());
    cout << str;
    return 0;
}
