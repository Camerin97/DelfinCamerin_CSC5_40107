/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 12, 2017, 8:18 PM
  Purpose:  Calculate the minimum amount the user should buy for their property.
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    float rplcmnt,      //Replacement cost of a building in $
          insrnce=0.80, //Recommended insurance rate
          minInsr;      //Minimum insurance amount in $
    
    //Input values
    cout<<"This program will help calculate the minimum amount of"<<endl;
    cout<<"insurance you should put down to replace your structure."<<endl;
    cout<<"Please input the replacement cost to replace your structure"<<endl;
    cin>>rplcmnt;
    
    //Process by mapping inputs to outputs
    minInsr=rplcmnt*insrnce;
    
    //Output values
    cout<<"The minimum insurance you should put down is: $"<<setprecision(2)<<
            fixed<<minInsr<<endl;

    //Exit stage right!
    return 0;
}