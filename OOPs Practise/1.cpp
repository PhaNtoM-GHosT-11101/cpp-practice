#include <iostream>
#include <string> // It's good practice to include string explicitly
using namespace std;

class Student {
public: // 1. Make members public so they can be accessed
    string Name;
    int age;
    long long phoneNumber; // 2. Use long long for large numbers

    // Constructor
    Student(string name, int a, long long p) {
        Name = name;
        age = a;
        phoneNumber = p;
    }
}; // 3. Added the missing semicolon

int main() {
    // 4. Now we can create the object successfully
    Student s1("Aditya", 21, 9122738188LL); 
    
    cout << "Phone Number: " << s1.phoneNumber << endl;

    return 0;
}