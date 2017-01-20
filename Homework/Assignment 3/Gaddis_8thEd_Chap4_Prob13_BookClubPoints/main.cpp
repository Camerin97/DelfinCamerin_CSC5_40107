/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 11:25 PM
  Purpose:  Calculate the number of points a book club customer is awarded
            based on the number of books they purchased.
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
    int books,  //Number of books user bought this month
        points; //Amount of points awarded
    
    //Input values
    cout<<"Please enter the number of books you purchased this month"<<endl;
    cin>>books;
    
    //Output values
    if(books==0){
        points=0;
        cout<<"You earned: "<<points<<" points"<<endl;
    }
    else if(books==1){
        points=5;
        cout<<"You earned: "<<points<<" points"<<endl;
    }
    else if(books==2){
        points=15;
        cout<<"You earned: "<<points<<" points"<<endl;
    }
    else if(books==3){
        points=30;
        cout<<"You earned: "<<points<<" points"<<endl;
    }
    else if(books>=4){
        points=60;
        cout<<"You earned: "<<points<<" points"<<endl;
    }
    else{
        cout<<"You cannot enter a negative number. Try again"<<endl;
    }

    //Exit stage right!
    return 0;
}