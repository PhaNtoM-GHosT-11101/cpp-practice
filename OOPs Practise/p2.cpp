/* 🧩 Problem:

Modify your Student class:

Add a constructor that takes:
name
age
When object is created, values must be set automatically

👉 In main():

Create object like this:
Student s1("Aditya Priyadarshi", 21);
Call display() */

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

    Student (string n,int a){
        name = n;
        age = a;

    }

};

int main(){
    Student s1("Aditya Priyadarshi",21);


    s1.display();
    return 0;
}