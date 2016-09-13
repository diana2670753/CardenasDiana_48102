/* 
   File:   main
   Author: Cardenas, Diana
   Created on September 13, 2016, 11:51 AM
   Purpose: Calculate how much the ocean levels have risen  
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float CNVMMFT=304.8; //Conversion millimeters to feet
const float CNVMMM=1000;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   rate=1.5;            //Rate of rising ocean levels in mm/year
    int     nYear1=5,            //Years to calculate rise
            nYear2=7,
            nYear3=10;
    float   rise1, rise2, rise3; //Solutions for the 3 years from above
    int     nYrBch;              //Number of years before your home is beach front property
    float   elevRiv=860;         //Elevation of Riverside in Feet
            
            
    //Process values -> Map inputs to Outputs
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=(elevRiv/rate)*CNVMMFT;
    
    //Display Output
    cout<<"The Rate of Sea Level Rise = "<<rate<<"mm/year"<<endl;
    cout<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<" mm"<<endl;
    cout<<endl;
    cout<<"At this rate Riverside won't have beach front property for "<<nYrBch<<" years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<" meters"<<endl;

    //Exit Program
    return 0;
}