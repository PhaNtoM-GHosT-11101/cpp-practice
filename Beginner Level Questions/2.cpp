/*

2. **Safe Calculator (Arithmetic & Conditionals)**
   - **Task:** Ask the user to input two integers. Print their sum, difference, product, and quotient.
   - **The Catch:** Use an `if` statement to check if the second number is `0` before dividing. If it is `0`, print an error message instead of crashing.
   */

#include <iostream>
using namespace std;

int main(){
    int num1, num2, sum, diff, product;
    float div;
    cout<<"num1: ";
    cin>>num1;
    cout<<"num2: ";
    cin>>num2;

    sum = num1+num2;
    cout <<sum <<endl;

    diff = num1-num2;
    cout<<diff<<endl;
    
    product = num1*num2;
    cout<<product<<endl;

    if (num2==0){
        cout<<"Cant be divided by 0"; 
    }
    else{
    div = num1/num2;
    cout<<div<<endl;
    }
    


    return 0;
}