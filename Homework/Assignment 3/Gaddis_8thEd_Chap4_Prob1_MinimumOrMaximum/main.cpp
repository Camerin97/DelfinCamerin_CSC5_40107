/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 11:37 PM
  Purpose:  Determine which number is larger
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
    int number1,    //first number user inputs
        number2;    //Second number user inputs
    
    //Input values
    cout<<"Please enter two number and this program"<<endl;
    cout<<"will tell you which number is larger."<<endl;
    cin>>number1>>number2;
    
    //Process by mapping inputs to outputs
    
    //Output values
    if(number1>number2){
        cout<<number1<<" is bigger than "<<number2<<"."<<endl;
    }
    else if(number2>number1){
        cout<<number2<<" is bigger than "<<number1<<"."<<endl;
    }

    //Exit stage right!
    return 0;
}