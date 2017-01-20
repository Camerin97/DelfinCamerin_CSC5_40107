/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 8:45 PM
  Purpose:  Ask for the number of computer units sold and calculate the 
            total cost of the purchase, applying a discount if qualified.
 */ 

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int   units;  //The number of units user wants to purchase
    float discnt, //Discount purchase qualifies for
          total;  //Total cost of purchase

    //Input values
    cout<<"_____________________________"<<endl;
    cout<<"      Software Sales         "<<endl;
    cout<<"_____________________________"<<endl;
    
    cout<<"Number of units sold: "<<endl;
    cin>>units;
    
    //Process values -> Map inputs to Outputs
    
    
    //Display Output
    cout<<setprecision(2)<<fixed;
    if (units>0 && units<10){
        total=units*99;
        cout<<"The total is: $"<<total<<endl;
    }
    else if(units >= 10 && units <= 19)
        {
            discnt = (units * 99) * 0.20;
            total = (units * 99) - discnt;
            cout << "The total is: $" << total <<endl;
        }
    else if(units >= 20 && units <=49)
        {
            discnt = (units * 99) * 0.30;
            total = (units * 99) - discnt;
            cout << "The total is: $" << total <<endl;
        }
    else if(units >= 50 && units <= 99)
        {
            discnt = (units * 99) * 0.40;
            total = (units * 99) - discnt;
            cout<<"The total is: $"<<total<<endl;
        }
    else if(units >= 100)
        {
            discnt = (units * 99) * 0.50;
            total = (units * 99) - discnt;
            cout << "The total is: $" << total <<endl;
        }
    else{
        cout << "The number of units has to be greater than 0!!"<<endl;
        }

    //Exit Program
    return 0;
}