#include<iostream>
using namespace std;

int main() {
	int a,b;
	char  op;
	cout<<"Entre the first number : ";
	cin>>a;
	cout<<"Enter the operator : ";
	cin>>op;
	cout<<"Enter the second number : ";
	cin>>b;
	if (op=='+') {
		cout<<"The sum of "<<a<<" and "<<b<<" is "<<a+b<<".\n";
	} else if (op=='-') {
		cout<<"The difference between "<<a<<" and "<<b<<" is "<<a-b<<".\n";
	} else if (op=='*') {
		cout<<"The quotient of "<<a<<" and "<<b<<" is "<<a*b<<".\n";
	} else if (op=='/') {
		if (b==0) {
			cout<<"The operation cannot be performed.\n";
		} else {
			cout<<"The quotient of "<<a<<" by "<<b<<a/b<<".\n";
	}
	} else {
		cout<<"The operation cannot be performed.\n";
	}
	return 0;
}
