/* Challenge 3: Animal Kingdom (Inheritance)
Create a base class Animal and a derived class Dog.

Base Class (Animal): Should have a function eat() that prints "Eating...".

Derived Class (Dog): Should inherit from Animal and have its own function bark() that prints "Woof!".

Task: In main(), create a Dog object and make it both eat() and bark(). */

#include <iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout<<"Eating...."<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "Woof!";
    }
};

int main(){
    Dog myDog;
    myDog.eat();
    myDog.bark();
    return 0;
}