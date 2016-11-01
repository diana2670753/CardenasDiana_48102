
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 1, 2016, 1:31 PM
 * Purpose: Determine minimum amount of insurance
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library
//Global Constants
const int PERCENT=100;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float bldgCst, minInsr;    
    
    
    //Input values
    cout<<"How Much Insurance?"<<endl;
    cout<<"Enter the Replacement Cost of the Building You Want to Insure: $";
    cin>>bldgCst;                 //Cost Info
    
    //Process values -> Map inputs to Outputs
    minInsr=(bldgCst*80)/PERCENT;
    
    //Display Output
    cout<<"Recommended Minimum Amount of Insurance"<<endl;
    cout<<"$"<<fixed<<setprecision(2)<<minInsr;

    //Exit Program
    return 0;
}