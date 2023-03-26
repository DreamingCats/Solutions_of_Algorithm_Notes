#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;



struct Student {
    string name;
    int score1;
    int score2;
    int sum;
}stu[1000];

bool compare1(Student a, Student b) {
    if (a.score1 != b.score1) {
        return a.score1 > b.score1;
    }
    else {
        return a.name < b.name;
    }
}

bool compare2(Student a, Student b) {
    if (a.score2 != b.score2) {
        return a.score2 > b.score2;
    }
    else {
        return a.name < b.name;
    }
}

bool compare3(Student a, Student b) {
    if (a.sum != b.sum) {
        return a.sum > b.sum;
    }
    else {
        return a.name < b.name;
    }
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;
    string str[50];
    for (int i = 0;i < n;i++) {
        cin >> stu[i].name >> stu[i].score1 >> stu[i].score2;
        stu[i].sum = stu[i].score1 + stu[i].score2;
    }
    
    

    if (k == 1) {
        sort(stu, stu + n, compare1);
    }
    if (k == 2) {
        sort(stu, stu + n, compare2);
    }
    if (k == 3) {
        sort(stu, stu + n, compare3);
    }

    for (int i = 0;i < n;i++) {
        cout << stu[i].name << " " << stu[i].score1 << " " << stu[i].score2<<" "<<stu[i].sum;
        if (i < n - 1) {
            cout << endl;
        }
    }
    return 0;
}
