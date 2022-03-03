#include<iostrem>
#include<vector>
uisng namespace std;

int main() {
	int n;
	cin>>n;
	vector<inr> arr(n);
	for (int i=0; i<n; i++) {
		cin>>arr[i];
	}
	int i=0;
	int j=n-1;
	while (i<j) {
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	for (int i=0; i<n; i++) {
		cout<<arr[i];
	}
	cout<<"\n";
	return 0;
}
