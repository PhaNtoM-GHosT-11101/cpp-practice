/*
1. The Collatz Sequence
- The Task: Write a program that takes a positive integer 'n' as a command-line input. If 'n' is even, divide it by 2. If 'n' is odd, multiply it by 3 and add 1. Repeat this process, printing each number, until 'n' becomes 1.
- The Goal: Master 'while' loops, modulo arithmetic, and handling 'argv[1]' to take inputs directly from the execution command instead of relying on interactive 'cin' prompts.
*/

#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter n: " << endl;
    cin >> n;
    while (n!=1){
        cout << n << " ";
        if (n%2==0){
            n=n/2;
        }
        else{
            n=(3*n+1);
        }

    }
    cout<<n;
    return 0;
}

