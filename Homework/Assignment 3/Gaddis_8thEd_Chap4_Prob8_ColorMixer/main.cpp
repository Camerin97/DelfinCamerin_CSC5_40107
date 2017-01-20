/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 1:47 PM
  Purpose:  Display the secondary color of two colors that the user inputs
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
    string color1, //Primary color the user inputs
           color2;
    
    //Input values
    cout<<"Please enter a color that is either red, blue, or yellow"<<endl;
    cin>>color1;
    cout<<"Now please enter another color from the list, and"<<endl;
    cout<<"this program will display the secondary color when"<<endl;
    cout<<"those two colors are mixed together."<<endl;
    cin>>color2;
    cout<<endl;
    
    //Output values
    if(color1=="red" && color2=="blue"){
        cout<<"Those two colors make: Purple"<<endl;
    }
            else if(color1=="blue" && color2=="red"){
                cout<<"Those two colors make: Purple"<<endl;
            }
    else if(color1=="red" && color2=="yellow"){
        cout<<"Those two colors make: Orange"<<endl;
    }
            else if(color1=="yellow" && color2=="red"){
                cout<<"Those two colors make: Orange"<<endl;
            }
    else if(color1=="blue" && color2=="yellow"){
        cout<<"Those two colors make: Green"<<endl;
    }
    else if(color1=="yellow" && color2=="blue"){
                cout<<"Those two colors make: Green"<<endl;
            }
    else{
        cout<<"You can only choose from the 3 colors, please try again."<<endl;
    }

    //Exit stage right!
    return 0;
}