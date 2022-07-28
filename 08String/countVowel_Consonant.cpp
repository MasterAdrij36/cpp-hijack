#include<iostream>
#include<string>
using namespace std; 

bool isVowel (char ch) {
    if (ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || 
        ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
            return true;
    }
    return false;
}

bool isAlpha (char ch) {
    if (isalpha(ch)) {
        return true;
    }
    return false;
}

bool isSpace (char ch) {
    if (ch==' ') {
        return true;
    }
    return false;
}

bool isDigit (char ch) {
    if (isdigit(ch)) {
        return true;
    }
    return false;
}

int main() {
    string str; 
    cout<<"Enter the string : ";
    getline(cin,str);
    int n=str.size();
    int vowel=0, consonant=0, space=0, digit=0, special=0;
    for (int i=0; i<n; i++) {
        if (isVowel(str[i])) vowel++;
        else if (isAlpha(str[i])) consonant++; 
        else if (isSpace(str[i])) space++;
        else if (isDigit(str[i])) digit++;
        else special++;
    }
    cout<<"No. of Vowel are : "<<vowel<<"\n";
    cout<<"No. of Consonant are : "<<consonant<<"\n";
    cout<<"No. of Space are : "<<space<<"\n";
    cout<<"No. of Digit are : "<<digit<<"\n";
    cout<<"No. of Special are : "<<special<<"\n";
    return 0; 
}