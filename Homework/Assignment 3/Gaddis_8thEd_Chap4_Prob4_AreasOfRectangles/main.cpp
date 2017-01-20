/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 11:42 PM
  Purpose:  Calculate which rectangle between two has a greater area.
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
    float length1,  //Length of rectangle 1 in inches
          length2,  //Length of rectangle 2 in inches
          width1,   //Width of rectangle 1 in inches
          width2,   //Width of rectangle 2 in inches
          area1,    //Area of rectangle 1 in inches^2
          area2;    //Area of rectangle 2 in inches^2
    
    //Input values
    //Length and Width of Rectangle 1
    cout<<"Please enter the length of rectangle 1:";
    cin>>length1;
    if(length1<=0){
        cout<<"Please enter a number that is greater than zero!"<<endl;
    }
    cout<<"Please enter the width of rectangle 1:";
    cin>>width1;
    if(width1<=0){
        cout<<"Please enter a number that is greater than zero!"<<endl;
    }
    
    //Length and Width of Rectangle 2
    cout<<"Please enter the length of rectangle 2:";
    cin>>length2;
    if(length2<=0){
        cout<<"Please enter a number that is greater than zero!"<<endl;
    }
    cout<<"Please enter the width of rectangle 2:";
    cin>>width2;
    if(width2<=0){
        cout<<"Please enter a number that is greater than zero!"<<endl;
    }
    cout<<endl;
    
    //Process by mapping inputs to outputs
    area1=length1*width1;
    area2=length2*width2;
    
    //Output values
    if(area1>area2){
        cout<<"Area 1 ("<<area1<<") is greater than Area 2 ("<<area2<<")."<<endl;
    }
    else if(area1<area2){
        cout<<"Area 2 ("<<area2<<") is greater than Area 1 ("<<area1<<")."<<endl;
    }

    //Exit stage right!
    return 0;
}