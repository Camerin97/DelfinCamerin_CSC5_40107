/* 
  File:   main.cpp
  Author: camerin Delfin
  Created on January 12, 2017, 10:00 PM
  Purpose:  Calculate how many calories were consumed.
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
    float totCook=40,  //Total # of cookies in the bag
          serving=10,  //Serving size
          perServ,     //Number of cookies per serving
          cookEat,     //Cookies eaten
          calPSer=300; //Calories per serving
    float serEatn,     //Servings eaten
          calEatn;     //Calories eaten
    
    //Input values
    cout<<"Please enter the number of cookies eaten"<<endl;
    cin>>cookEat;
    
    //Process by mapping inputs to outputs
    perServ=totCook/serving;
    serEatn=cookEat/serving;
    calEatn=serEatn*calPSer;
    
    //Output values
    cout<<"You just ate: "<<calEatn<<" calories."<<endl;

    //Exit stage right!
    return 0;
}