#include<iostream>
#include<vector> 
using namespace std;

int countwords (string sentence) {
    int words=0;
    string str="";
    for (int i=0;i<sentence.length(); i++) {
        if (sentence[i]==' ') {
            if (str.length()>0) {
                words++;
                str="";
            }
        } else {
            str+=sentence[i];
        }
    }
    if (str.length()>0) words++;
    return words;
}

int main() {
    string str;
    getline(cin,str);
    cout<<"The no. of words in the string : "<<countwords(str)<<" \n";
    return 0;
}