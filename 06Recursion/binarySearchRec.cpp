// assuming the array is sorted ... 

#include<iostream>
#include<vector>
using namespace std;

int binarySearchRec(vector<int> arr,int value,int beg,int end) {
    if (beg>end) return -1;
    int mid=(beg+end)/2;
    if (arr[mid]==value) return mid;
    else if (arr[mid]<value) {
        return binarySearchRec(arr,value,mid+1,end);
    } else {
        return binarySearchRec(arr,value,beg,mid-1);
    }
}

int main() {
    int n, value;
    cin>>n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    cin>>value;
    cout<<binarySearchRec(arr,value,0,n-1)<<"\n";
    return 0;
}