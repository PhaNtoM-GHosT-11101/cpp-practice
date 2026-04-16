/* Challenge 1: The "Book" Class (Basics & Constructors)
Create a class named Book.

Data Members: title (string), author (string), and price (double).

Requirements: * Create a parameterized constructor to initialize these values.

Create a member function called displayDetails() that prints the book's info.

Task: In main(), create an object of Book and call the display function. */


#include <iostream>
#include <string>
using namespace std;

int main(){
    class Book{
    public:
        string title;
        string author;
        double price;

        Book(string a, string b, double c){
            title=a;
            author=b;
            price=c;
        };  

        void displayDetails(){
        cout<<"Title : "<<title<<endl<<"Author:  "<<author<<endl<<"Price: "<<price;
            

        };

        
    };

    Book b1("Wizard of OZ","IDK",400);
    

    b1.displayDetails();
    


    return 0;
}