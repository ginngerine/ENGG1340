#include <iostream>
using namespace std;

char sentence[999]={}; // global variable

void remove(int index, int n1, char sentence[999]){
    for (int i=0; i<n1; i++){
        sentence[index+i]='\0';
    }
}

void insert(int index, int counter, int n2, int diff, char sentence[999], char phrase2[20]){
    // cout << "n=" << n << endl;
    // for (int j=0; j<n; j++){cout << sentence[j] << " ";}
    // cout << endl;
    if (diff<0){diff++;}
    for (int i=counter+diff-1; i>=index; i--){
        sentence[i+n2]=sentence[i];

        // for (int j=0; j<n; j++){cout << sentence[j] << " ";} //debug
    }
    for (int i=0; i<n2; i++){sentence[index+i]=phrase2[i];}
}

int main(){
    char phrase1[20]={}, phrase2[20]={};
    int n=0, n1=0, n2=0, digit=0, digit1=0, digit2=0, counter=0, diff=0; // checks which digit/index in the sentence you're now on
    bool match=true;

    cin.getline(sentence, 999);
    cin.getline(phrase1, 20);
    cin.getline(phrase2, 20);

    while (sentence[n] != '\0'){n++;} // length of sentence
    while (phrase1[n1] != '\0'){n1++;} // length of phrase1
    while (phrase2[n2] != '\0'){n2++;} // length of phrase2
    counter=n; // length of edited sentence
    diff=n2-n1;

    while (digit < counter){
        digit1=0; digit2=0; match=true; // reset everything back to default value
        cout << "Passing; digit: " << digit << ", counter: " << counter << endl;

        if (sentence[digit]==phrase1[digit1]){
            for (int i=0; i<n1; i++){ // check that the following digits = phrase 1 // be careful of overflow
                if (sentence[digit+i] != phrase1[i]){
                    match=false;
                    break;
                }
            }

            if (match){
                remove(digit, n1, sentence);
                insert(digit, counter, n2, diff, sentence, phrase2);

                if (diff >= 0){digit=digit+n2; counter=counter+diff;}
                else if (diff < 0){digit=digit+n2; counter=counter+diff+1;}
            }
        }

        digit++;
    }

    for (int i=0; i<counter; i++){cout << sentence[i];}
    cout << endl;
    cout << digit << ", " << counter << endl;
    // 加少咗次 diff 搞到 while loop condition cut off 咗佢

    return 0;
}