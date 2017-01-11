/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 10, 2017, 10:54 PM
  Purpose:  Write a program that allows the user to input the following: 
            my name, address, city, state, ZIP code, phone number, 
            and college major
          **Extra problem to make up hour on 1/9/17**
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
    string name,
           address,
           city,
           state,
           zipCode,
           number,
           major;
    
    //Input Values
    cout<<"Please input your name"<<endl;
    getline(cin, name);
    cout<<endl;
    cout<<"Input your address"<<endl;
    getline(cin, address);
    cout<<endl;
    cout<<"Input your city"<<endl;
    getline(cin, city);
    cout<<endl;
    cout<<"Input your state"<<endl;
    getline(cin, state);
    cout<<endl;
    cout<<"Input your Zip code"<<endl;
    getline(cin, zipCode);
    cout<<endl;
    cout<<"Inut your number"<<endl;
    getline(cin, number);
    cout<<endl;
    cout<<"Input your college major"<<endl;
    getline(cin, major);
    cout<<endl;
            
    //Output values
    cout<<"My name is "<<name<<". I live on "<<address<<", "<<city<<", "<<state
            <<" "<<zipCode<<". My umber is "<<number<<" and my major is "<<major
            <<"."<<endl;

    //Exit stage right!
    return 0;
}