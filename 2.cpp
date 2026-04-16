/*
2. Simple Moving Average (Sliding Window)
- The Task: Hardcode an array of floats representing simulated price data. Write a function that takes this array and an integer 'k' (the window size) and prints the moving average for every window of size 'k'.
- The Goal: Understand array traversal, boundary conditions (preventing segmentation faults by reading out of bounds), and algorithm efficiency.
*/

#include <iostream>
using namespace std;

int main(){
    int k ;
    int prices[]= {1,2,3,4,5,6,7,8,9,10};
    int r= sizeof(prices)/sizeof(prices[0]);
    for (int i=1;i<=r;i++){
        cout << prices[i] << " ";

        
    }


    return 0;
}