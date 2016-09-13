
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on September 12, 2016, 11:24 PM
 * Purpose: Calculate the Earth's ocean levels in the last century
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main(int argc, char** argv) {
    //Declaration of Variables
    double  LvlsMil=1.8,            //Risen Ocean Level in Millimeters
            Century=100,            //Years in a Century
            CmMtr=0.1,             //One millimeter in a centimeter 
            Inches=0.3937,          //centimeter in inches
            CenCm, CenInch, CenMil; //Century growth in cm, inches, millimeters
            
    //Process values -> Map inputs to Outputs
    CenMil=LvlsMil*Century;
    CenCm=CenMil*CmMtr;
    CenInch=CenCm*Inches;
    
    //Display Output
    cout<<"Earth's Ocean Levels in the Past Century"<<endl;
    cout<<endl;
    cout<<"Earth's Ocean Levels Risen in a Year = "<<LvlsMil<<" Millimeters"<<endl;
    cout<<"Earth's Ocean Levels in a Century = "<<CenMil<<" Millimeters"<<endl;
    cout<<endl;
    cout<<"Ocean Levels in a Century (Centimeters) = \n";
    cout<<CenCm<<" centimeters"<<endl;
    cout<<"Ocean Levels in a Century (Inches) = \n";
    cout<<CenInch<<" inches"<<endl;

    //Exit Program
    return 0;
}