#include <iostream>
#include <string>
using namespace std;

int main(){
    string sentence, phrase1, phrase2;
    int n, n1, n2, pos=0;

    getline(cin, sentence);
    getline(cin, phrase1);
    getline(cin, phrase2);

    n=sentence.length();
    n1=phrase1.length();
    n2=phrase2.length();

    pos=sentence.find(phrase1, pos);
    while (pos != -1){
        sentence.replace(pos, n1, phrase2);
        pos=sentence.find(phrase1, pos+n2);
    }

    cout << sentence << endl;

    return 0;
}