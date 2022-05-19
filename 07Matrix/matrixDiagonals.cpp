#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int> > arr(n,vector<int> (n));
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
    cout<<"The Primary Diagonal is : \n";
    for (int i=0; i<n; i++) {
        cout<<arr[i][i]<<" ";
    }
    cout<<"\n";
    cout<<"The Secondary Diagonal is : \n";
     for (int i=0; i<n; i++) {
        cout<<arr[i][n-1-i]<<" ";
    }
    cout<<"\n";
    return 0;
}