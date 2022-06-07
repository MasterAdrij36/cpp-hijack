#include<iostream>
#include<vector>
using namespace std; 

void Print (const vector<vector<int> > &arr) {
    int m = arr.size();
    int n = arr[0].size();
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

vector<vector<int> > transpose (vector<vector<int> > arr) {
    int m = arr.size();
    int n = arr[0].size();
    vector<vector<int> > result (n, vector<int> (m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            result[i][j]=arr[j][i];
        }
    }
    return result;
}

int main () {
    int m,n;
    cin>>m>>n;
    vector<vector<int> > arr (m, vector<int> (n));
    int k=1;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]=k++;
        }
    }
    Print (arr);
    cout<<"\n";
    vector<vector<int> > outArr (n, vector<int> (m));
    outArr=transpose(arr);
    Print (outArr);
    return 0;
}