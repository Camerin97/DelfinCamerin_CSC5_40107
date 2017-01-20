/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 8:47 PM
  Purpose:  Determine the number of minutes, hours, or days there are in
            the number of seconds the user inputs.
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
const int SECNMIN=60,    //Seconds in a minute
          SECINHR=3600,  //Seconds in an hour
          SECINDY=86400; //Seconds in a day

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float seconds,  //Number of seconds the user inputs
          minutes,  //Number of minutes from the entered seconds
          hours,    //Number of hours  from entered seconds
          days;     //Number of days from entered seconds
    
    //Input values
    cout<<"This program will tell you the number of minutes, hours,"<<endl;
    cout<<"or days there are based on the number of seconds you enter."<<endl;
    cout<<"Please enter the number of seconds:"<<endl;
    cin>>seconds;
    
    //Process by mapping inputs to outputs
    minutes=seconds/SECNMIN; //Determines number of min. from sec. entered
    hours=seconds/SECINHR;   //Determines number of hrs. from sec. entered
    days=seconds/SECINDY;    //Determines number of days from sec. entered
    
    //Output values
    cout<<setprecision(2)<<fixed;
    if(seconds>=60){
        cout<<"The number of minutes: "<<minutes<<endl;
    }
    else if(seconds>=3600){
        cout<<"The number of hours: "<<hours<<endl;
    }
    else if(seconds>=86400){
        cout<<"The number of days: "<<days<<endl;
    }
    else if(seconds<0){
        cout<<"The number of seconds cannot be negative, please try again."<<endl;
    }
    else{
        cout<<"There is not enough seconds to calculate minutes, hours, or days"
                <<endl;
    }
    

    //Exit stage right!
    return 0;
}