/*
Input : 7 
Output : 
            *                       *             
          *   *                   *   *           
        *       *               *       *         
      *           *           *           *       
    *               *       *               *     
  *                   *   *                   *   
*                       *                       * 
*/


#include<iostream>
using namespace std; 

int main() {
    int n;
    cin>>n;
    int a=n;
    int b=n;
    int c=3*n-2;
    int d=3*n-2;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=4*n-3; j++) {
            
            if(j==a or j==b or j==c or j==d){
                cout<<"* ";
            } else{
                cout<<"  ";
            }
        }
        a--;
        b++;
        c--;
        d++;
        cout<<'\n';
    }
    return 0;
}