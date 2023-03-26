/*
一个合法的C语言变量名需要满足：

所有字符必须由且仅由字母（A-Z,a-z）、数字（0-9）、下划线（_）组成；
首字符不能是数字，可以是字母或下划线；
不能是C语言关键字，如if、while等。
给定一个非C语言关键字的字符串，判断其是否可以作为合法的C语言变量名。
*/
#include<iostream>
#include<cstring>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
    char str[20];
    cin >> str;
    int i = 0;
    int len = strlen(str);
    int count = 1;
    int j;
    while (len--) {
        if (str[0] == '0' || str[0] == '1' || str[0] == '2' || str[0] == '3' || str[0] == '4' || str[0] == '5' || str[0] == '6' || str[0] == '7' || str[0] == '8' || str[0] == '9') {
            //首字符是数字，肯定不是关键字 
			cout << "NO";
            break;
        }
        for (i = 1;i < len;i++) {
            if (str[i] = '_' || (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')) {

                count++;
            }
            else {
                cout << "NO";
            }
        }
        if (count == len) {
            cout << "YES";
        }
    }

    return 0;
}
