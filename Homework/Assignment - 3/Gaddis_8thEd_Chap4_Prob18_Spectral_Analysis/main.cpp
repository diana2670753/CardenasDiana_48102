/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on September 29, 2016, 12:03 PM
 * Purpose: Input wave length and determine type of radiation  
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float waveLen;
    
    //Input or initialize values Here
    cout<<"Input wavelength of radiation in meters"<<endl;
    cout<<"This program determines the band of radiation"<<endl;
    cin>>waveLen;
    
    //Process/Calculations Here
    if(waveLen>1e-2f)cout<<"Radio Band"<<endl;
    else if(waveLen>1e-3f)cout<<"Micro Wave Band"<<endl;
    else if(waveLen>7e-7f)cout<<"Infra-Red Band"<<endl;
    else if(waveLen>4e-7f)cout<<"Visible Band"<<endl;
    else if(waveLen>1e-8f)cout<<"Ultra-Violet Band"<<endl;
    else if(waveLen>1e-11f)cout<<"X-Ray Band"<<endl;
    else cout<<"Gamma-Ray Band"<<endl;
    
    //Output Located Here
    
    //Exit
    return 0;
}



