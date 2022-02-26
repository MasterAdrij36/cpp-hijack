#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	bool flag=1;
	cin>>n;
	for (int i=2; i<=sqrt(n); i++) {
		if (n%i==0) {
			flag=0;
			cout<<"Since, "<<i<<" X "<<n/i<<" = "<<n<<"\n";
			break;
		}
	}
	if (flag==1) {
		cout<<"Prime !!!"<<"\n";
	} else {
		cout<<"Not Prime !!!"<<"n";
	}
	return 0;
}
