/* 3. **Temperature Check (If/Else If Logic)**
   - **Task:** Ask the user to input a temperature in Celsius.
   - **Logic:** If it's below 0, print "Freezing". If it's between 0 and 30, print "Normal". If it's above 30, print "Hot". */

#include <iostream>
using namespace std;

int main(){
    float temp;
    cout <<"Temp : ";
    cin >> temp;
    if (temp<0){
        cout<<"Freezing"<<endl;
    }
    else if (temp>=0 && temp <=30){
        cout <<"Normal"<<endl;
    }
    else{
        cout <<"Hot"<<endl;
    }
    return 0;
}