/* 🧩 Problem:

Modify your class:

Rules:
Make name and age private
Add:
setName(string n)
setAge(int a)
getName()
getAge()
Constraint:
Age cannot be negative
→ If invalid, print: "Invalid age"
👉 In main():
Create object using constructor
Try setting:
s1.setAge(-10);   // should trigger validation
Print using getters */
#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
        string name;
        int age;

    
    public:
        Student (string n,int a){
            name = n;
            age = a;

        }
        
        void setname(string a){
            name = a;
        }

        void setage(int k){
            if (k>0){age = k;}
            else {cout<<"Envalid "<<endl;}
        }

        string getname(){
            return name;
        }

        int getage(){
            return age;
        }

};

int main(){
    Student s1("Aditya Priyadarshi",-21);
    

    cout << "Name: " << s1.getname() << endl;
    cout << "Age: " << s1.getage() << endl;


    
    return 0;
}