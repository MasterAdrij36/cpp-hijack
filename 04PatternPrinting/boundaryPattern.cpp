/*
Input: 7
Output:
1 1 1 1 1 1 1 1 1 1 1 1 1 
1 2 2 2 2 2 2 2 2 2 2 2 1 
1 2 3 3 3 3 3 3 3 3 3 2 1 
1 2 3 4 4 4 4 4 4 4 3 2 1 
1 2 3 4 5 5 5 5 5 4 3 2 1 
1 2 3 4 5 6 6 6 5 4 3 2 1 
1 2 3 4 5 6 7 6 5 4 3 2 1 
1 2 3 4 5 6 6 6 5 4 3 2 1 
1 2 3 4 5 5 5 5 5 4 3 2 1 
1 2 3 4 4 4 4 4 4 4 3 2 1 
1 2 3 3 3 3 3 3 3 3 3 2 1 
1 2 2 2 2 2 2 2 2 2 2 2 1 
1 1 1 1 1 1 1 1 1 1 1 1 1
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            cout<<j<<" ";
        }
        for (int k=1; k<=(n-i)*2; k++) {
            cout<<i<<" ";
        }
        for (int l=i-1; l>0; l--) {
            cout<<l<<" ";
        }
        cout<<"\n";
    }
    n-=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n+1-i; j++) {
            cout<<j<<" ";
        }
        for (int k=1; k<=2*i; k++) {
            cout<<n+1-i<<" ";
        }
        for (int l=n-i; l>0; l--) {
            cout<<l<<" ";
        }
        cout<<"\n";
    }
    return 0;
}