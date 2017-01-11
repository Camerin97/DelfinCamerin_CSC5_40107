/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 10, 2017, 9:45 PM
  Purpose:  Calculate the meal cost, tax, tip, and total amount of a
            resturant bill
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
    float meal= 88.67,   //Total amount of the meal in $
          tip = 0.2,     //Tip in %
          tax = 0.0675,  //Tax in %
          taxTot,        //The tax total in $
          mealTot,       //The meal total with tax in $
          tipTot,        //The tip total in $
          total;         //Total Bill
    
    //Process by mapping inputs to outputs
    taxTot=meal*tax;
    mealTot=taxTot+meal;
    tipTot=mealTot*tip;
    total=mealTot+tipTot;
    
    //Output values
    cout<<"This Program will calculate your resturant bill:"<<endl<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Your meal cost       $"<<meal<<endl;
    cout<<"Tax                  $"<<taxTot<<endl;
    cout<<"Your meal with tax   $"<<mealTot<<endl;
    cout<<"Tip                  $"<<tipTot<<endl;
    cout<<"Total                $"<<total<<endl;

    //Exit stage right!
    return 0;
}