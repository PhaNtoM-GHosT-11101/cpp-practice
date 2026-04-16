/* Challenge 2: The "Bank" Account (Encapsulation)
Create a class named BankAccount.

Data Members: Make balance (double) a private member.

Requirements: * Create a public function deposit(double amount) to add money.

Create a public function getBalance() to return the current balance.

Task: In main(), try to change the balance directly (to see it fail), then use the functions to add $100 and print the final balance. */

#include <iostream>
using namespace std;

int main(){
    class BankAccount{
    private:
        double balance=1000;

    public: 
        void deposit(int amount){
            balance+=amount;
        
        };

        void getBalance(){
            cout << "Total Balance : "<<balance;
        };
    };

    int amount = 100;
    BankAccount b1;
    b1.deposit(amount);
    b1.getBalance();



    return 0;
}