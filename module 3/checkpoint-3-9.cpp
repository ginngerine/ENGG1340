// Keep reading user input until -1 is entered
#include <iostream>
using namespace std;

int main() {
    double n, sum;
    int numOfInputs;

    cin >> n;
    while (n != -1) {
        sum += n;
        numOfInputs += 1;
        cin >> n;
    }
    cout << sum/numOfInputs;
    
    return 0;
}

// g++ -pedantic-errors -std=c++11 checkpoint-3-9.cpp