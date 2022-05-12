#include<iostream>
#include<vector>
using namespace std;

int main() {
	int m, n;
	cin>>m>>n;
	vector<vector<int> > arr (m, vector<int> (n));
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			cin>>arr[i][j];
		}
	}
	int countOdd=0, countEven=0;
	for (int i=0; i<m; i++) {
		for (int j=0; j<n; j++) {
			if ((arr[i][j]) & 1) countOdd++;
			else countEven++;
		}
	}
	cout<<"No. of odd integers are : "<<countOdd<<"\n";
	cout<<"No. of even integers are : "<<countEven<<"\n";
	cout<<"\n";
	return 0;
}
