#include<iostream>
#include<vector>
#include<utility>
using namespace std; 

pair<int,int> findMatrix(vector<vector<int> > arr,int k){
    int m=arr.size();
    int n=arr[0].size();
    pair<int,int> temp;
    temp.first=-1;
    temp.second=-1;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            if (arr[i][j]==k) {
                temp.first=i;
                temp.second=j;
                return temp;
            }
        }
    }
    return temp;
}

int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int> > arr(m,vector<int> (n));
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) {
            cin>>arr[i][j];
        }
    }
    int k;
    cin>>k;
    pair<int,int> index=findMatrix(arr,k);
    cout<<"The index of k is "<<index.first<<" "<<index.second<<". \n";
    return 0;
}