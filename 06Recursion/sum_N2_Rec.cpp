// 1 -> 1 ; 2 -> 5 ; 3 -> 14 

#include<iostream>
using namespace std;

int SumRecN2 (int n) {
    if (n==1) return 1;
    return n*n+SumRecN2(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<SumRecN2(n)<<"\n";
    return 0;
}