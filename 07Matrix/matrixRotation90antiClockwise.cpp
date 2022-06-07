#include<iostream>
#include<vector>
using namespace std; 

void Print (const vector<vector <int> > &arr) {
    int n = arr.size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

vector<vector<int> > Rotated90antiClock(vector<vector<int> > arr) {
    int n=arr.size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int j=0; j<n; j++) {
        for (int i=0; i<n/2; i++) {
            swap(arr[i][j],arr[n-1-i][j]);
        }
    }
    return arr;
}

int main() {
    int n;
    cin>>n;
    cout<<"\n";
    vector<vector<int> > arr(n,vector<int> (n));
    int k=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]=k++;
        }
    }
    Print(arr);
    cout<<"\n";
    arr=Rotated90antiClock(arr);
    Print(arr);
    cout<<"\n";
    return 0;
}