#include<iostream>
#include<vector>
using namespace std;

int BrutForce(const vector <int> &arr) {
    // O(n*n) O(1) 
    int n=arr.size()+1;
    for (int i=1; i<=n; i++) {
        int count=0;
        for (int j=0; j<=n-1; j++) {
            if (arr[j]==i) {
                count++;
            }
        }
        if (count==0) {
            return i;
        }
    }
    return -1;
}

int mostOptimized(const vector <int> &arr) {
    // O(n) O(1) 
    int n=arr.size()+1;
    int sum=(n*(n+1))/2;
    int sum_do=0;
    for (int i=0; i<n-1; i++) {
        sum_do+=arr[i];
    }
    return (sum-sum_do);
}

int usingXOR(const vector <int> &arr) {
    // O(n+n) O(1) 
    int n=arr.size()+1;
    int result = 0;
    for (int i=1; i<=n; i++) {
        result ^= i;
    }
    for (int i=0; i<n-1; i++) {
        result ^= arr[i];
    }
    return result;
}

int main() {
    int n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cout<<BrutForce(arr)<<" \n";
    cout<<mostOptimized(arr)<<" \n";
    cout<<usingXOR(arr)<<" \n";
    return 0;
}