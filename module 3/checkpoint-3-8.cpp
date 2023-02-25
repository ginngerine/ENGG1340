// Calculate one's BMI values
#include <iostream>
using namespace std;

int main() {
    double weight, height; // weight (kg), height (m)
    
    cin >> weight >> height;
    cout << "Your BMI = " << weight/(height*height) << endl;
    cout << "BMI VALUES\n"
            "Underweight: less than 18.5\n"
            "Normal: between 18.5 and 24.9\n"
            "Overweight: between 25 and 29.9\n"
            "Obese: 30 or greater\n";

    return 0;
}

// g++ -pedantic-errors -std=c++11 checkpoint-3-8.cpp