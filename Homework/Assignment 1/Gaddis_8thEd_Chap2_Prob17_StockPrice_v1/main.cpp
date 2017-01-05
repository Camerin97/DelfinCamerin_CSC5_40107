/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on January 4, 2017, 12:09 PM
 * Purpose:  Homework Problem Stock Calculations
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries

//Global Constants Only
//Like PI, e, Gravity, or conversions from system units to another
const unsigned char PERCENT=100;

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    unsigned char stkPrce=35;   //Units of $'s/Share
    unsigned short nShares=750; //Number of Shares
    unsigned char comishn=2;    //Percent Commission
    unsigned short stkPaid, comPaid, totPaid;
    
    //Process by mapping inputs to outputs
    stkPaid=stkPrce*nShares;            //Amount paid for the stock purchase
    comPaid=stkPaid*comishn/PERCENT;    //Commission on stock purchase
    totPaid=stkPaid+comPaid;            //Total Paid $'s
    
    //Output Values
    cout<<"Stock Price/Share= $   "<<static_cast<int>(stkPrce)<<"/Share"<<endl;
    cout<<"Number of Shares =    "<<nShares<<" shares"<<endl;
    cout<<"Commission              "<<static_cast<int>(comishn)<<"%"<<endl;
    cout<<"Stock Price Paid = $"<<stkPaid<<endl;
    cout<<"Commission Paid  = $  "<<comPaid<<endl;
    cout<<"Total Paid       = $"<<totPaid<<endl;
    
    //Exit
    return 0;
}

