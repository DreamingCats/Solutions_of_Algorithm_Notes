#include<cstring>
#include<cstdio>
#define maxsize 100
using namespace std;
int main(){
    char str1[maxsize],str2[maxsize];
    scanf("%s",str1);
    scanf("%s",str2);
    strcat(str1,str2);
    printf("%s",str1);
    

    return 0;
}
