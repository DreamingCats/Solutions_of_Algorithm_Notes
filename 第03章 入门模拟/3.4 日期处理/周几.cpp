#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;
int month[13][2] = {
    {0,0},
    {31,31},
    {28,29},
    {31,31},
    {30,30},
    {31,31},
    {30,30},
    {31,31},
    {31,31},
    {30,30},
    {31,31},
    {30,30},
    {31,31} };

bool isleap(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int main() {
    int day = 0;
    int yyyy1 = 1900, mm1 = 1, dd1 = 1; //1900年1月1日是周一 
    int yyyy2, mm2, dd2;

    scanf("%d-%d-%d", &yyyy2, &mm2, &dd2);

    while (yyyy1 < yyyy2 || mm1 < mm2 || dd1 < dd2) {
        dd1++;
        if (dd1 > month[mm1][isleap(yyyy1)]) {
            mm1++;
            dd1 = 1;
        }
        if (mm1 > 12) {
            yyyy1++;
            mm1 = 1;
        }
        day++; //增加一天 
    }

    //printf("%04d-%02d-%02d", yyyy, mm, dd);

    cout << (day + 1) % 7;  //1900年1月2日是周二 

    return 0;
}
