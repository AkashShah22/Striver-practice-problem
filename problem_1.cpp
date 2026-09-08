//write a program that takes an input of age
//and print if you are adult or not 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"ente ryour age:";
    cin>>n;
    if(n>=18){
        cout<<"you are an adult";
    }
    else{
        cout<<"you are not an adult";
    }
    return 0;
}