/* 
Input : 10
Output :
                  A   
                B   B   
              C   C   C   
            D   D   D   D   
          E   E   E   E   E   
        F   F   F   F   F   F   
      G   G   G   G   G   G   G   
    H   H   H   H   H   H   H   H   
  I   I   I   I   I   I   I   I   I   
J   J   J   J   J   J   J   J   J   J 

Input : 26
Output : 
                                                  A   
                                                B   B   
                                              C   C   C   
                                            D   D   D   D   
                                          E   E   E   E   E   
                                        F   F   F   F   F   F   
                                      G   G   G   G   G   G   G   
                                    H   H   H   H   H   H   H   H   
                                  I   I   I   I   I   I   I   I   I   
                                J   J   J   J   J   J   J   J   J   J   
                              K   K   K   K   K   K   K   K   K   K   K   
                            L   L   L   L   L   L   L   L   L   L   L   L   
                          M   M   M   M   M   M   M   M   M   M   M   M   M   
                        N   N   N   N   N   N   N   N   N   N   N   N   N   N   
                      O   O   O   O   O   O   O   O   O   O   O   O   O   O   O   
                    P   P   P   P   P   P   P   P   P   P   P   P   P   P   P   P   
                  Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   Q   
                R   R   R   R   R   R   R   R   R   R   R   R   R   R   R   R   R   R   
              S   S   S   S   S   S   S   S   S   S   S   S   S   S   S   S   S   S   S   
            T   T   T   T   T   T   T   T   T   T   T   T   T   T   T   T   T   T   T   T   
          U   U   U   U   U   U   U   U   U   U   U   U   U   U   U   U   U   U   U   U   U   
        V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   V   
      W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   W   
    X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   X   
  Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   Y   
Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z   Z 

Input : 30
Output : 
      A   
    B   B   
  C   C   C   
D   D   D   D
*/

#include<iostream>
using namespace std; 

int main() {
    int n;
    cin>>n;
    if (n%26==0) {
        n=26;
    } else {
        n%=26;
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n-i; j++) {
            cout<<"  ";
        }
        for (int k=1; k<=i; k++) {
            cout<<char(int('A')+i-1)<<"   ";
        }
        cout<<"\n";
    }
    return 0;
}