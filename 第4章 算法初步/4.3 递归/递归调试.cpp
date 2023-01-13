#include<iostream>

using namespace std;

int func(int n,int depth) {
    for (int i = 0;i < depth - 1;i++) {
        cout << "    ";
    }
    cout << "n=" << n<<endl;
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
