/* 5. **First and Last (Basic Arrays)**
   - **Task:** Create an array of 5 integers. Ask the user to input 5 numbers to fill the array. 
   - **Output:** Print only the very first number and the very last number in the array. */

   
#include <iostream>
using namespace std;

int main(){
   int arr[5];
   int k;
   for (int i=1 ; i<=5;i++){
      cout <<"Enter element "<<i<<" ";
      cin >>k;
      arr[i-1]=k;
   }

   cout << "1st element : "<<arr[0]<<" and last element "<<arr[4]<<endl;



   return 0;
}