/*
1. **The Greeter (Basic I/O & Variables)**
   - **Task:** Write a program that asks the user for their name and their birth year. 
   - **Output:** Print a greeting and calculate their approximate age (assuming the current year).
   - **Example:** "Hello Alex, you are 22 years old."
*/

#include <iostream>
using namespace std;

int main(){
    string name;
    int year;
    const int cyear = 2026;
    int age;

    cout <<"Name:   ";
    cin>>name;
    cout<<endl<<"Year Of Birth: ";
    cin>>year;

    age = cyear - year;

    cout<<endl<<"My name is "<< name<<"and i am "<<age<<"old"<<endl;
    


}