// Add a comma between each digit of a five digit integer
#include <iostream>
using namespace std;

int main() {
    string str;

    cin >> str;
    for (int i=0; i<str.length(); ++i) {
        if (i != (str.length()-1)) cout << str[i] << ",";
        else cout << str[i];
    }
    return 0;
}

// g++ -pedantic-errors -std=c++11 checkpoint-3-7.cpp