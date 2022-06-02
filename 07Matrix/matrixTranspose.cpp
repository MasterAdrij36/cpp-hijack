#include<iostream>
#include<vector>
using namespace std;

vector<vector<int> > inPlaceTranspose(vector<vector<int> > arr) {
    int n=arr.size();
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            swap (arr[i][j],arr[j][i]);
        }
    }
    return arr;
}

int main() {
    int n;
    cin>>n;
    vector<vector<int> > arr(n, vector<int> (n));
    int k=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]=k++;
        }
    }
    arr = inPlaceTranspose(arr);
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n";
    return 0;
}