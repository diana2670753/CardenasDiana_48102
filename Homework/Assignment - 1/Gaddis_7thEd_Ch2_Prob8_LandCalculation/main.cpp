/* 
   File:   main
   Author: Cardenas, Diana
   Created on September 12, 2016, 7:32 PM
   Purpose: find the number of acres in a tract of land 
 */

//System Libraries
#include <iostream>
#include <iomanip> //Input/Output objects
using namespace std;  //Name-space used in the System Library

int main(int argc, char** argv) {
    //Declaration of Variables
    double  AOLinFT=43560,    //Acre in Feet
            LndInFt=389767,   //Square Feet in Tract of Land
            NumbAcr;       //Number of Acre
    
    //Process values -> Map inputs to Outputs
    NumbAcr=LndInFt/AOLinFT;
    
    //Display Output
    cout<<"Number of Acres in Tract of Land"<<endl;
    cout<<"Acre in Feet = "<<AOLinFT<<endl;
    cout<<"SqFt in Tract of Land = "<<LndInFt<<endl;
    cout<<endl;
    cout<<"SqFt of Land / Acre in Feet = \n";
    cout<<fixed<<setprecision(2)<<NumbAcr<<"SqFt"<<endl;

    //Exit Program
    return 0;
}