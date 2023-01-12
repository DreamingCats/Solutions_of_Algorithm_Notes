#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

char ans[1000];

int main() {

    int num = 0;
    while (scanf("%s", ans) != EOF) {
        num++;
    }
    cout<<num;
    return 0;
}
/*可以试试查空格，单词数=空格数+1 
如果没有输入时输出0 ，只有一个单词时输出1 
*/
