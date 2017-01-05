/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on January 5, 2017, 12:12 PM
 * Purpose: Output big C
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only
//Like PI, e, Gravity, or conversions

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char c;//Variable to build the big C with
    
    //Input Values
    cout<<"This program outputs a large C"<<endl;
    cout<<"With a letter the user chooses"<<endl;
    cout<<"What letter would you like?"<<endl;
    cin>>c;
    
    //Process by mapping inputs to outputs
    
    //Output Values
    cout<<endl<<"A big C with the letter "<<c<<endl<<endl;
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<" "<<c<<endl;
    cout<<"  "<<c<<"       "<<c<<endl;
    cout<<"    "<<c<<" "<<c<<" "<<c<<endl;

    //Exit
    return 0;
}

