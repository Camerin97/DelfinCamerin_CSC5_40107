/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 1:12 PM
  Purpose:  Converts a number 1-10 entered from the user into its Roman Numeral
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int number; //Number from 1-10 entered
    
    //Input value
    cout<<"Please input a number from 1-10 and this program"<<endl;
    cout<<"will convert that number into a Roman Numeral."<<endl;
    cin>>number;
    
    //Output values
    switch(number){
        case 1: 
            cout<<"The Roman numeral: I"<<endl;break;
        case 2: 
            cout<<"The Roman Numeral: II"<<endl;break;
        case 3: 
            cout<<"The Roman Numeral: III"<<endl;break;
        case 4: 
            cout<<"The Roman Numeral: IV"<<endl;break;
        case 5: 
            cout<<"The Roman Numeral: V"<<endl;break;
        case 6: 
            cout<<"The Roman Numeral: VI"<<endl;break;
        case 7: 
            cout<<"The Roman Numeral: VII"<<endl;break;
        case 8: 
            cout<<"The Roman Numeral: VII"<<endl;break;
        case 9: 
            cout<<"The Roman Numeral: IX"<<endl;break;
        case 10: 
            cout<<"The Roman Numeral: X"<<endl;break;
        default: cout<<"Error: You need to enter a number from 1-10"<<endl;
    }

    //Exit stage right!
    return 0;
}