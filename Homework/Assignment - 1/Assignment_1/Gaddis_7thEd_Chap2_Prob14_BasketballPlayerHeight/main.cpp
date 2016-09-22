
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on September 12, 2016, 11:47 PM
 * Purpose: Display height in feet and inches
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main(int argc, char** argv) {
    //Declaration of Variables
    char    Height=73,    //Height in Inches
            InchFt=12,    //Inches in a foot
            Feet, Inches; //Feet and Inches
    
    //Process values -> Map inputs to Outputs
    Feet=Height/InchFt;
    Inches=Height%InchFt;
    
    //Display Output
    cout<<"Height of a Basketball Player"<<endl;
    cout<<"The Star Player's Height = \n";
    cout<<static_cast<int>(Feet)<<"Ft. and "<<static_cast<int>(Inches)<<"In."<<endl;

    //Exit Program
    return 0;
}