#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, sum=0;
    cin>>n;
    vector<vector<int> >arr (n, vector<int> (n));
    for(int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<n; i++) {
        sum+=arr[i][i];
    }
    for (int i=0; i<n; i++) {
        sum+=arr[i][n-1-i];
    }
    if (n & 1) {
        sum-=arr[n/2][n/2];
    }
    cout<<sum<<"\n";
    return 0;
}