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

vector<vector<int> >Rotate90clock(vector<vector<int> > arr) {
    int n=arr.size();
    for (int i=0; i<n; i++){
        for (int j=0; j<i; j++) {
            swap(arr[i][j],arr[j][i]);
        }
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n/2; j++) {
            swap(arr[i][j],arr[i][n-1-j]);
        }
    }
    return arr;
}

int main(){
    int n;
    cin>>n;
    cout<<"\n";
    vector<vector<int> >arr(n, vector<int> (n));
    int k=1;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            arr[i][j]=k++;
        }
    }
    Print(arr);
    cout<<"\n";
    arr=Rotate90clock(arr);
    Print(arr);
    cout<<"\n";
    return 0;
}
