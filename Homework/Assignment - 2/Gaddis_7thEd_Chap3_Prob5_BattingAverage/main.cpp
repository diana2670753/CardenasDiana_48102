
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 1, 2016, 1:41 PM
 * Purpose: Find baseball player's batting average
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //For Decimal place at 4

using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float average;
    int atBat,hits;
    
    //Input values
    cout<<"Batting Average Calculator"<<endl;
    cout<<endl;
    cout<<"Input Number of Times at Bat: ";
    cin>>atBat;
    cout<<"Input Number of Hits        : ";
    cin>>hits;
    
    //Process values -> Map inputs to Outputs
    average=static_cast<float>(hits)/atBat;
    
    //Display Output
    cout<<"------------------------------------"<<endl;
    cout<<"Your Batting Average is "<<fixed<<setprecision(4)<<average<<endl;

    //Exit Program
    return 0;
}