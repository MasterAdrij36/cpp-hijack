// 1 -> 1 ; 2 -> 9 ; 3 -> 36 

#include<iostream>
using namespace std;

int SumRecN3(int n) {
    if (n==1) return 1;
    return n*n*n+SumRecN3(n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<SumRecN3(n)<<"\n";
    return 0;
} 