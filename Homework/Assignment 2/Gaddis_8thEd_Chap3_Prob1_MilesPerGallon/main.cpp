/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 12, 2017, 9:41 PM
  Purpose:  Calculate the miles per gallon of a car.
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
    float miles,    //Miles driven on full tank of gas
          gallGas,  //Total gallons the car can hold
          mpg;   //Miles per gallon of car
    
    //Input values
    cout<<"Enter the gallons of gas your car can hold"<<endl;
    cin>>gallGas;
    cout<<"Enter the number of miles it can be driven on a full tank"<<endl;
    cin>>miles;
    
    //Process by mapping inputs to outputs
    mpg=miles/gallGas;
    
    //Output values
    cout<<"The number of miles per gallon of gas: "<<mpg<<" mi"<<endl;

    //Exit stage right!
    return 0;
}