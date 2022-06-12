/*
INPUT : 
5 6
OUTPUT : 
1 2 3 4 5 6 
7 8 9 10 11 12 
13 14 15 16 17 18 
19 20 21 22 23 24 
25 26 27 28 29 30 

1 2 3 4 5 6 12 18 24 30 29 28 27 26 25 19 13 7 8 9 10 11 17 23 22 21 20 14 15 16 
*/

#include<iostream>
#include<vector>
using namespace std;

void print (const vector<vector<int> > &arr) {
    int m = arr.size();
    int n = arr[0].size();
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void spiralPrint(const vector<vector<int> > &arr) {
    int m = arr.size();
    int n = arr[0].size();
    int up=0, down=m-1, left=0, right=n-1;
    int direction=1;
    while(up<=down and left<=right) {
        if (direction==1) {
            for (int j=left; j<=right; j++) {
                cout<<arr[up][j]<<" ";
            }
            up++;
            direction=2;
        }
        else if (direction==2) {
            for (int i=up; i<=down; i++) {
                cout<<arr[i][right]<<" ";
            }
            right--;
            direction=3;
        }
        else if (direction==3) {
            for (int j=right; j>=left; j--) {
                cout<<arr[down][j]<<" ";
            }
            down--;
            direction=4;
        }
        else {
            for (int i=down; i>=up; i--) {
                cout<<arr[i][left]<<" ";
            }
            left++;
            direction=1;
        }
    }
}

int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int> > arr (m,vector<int> (n));
    int k=1;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]=k++;
        }
    }
    print(arr);
    cout<<"\n";
    spiralPrint(arr);
    cout<<"\n";
    return 0;
}