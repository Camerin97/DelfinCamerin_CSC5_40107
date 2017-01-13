/* 
  File:   main.cpp
  Author: Caamerin Delfin
  Created on January 12, 2017, 8:45 PM
  Purpose:  Calculate the monthly and annual costs of the users automobile
            expenses. 
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
    float   mthLoan, //Monthly Loan payment in $
            mthInsr, //Monthly insurance in $
            mnthGas, //Monthly gas expenses in $
            mnthOil, //Monthly oil change in $
            mthTire, //Monthly tire expenses in $
            mthMtnc, //Monthly maintenance in $
            mnthTot, //Total monthly cost in $
            annTot;  //Annual costs in $
    
    //Input values
    cout<<"This program will calculate your monthly and annual car expenses"<<endl;
    cout<<"Please enter your monthly loan payments:"<<endl;
    cin>>mthLoan;
    cout<<"Enter you monthly insurance payments:"<<endl;
    cin>>mthInsr;
    cout<<"Enter your monthly gas expenses:"<<endl;
    cin>>mnthGas;
    cout<<"Enter your monthly oil expenses:"<<endl;
    cin>>mnthOil;
    cout<<"Enter your monthly tire expenses:"<<endl;
    cin>>mthTire;
    cout<<"Enter the cost of mmonthly maintenance:"<<endl;
    cin>>mthMtnc;
    
    //Process by mapping inputs to outputs
    mnthTot=mthLoan+mthInsr+mnthGas+mnthOil+mthTire+mthMtnc;
    annTot=mthLoan*12+mthInsr*12+mnthGas*12+mnthOil*12+mthTire*12+mthMtnc*12;
    
    //Output values
    cout<<"Your monthly car expenses is: $"<<setprecision(2)<<fixed<<mnthTot<<endl;
    cout<<"Your annual car expenses is: $"<<annTot<<endl;

    //Exit stage right!
    return 0;
}