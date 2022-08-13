#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp (string num1, string num2) {
    if (num1.length()==num2.length()){
        return num1<num2;
    }
    return num1.length()<num2.length();
}

vector<string> arrangeAscending(vector<string> arr) {
    sort(arr.begin(),arr.end(), cmp);
    return arr;
}

int main() {
    int n;
    cin>>n;
    vector<string> arr(n);
    for (int i=0; i<n; i++) {
        cin>>arr[i];
    }
    arr=arrangeAscending(arr);
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}