/* Sherlock Number is a number in which the 
sum of the digit in the number is even...*/ 

#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int sum=0; 
    sum+=N%10;
    N/=10;
    if (sum%2==0) {
        cout<<"Sherlock Number\n";
    } else {
        cout<<"Not a Sherlock Number\n";
    }
    return 0;
}