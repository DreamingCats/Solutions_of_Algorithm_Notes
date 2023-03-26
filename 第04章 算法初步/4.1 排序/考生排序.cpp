#include<iostream>
#include<cstring>
#include <algorithm>
using namespace std;



struct Student {
    string name;
    int score;
}stu[1000];

bool compare(Student a, Student b) {
    if (a.score != b.score) {
        return a.score > b.score;
    }
    else {
        return a.name < b.name;
    }
}

int main() {
    int n;
    cin >> n;
    string str[50];
    for (int i = 0;i < n;i++) {
        cin >> stu[i].name>>stu[i].score;
    }
    sort(stu, stu + n, compare);
    for (int i = 0;i < n;i++) {
        cout << stu[i].name<<" "<<stu[i].score;
        if (i < n - 1) {
            cout << endl;
        }
    }
    return 0;
}
