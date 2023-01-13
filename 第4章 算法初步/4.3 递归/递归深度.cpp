//改造一下斐波那契数列 
#include<iostream>

using namespace std;

int func(int n,int depth) {
    cout << depth << endl;
    if (n == 1 || n == 2) {
        return 1;
        
    }
    else {
        return func(n - 1,depth+1) + func(n - 2,depth+1);
    }
    
}

int main() {
    int n;
    cin >> n;
    func(n,1);
    return 0;
}
