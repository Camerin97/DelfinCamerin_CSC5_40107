/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 10, 2017, 10:16 PM
  Purpose:  Find the sum and average of 5 numbers
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
    float a=28,
          b=32,
          c=37,
          d=24,
          e=33,
          sum,
          average;
    
    //Process by mapping inputs to outputs
    sum=a+b+c+d+e;
    average=sum/5;
    
    //Output values
    cout<<"This program will calculate the sum and average"<<endl;
    cout<<"of the numbers 28, 32, 37, 24, and 33"<<endl<<endl;
    cout<<"Sum     = "<<sum<<endl;
    cout<<"Average = "<<average<<endl;

    //Exit stage right!
    return 0;
}