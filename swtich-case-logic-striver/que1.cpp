// Q: Write a program in C++
// Take a day number (1–7) as input
// Print the corresponding day of the week
// For example: 
// Input: 1 → Output: Monday
// Input: 2 → Output: Tuesday
// … up to 7 → Sunday
#include<bits/stdc++.h>
using namespace std;
int main(){
    int day;
    cout<<"enter the day: ";
    cin>>day;
    switch(day){
        case 1:
        cout<<"monday";break;
        case 2:
        cout<<"Tuesday";break;
        case 3:
        cout<<"Wednesday";break;
        case 4:
        cout<<"Thrusday";break;
        case 5:
        cout<<"Friday";break;
        case 6:
        cout<<"Saturday";break;
        case 7:
        cout<<"Sunday";
        default:
        cout<<"invalid";
    }
    return 0;
}