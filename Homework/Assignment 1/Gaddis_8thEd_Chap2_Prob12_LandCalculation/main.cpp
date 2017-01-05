/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on January 4, 2017, 12:46 PM
 * Purpose: Land Calculation
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants Only
//Like PI, e, Gravity, or conversions
const int CNVACFT=43560;//Conversion Acres to Feet

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int nAcres, nFt2;
    
    //Input Values
    cout<<"This os a conversion program "<<endl;
    cout<<"from number of Acres to Feet squared"<<endl;
    cout<<"Input number of Acres"<<endl;
    cin>>nAcres;
    
    //Process/Calculations
    nFt2=nAcres*CNVACFT;
    
    //Output Values
    cout<<"The number of Acres input = "<<nAcres<<endl;
    cout<<"Eqivalent to "<<nFt2<<"(ft^2)"<<endl;

    //Exit
    return 0;
}

