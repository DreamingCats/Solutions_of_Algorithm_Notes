#include<cstring>
#include<iostream>
//using namespace std;

const int maxsize= 1000;
char s1[maxsize], s2[maxsize];
bool hash[63] = { false };

int getkey(char letter) {
    if (letter >= 'a' && letter <= 'z') {
        return letter - 'a';
    }
    if (letter >= 'A' && letter <= 'Z') {
        return letter - 'A' + 26;
    }
    if (letter >= '0' && letter <= '9') {
        return letter - '0' + 26*2;
    }
    if (letter == '_') {
        return 62;
    }
    
}

int main() {
    
    std::cin >> s1 >> s2;
    int len1 = strlen(s1);
    int len2 = strlen(s2);


    for (int i = 0;i < len1;i++) {
        hash[getkey(s1[i])] = true;
    }

    for (int j = 0;j < len2;j++) {
            std::cout << hash[getkey(s2[j])];
        if (j < len2 - 1) {

            std::cout << " ";
        }
    }


    return 0;
}
