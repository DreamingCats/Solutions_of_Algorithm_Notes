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
    int n;

    int yyyy, mm, dd;

    scanf("%d-%d-%d", &yyyy, &mm, &dd);
    cin >> n;

    for(int i=n;i>0;i--){
        dd--;
        if (dd <1 ) {
            mm--;
            
        }
        if (mm < 1) {
            yyyy--;
            mm = 12;
        }
        if(dd<1){
            dd = month[mm][isleap(yyyy)];
        }
    }

    printf("%04d-%02d-%02d", yyyy, mm, dd);



    return 0;
}
