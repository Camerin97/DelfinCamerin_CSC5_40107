/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 11, 2017, 12:57 PM
  Purpose:  Calculate the percentage of males and females in a class
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
const unsigned char PERCENT=100; //Percent conversion

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    float males,      //# of males
         females,    //# of females
         totStud,    //Total # of students
         perMale,    //Percentage of males
         perFem;     //Percentage of females
    
            
    //Input values
    cout<<"Please input the total number of females in your class:"<<endl;
    cin>>females;
    cout<<"Please input the number of males in your class:"<<endl;
    cin>>males;
    
    //Process by mapping inputs to outputs
    totStud=males+females;
    perMale=males/totStud*PERCENT;
    perFem=females/totStud*PERCENT;
    
    //Output values
    cout<<"There are a total of "<<totStud<<" students in your class."<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Of those students, "<<perFem<<"% are female,"<<endl;
    cout<<"and "<<perMale<<"% are male."<<endl;

    //Exit stage right!
    return 0;
}
