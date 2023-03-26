#include <complex.h>
#include<iostream>
//using namespace std;

const int maxsize= 1000;
int hash[maxsize] = { 0 };

int main() {
    
    int n, m;
    char x,y;
    std::cin >> n >> m;
    for (int i = 0;i < n;i++) {
        std::cin >> x;
        hash[x]++  ;
    }

    for (int j = 0;j < m;j++) {
        std::cin >> y;
            std::cout << hash[y];
        if (j < m - 1) {

            std::cout << " ";
        }
    }


    return 0;
}
