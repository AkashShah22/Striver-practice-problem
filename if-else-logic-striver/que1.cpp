//GRADING SYSTEM IN SCHOOL
//Given marks of a student, print on the screen:

//Grade A if marks >= 90
//Grade B if marks >= 70
//Grade C if marks >= 50
//Grade D if marks >= 35
//Fail, otherwise.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter your makrs: ";
    cin>>n;
    if(n>=90){
        cout<<"GRADE A";
    }
    else if(n>=70){
        cout<<"GRADE B";
    }
    else if(n>=50){
        cout<<"GRADE B";    
    }
    else if(n>=30){
        cout<<"GRADE D";
    }
    else{
        cout<<"FAIL";
    }
    return 0;
