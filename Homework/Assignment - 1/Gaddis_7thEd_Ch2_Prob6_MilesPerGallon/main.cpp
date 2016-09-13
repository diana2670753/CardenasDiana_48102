/* 
   File:   main
   Author: Cardenas, Diana
   Created on August 29, 2016, 9:41 AM
   Purpose: Calculate number of miles per gallon on a car
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main(int argc, char** argv) {
    //Declaration of Variables
    double  MPG,
            gallons=16,
            miles=350;
    
    //Process values -> Map inputs to Outputs
    MPG=miles/gallons;
    
    //Display Output
    cout<<"Miles Per Gallon"<<endl;
    cout<<"Gallons Car Can Hold = "<<gallons<<endl;
    cout<<"Miles Car Can Drive Before Refueling = "<<miles<<endl;
    cout<<"Miles / Gallons = "<<fixed<<setprecision(2)<<MPG<<" Miles per Gallon"<<endl;
    

    //Exit Program
    return 0;
}


