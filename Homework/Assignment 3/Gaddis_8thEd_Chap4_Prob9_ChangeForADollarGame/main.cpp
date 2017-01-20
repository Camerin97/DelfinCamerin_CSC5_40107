/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 8:18 PM
  Purpose:  Check to see if the user enters change which total value equals $1
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
    float pennies,  //Number of pennies entered
          nickles,  //number of nickles entered
          dimes,    //Number of dimes entered
          quarter,  //Number of quarters entered
          totVal;   //The total value of change entered by user in $
    
    //Input values
    cout<<"This program will check to see if the total"<<endl;
    cout<<"value of change you enter is equal to a dollar"<<endl;
    cout<<"Enter the number of quarters: ";
    cin>>quarter;
    cout<<"Enter the number of dimes: ";
    cin>>dimes;
    cout<<"Enter the number of nickles: ";
    cin>>nickles;
    cout<<"Enter the number of pennies: ";
    cin>>pennies;
    
    //Process by mapping inputs to outputs
    totVal=pennies*.01+nickles*.05+dimes*.10+quarter*.25;
    
    //Output values
    if(totVal==1.00){
        cout<<"Congratulations! You won the game!"<<endl;
    }
    else if(totVal>1.00){
        cout<<fixed<<setprecision(2);
        cout<<"Sorry, you went over $1."<<endl;
        cout<<"Your change added up to: $"<<totVal<<endl;
    }
    else if(totVal<1.00){
        cout<<fixed<<setprecision(2);
        cout<<"Sorry, you went under $1."<<endl;
        cout<<"Your change added up to: $"<<totVal<<endl;
    }

    //Exit stage right!
    return 0;
}