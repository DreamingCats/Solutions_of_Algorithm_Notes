#include<iostream>
using namespace std;
int main(){
    int year1,month1,day1;
    int year2,month2,day2;
    scanf("%d-%d-%d",&year1,&month1,&day1);
    scanf("%d-%d-%d",&year2,&month2,&day2);
    if(year1>year2){
        cout<<"NO";
    }
    else if(year1<year2){
        cout<<"YES";
    }
    else if(year1==year2){
        if(month1>month2){
            cout<<"NO";
        }
        else if(month1<month2){
            cout<<"YES";
        }
        else if(month1==month2){
            if(day1>day2){
                cout<<"NO";
            }
            else if(day1<day2){
                cout<<"YES";
            }
            else if(day1==day2){
                cout<<"NO";
            }
        }
    }
    return 0;
}
//一路if/else下去 
