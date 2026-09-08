/*Write a program that takes a person’s age as input and 

prints their job eligibility status according to these rules:

If age is less than 18, print: not eligible for job

If age is between 18 and 54 (inclusive), print: eligible for job

If age is between 55 and 57 (inclusive), print: eligible for job, but retirement soon

If age is greater than 57, print: retirement*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int age;
    cout<<"enter your age: ";
    cin>>age;
    if(age<=18){
        cout<<"you are not eligible";
    }
    else if(age<=54){
        cout<<"You are eligible for job";
    }
    else if(age<=57){
        cout<<"eligible for job but retirement soon";
    }
    else{
        cout<<"Retirement";
    }
    return 0;
}