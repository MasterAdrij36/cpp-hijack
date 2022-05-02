#include<iostream>
#include<vector>
using namespace std;

int linearSearchRec(vector<int> arr, int value, int key) {
    if (key>arr.size()) return -1;
    if (arr[key]==value) return key;
    return linearSearchRec(arr, value, key+1);
}

int main() {
    int n, value, key=0;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>value;
    cout<<linearSearchRec(arr, value, key)<<"\n";
    return 0;
}