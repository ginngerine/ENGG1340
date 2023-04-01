#include <iostream>
#include <cmath>
using namespace std;

double mean(int n, double s [20]){
    double miu;
    for (int i=0; i<n; i++){miu=miu+s[i];}
    return miu/n;
}

double variance(int n, double s [20], double miu){
    double summation=0;
    for (int i=0; i<n; i++){summation=summation+pow(s[i]-miu, 2);}
    return summation/n;
}

int main(){
    int n;
    double miu, var, s [20]={};
    
    cin >> n;
    for (int i=0; i<n; i++){cin >> s[i];}

    miu=mean(n, s);
    var=variance(n, s, miu);
    cout << var << endl;

    return 0;
}