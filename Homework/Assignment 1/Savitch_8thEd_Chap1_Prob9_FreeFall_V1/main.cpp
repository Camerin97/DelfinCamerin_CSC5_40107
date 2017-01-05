/* 
 * File:   main.cpp
 * Author: Camerin Delfin
 * Created on January 5, 2017, 1:08 PM
 * Purpose: Free Fall
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants Only
//Like PI, e, Gravity, or conversions
const float GRAVITY=3.2174e1f;//Gravity on the earth sea level ft/sec^2

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float time,   //time in seconds
          distnce;//Distance in feet
    
    //Input Values
    cout<<"This problem solves the distance traveled"<<endl;
    cout<<"in free fall-under earth gravity"<<endl;
    cout<<"Input the time during free-fall in seconds"<<endl;
    cin>>time;
    
    //Process by mapping inputs to outputs
    distnce=GRAVITY*time*time/2;
    
    //Output Values
    cout<<"The distance fallen = "<<distnce<<" ft"<<endl;
    
    //Exit
    return 0;
}

