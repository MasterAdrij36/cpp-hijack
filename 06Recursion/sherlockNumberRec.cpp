/* Sherlock Number is a number in which the 
sum of the digit in the number is even...*/ 

#include<iostream>
using namespace std;

int sum (int n) {
    if (n==0) return 0;
    return (n%10)+sum(n/10);
}

bool isSherlock (int n) {
    return !(sum(n)&1);
}

int countSherlock (int n) {
    if (n==0) return 1;
    return (isSherlock(n)?1:0)+countSherlock(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<countSherlock(n)<<"\n";
    return 0;
}