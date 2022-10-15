#include<iostream>
#include<algorithm>
using namespace std; 

string longNumSum(string num1, string num2) {
    reverse(num1.begin(),num1.end());
    reverse(num2.begin(),num2.end());
    int i=0, carry=0;
    while (i<num1.length() && i<num2.length()) {
        int sum=(num1[i]-'0')+(num2[i]-'0')+carry;
        carry=sum/10;
        result+=char(sum%10+'0');
        i++;
    }
    while (i<num1.legth()) {
        int sum=(num1[i]-'0')+carry;
        carry=sum/10;
        result+=char(sum%10+'0');
        i++;
    }
    while(i<num2.legth()) {
        int sum=(num2[i]-'0')+carry;
        carry=sum/10;
        result+=char(sum%10+'0');
        i++;
    }
    if (carry==1) result+="1";
    reverse (result.begin(),result.end());
    return result;
}

int min() {
    string num1, num2;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the second number : ";
    cin>>num2;
    cout<<"The sum of the numbers is : "<<longNumSum(num1,num2)<<". \n";
    return 0;
}