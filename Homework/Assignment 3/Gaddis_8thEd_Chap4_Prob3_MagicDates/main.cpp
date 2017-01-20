/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 1:33 PM
  Purpose:  Determine if the numeric month*day=year of the date the user inputs.
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
    int day,       
        year,   //Year in two digits
        month,
        dayTMth; //Day*month
    
    //Input values
    cout<<"This program will determine if a date enter is a"<<endl;
    cout<<"'magic date'. Please enter a month in numeric form"<<endl;
    cin>>month;
    cout<<"Please enter a day in numeric form"<<endl;
    cin>>day;
    cout<<"Please enter a two-digit year"<<endl;
    cin>>year;
    
    //Process by mapping inputs to outputs
    dayTMth=day*month;
    
    //Output values
    if(dayTMth==year){
        cout<<"This date is magic!"<<endl;
    }
    else{
        cout<<"This date is not magic"<<endl;
    }

    //Exit stage right!
    return 0;
}