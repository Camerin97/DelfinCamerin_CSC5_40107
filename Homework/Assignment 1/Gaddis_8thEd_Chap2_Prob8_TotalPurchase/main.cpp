/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 10, 2017, 10:30 PM
  Purpose:  Calculate the subtotal, sales tax, and total of a five item purchase
 * Price of item 1 = $15.95 Price of item 2 = $24.95 Price of item 3 = $6.95 Price of item 4 = $12.95 Price of item 5 = $3.95
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
    float item1=15.95,  //Price in $
          item2=24.95,
          item3= 6.95,
          item4=12.95,
          item5= 3.95,
          tax  = 0.07,  //Tax in %
          subTot,       //Subtotal in $
          saleTax,      //Total sales tax in $
          total;        //Total amount of  purchase in $
    
    //Process by mapping inputs to outputs
    subTot=item1+item2+item3+item4+item5;
    saleTax=subTot*tax;
    total=subTot+saleTax;
    
    //Output values
    cout<<"This program will calculate the subtotal,"<<endl;
    cout<<"sales tax, and total of a five item purchase"<<endl<<endl;
    cout<<"Item 1    = $"<<item1<<endl;
    cout<<"Item 2    = $"<<item2<<endl;
    cout<<"Item 3    = $ "<<item3<<endl;
    cout<<"Item 4    = $"<<item4<<endl;
    cout<<"Item 5    = $ "<<item5<<endl<<endl;
    cout<<"subtotal  = $"<<subTot<<endl;
    cout<<fixed<<setprecision(2);
    cout<<"Sales Tax = $"<<saleTax<<endl;
    cout<<"Total     = $"<<total<<endl;

    //Exit stage right!
    return 0;
}