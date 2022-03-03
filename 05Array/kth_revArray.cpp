#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n, k;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>k;
    int i=k, j=n-1;
    while (i<j) {
        swap (arr[i],arr[j]);
        i++;
        j--;
    }
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}