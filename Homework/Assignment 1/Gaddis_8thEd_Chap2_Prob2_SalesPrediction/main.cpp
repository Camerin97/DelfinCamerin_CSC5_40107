/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 10, 2017, 9:21 PM
  Purpose: Predict the sales of The East coast division
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
    float ECperc  = 0.58;    //Percentage the East Coast division generates from total sales
    int   totSale = 8600000, //Total Sales of the company in $
          ECsales;           //Amount in $ the East Coast division generates
    
    //Process by mapping inputs to outputs
    ECsales=ECperc*totSale;
    
    //Output values
    cout<<"The Companies Annual Sales:  $"<<totSale<<endl;
    cout<<"The East Coast Annual Sales: $"<<ECsales<<endl;

    //Exit stage right!
    return 0;
}