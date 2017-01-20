/* 
  File:   main.cpp
  Author: Camerin Delfin
  Created on January 19, 2017, 10:44 PM
  Purpose:  Determine who came in first, second, and third place between three
            racers.
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
    string runner1, //Name of first runner
           runner2, //Name of second runner
           runner3; //Name of third runner
    float  time1,   //Time of runner 1 in min.
           time2,   //Time of runner 2 in min.
           time3;   //Time of runner 3 in min.
    
    //Input values
    //Name and time of runner 1
    cout<<"What is the name of runner 1?"<<endl;
    cin>>runner1;
    cout<<"Enter the time in minutes in which "<<runner1<<" finished the race."<<endl;
    cin>>time1;
    if(time1<=0){
        cout<<"Please enter a number greater than zero!"<<endl;
    }
    
    //Name and time of runner 2
    cout<<"What is the name of runner 2?"<<endl;
    cin>>runner2;
    cout<<"Enter the time in minutes in which "<<runner2<<" finished the race."<<endl;
    cin>>time2;
    if(time2<=0){
        cout<<"Please enter a number greater than zero!"<<endl;
    }
    
    //Name and time of runner 3
    cout<<"what is the name of runner 3?"<<endl;
    cin>>runner3;
    cout<<"Enter the time in minutes in which "<<runner3<<" finished the race."<<endl;
    cin>>time3;
    if(time3<=0){
        cout<<"Please enter a number greater than zero!"<<endl;
    }
    
    //Process by mapping inputs to outputs
    
    //Output values
    if(time1<time3&&time1<time2&&time2>time3){
        cout<<"First place:  "<<runner1<<endl;
        cout<<"Second place: "<<runner3<<endl;
        cout<<"Third place:  "<<runner2<<endl;
    }
    else if(time1<time3&&time1<time2&&time2<time3){
        cout<<"First place:  "<<runner1<<endl;
        cout<<"Second place: "<<runner2<<endl;
        cout<<"Third place:  "<<runner3<<endl;
    }
    else if(time2<time3&&time2<time1&&time1<time3){
        cout<<"First place:  "<<runner2<<endl;
        cout<<"Second place: "<<runner1<<endl;
        cout<<"Third place:  "<<runner3<<endl;
    }
    else if(time2<time3&&time2<time1&&time1>time3){
        cout<<"First place:  "<<runner2<<endl;
        cout<<"Second place: "<<runner3<<endl;
        cout<<"Third place:  "<<runner1<<endl;
    }
    else if(time3<time1&&time3<time2&&time2<time1){
        cout<<"First place:  "<<runner3<<endl;
        cout<<"Second place: "<<runner2<<endl;
        cout<<"Third place:  "<<runner1<<endl;
    }
    else if(time3<time1&&time3<time2&&time2>time1){
        cout<<"First place:  "<<runner3<<endl;
        cout<<"Second place: "<<runner1<<endl;
        cout<<"Third place:  "<<runner2<<endl;
    }

    //Exit stage right!
    return 0;
}