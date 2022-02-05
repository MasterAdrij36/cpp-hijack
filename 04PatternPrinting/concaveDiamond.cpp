/*
Input : 7
Output : 
*                       * 
* *                   * * 
* * *               * * * 
* * * *           * * * * 
* * * * *       * * * * * 
* * * * * *   * * * * * * 
* * * * * * * * * * * * * 
* * * * * *   * * * * * * 
* * * * *       * * * * * 
* * * *           * * * * 
* * *               * * * 
* *                   * * 
*                       * 
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=2*n-1; j++) {
            if (j<=i or j>=2*n-i) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    n-=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=2*n+1; j++) {
            if (j<=n+1-i or j>n+i) {
                cout<<"* ";
            } else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}