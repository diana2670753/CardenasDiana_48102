/* 
   File:   main
   Author: Cardenas, Diana
   Created on September 22, 2016, 12:39 PM
   Purpose: Calculate the user's MPG on car 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float gallons, miles;     //Max Gallon and Max miles of car (w/ full tank)
    float mpg;
    
    //Input values
    cout<<"Input Gallons Car can Hold: ";
    cin>>gallons;
    cout<<endl;
    cout<<"Input Miles That Can be Driven in Full Tank: ";
    cin>>miles;
    
    //Process values -> find Mile Per Gallon
    mpg=miles/gallons;
    
    //Display Output
    cout<<"----------------------------------------"<<endl;
    cout<<"Your Car Runs at "<<fixed<<setprecision(2)<<mpg<<" MPG"<<endl;

    //Exit Program
    return 0;
}

