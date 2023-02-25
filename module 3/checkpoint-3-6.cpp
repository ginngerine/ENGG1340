// Determine if a number is odd or even
#include <iostream>
using namespace std;

int main() {
    int x;

    cin >> x;
    if(x%2 == 0) cout << x << " is even";
    else cout << x << " is odd";
    
    return 0;
}

// g++ -pedantic-errors -std=c++11 checkpoint-3-6.cpp