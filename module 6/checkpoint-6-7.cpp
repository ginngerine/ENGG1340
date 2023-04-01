#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string newSentence){
    int index=0, loop, strLength=newSentence.length();
    bool isOdd=false;

    loop=strLength/2;
    if (strLength%2!=0){loop++;}
    for (int i=0; i<loop; i++){if (newSentence[i] != newSentence[strLength-i-1]){return false;}}

    return true;
}

int main(){
    char sentence[100]={};
    string newSentence="";

    cin.getline(sentence, 100);
    for (int i=0; i<100; i++){
        if (isalpha(sentence[i])){newSentence=newSentence+(char)tolower(sentence[i]);}
        else if (isdigit(sentence[i])){newSentence=newSentence+sentence[i];}
    }

    if (isPalindrome(newSentence)){cout << "The input string is a palindrome." << endl;}
    else {cout << "The input string is not a palindrome." << endl;}

    return 0;
}