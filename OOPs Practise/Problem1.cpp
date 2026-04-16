/* 🧩 Problem:

Create a class called Student with:

Data members:
name (string)
age (int)

A function display() that prints:

Name: <name>
Age: <age>

👉 In main():

Create one object
Assign values
Call the function */

#include <iostream>
#include <string>
using namespace std;

class Student{
    public:
        string name;
        int age;

    void display(){
        cout<<"Name: "<< name <<endl<< "age: "<< age<<endl;
    }

};

int main(){
    Student s1;
    s1.name = "Aditya Priyadarshi";
    s1.age = 21;

    s1.display();
    return 0;
}