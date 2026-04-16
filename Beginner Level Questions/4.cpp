/* 4. **Count to N (For Loops)**
   - **Task:** Ask the user for a positive integer `N`. 
   - **Output:** Use a `for` loop to print all numbers from 1 up to `N` on a single line, separated by spaces.
 */
#include <iostream>
using namespace std;

int main(){
    int N;
    cout <<"Enter n: ";
    cin>> N;

    while (N<0){
        cout <<"Enter n: ";
    cin>> N;
    }

    for (int i =1 ; i<=N;i++){
        cout <<i<<" ";
    }
    return 0;
}