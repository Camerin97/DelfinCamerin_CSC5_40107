/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on January 5, 2017, 1:35 PM
 * Purpose: Calculate Pocket Change
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    const char quarter=25,//Number of cents in coinage
               dime=10,
               nickel=5,
               penny=1;
    char nQuarts,nDimes,nNickls,nPenies;  
    unsigned short total;//Total pocket change in cents
    
    //Input Values
    cout<<"This calculates the amount of your pocket change"<<endl;
    cout<<"How many Quarters, Nickels, Dimes, and Pennies do"<<endl;
    cout<<"you have in your pocket>"<<endl;
    cout<<"Type in all on the same line i.e. 3 4 0 2"<<endl;
    cout<<"Maximum of any value must be less than 10"<<endl;
    cin>>nQuarts>>nDimes>>nNickls>>nPenies;
    
    //Process by mapping inputs to outputs
    total=  (nQuarts-48)*quarter +
            (nDimes-48)*dime     +
            (nNickls-48)*nickel  +
            (nPenies-48)*penny;
    
    //Output Values
    cout<<"The coins in your pocket =  "<<total<<" cents"<<endl;
    cout<<"The coins in your pocket = $"<<total/100.0f<<endl;

    //Exit
    return 0;
}
