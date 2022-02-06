//sum of all digits of an number n ...
//absolute difference of the sum of the odd and even digits of the number n ... 

/* 
Entre the number : 56564
The sum of all the digits of the number is 26. 
The absolute difference of the sum of odd and even digits of the number is 6.

Entre the number : 4323
The sum of all the digits of the number is 12. 
The absolute difference of the sum of odd and even digits of the number is 0.

Entre the number : 7667
The sum of all the digits of the number is 26. 
The absolute difference of the sum of odd and even digits of the number is 2.
*/ 

#include<iostream>
using namespace std; 

int main() {
    int n;
    cout<<"Entre the number : ";
    cin>>n;
    int sum=0,last_digit=0,sum_even=0,sum_odd=0,diff=0; 
    while(n>0) {
        last_digit=n%10;
        sum+=last_digit;
        if (!(last_digit&1)) {
            sum_even+=last_digit;
        } else {
            sum_odd+=last_digit;
        }
        n/=10;
    }
    if (sum_even>sum_odd) {
        diff=sum_even-sum_odd;
    } else {
        diff=sum_odd-sum_even;
    }
    cout<<"The sum of all the digits of the number is "<<sum<<". \n";
    cout<<"The absolute difference of the sum of odd and even digits of the number is "<<diff<<". \n";
    return 0;
}