#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int i, counter = 0, temp, a [15] = {}; // counter is the index slot you're about to input

    cin >> i;
    for (int n=0; n<i; n++){
        if (n==15){break;}
        else {
            a[n]=n*n;
            counter++;
        }
    }

    temp=counter;
    for (int n=0; n<5; n++){
        if (counter>=15){break;}
        a[temp+n]=0;
        counter++;
    }

    temp=counter;
    for (int n=0; n<10; n++){
        if (counter>=15){break;}
        a[temp+n]=pow(3, temp+n);
        counter++;
    }

    for (int n=0; n<15; n++){cout << a[n] << " ";}

    return 0;
}