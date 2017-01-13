/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 3, 2017, 7:42 PM
  Purpose:  Calculate the average rainfall of three months the user inputs.
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
    string  month1,     //First month
            month2,
            month3;
    float   rainFl1,    //Amount of rainfall in inches for month 1
            rainFl2,
            rainFl3,
            avgRain;    //Average amount of rainfall in inches
    
    //Input values
    cout<<"This program calculates the average rainfall of 3 months."<<endl;
    cout<<"Please Input the three months you'd like to calculate, each"<<endl;
    cout<<"seperated by a space. For example: May June, July"<<endl;
    cin>>month1>>month2>>month3;
    cout<<endl;
    cout<<"Now please input the amount of rain (in inches) that fell"<<endl;
    cout<<"for each month, each also seperated by a space."<<endl;
    cin>>rainFl1>>rainFl2>>rainFl3;
    cout<<endl;
    
    //Process by mapping inputs to outputs
    avgRain=(rainFl1+rainFl2+rainFl3)/3;
    
    //Output values
    cout<<"The average amount of rainfall is: "<<avgRain<<" in"<<endl;

    //Exit stage right!
    return 0;
}