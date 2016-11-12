
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 11, 2016, 11:03 PM
 * Purpose: Convert Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float F, fract=1.8;         //Fahrenheit and Celsius
    int C;
    
    //Input values
    cout<<"C to F Program"<<endl;
    cout<<"-----------------"<<endl;
    cout<<"Enter the Temperature (Celsius): ";
    cin>>C;
    
    //Process values -> Convert C to F
    F=(fract*C)+32;
    
    //Display Output
    cout<<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
    cout<<"Temperature in Celsius    : "<<C<<" C"<<endl;
    cout<<"Temperature in Fahrenheit : "<<F<<" F"<<endl;

    //Exit Program
    return 0;
}
