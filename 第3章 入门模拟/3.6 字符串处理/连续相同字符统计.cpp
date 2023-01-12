#include<iostream>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
    char str[100];
    cin >> str;
    int i=0;
    int len = strlen(str);
    while (i<len) {
        
        cout << str[i++] << " ";
        int count = 1;
        while (i < len && str[i] == str[i - 1]) {
            count++;
            i++;
        }
         cout << count << endl;

    }


    return 0;
}
