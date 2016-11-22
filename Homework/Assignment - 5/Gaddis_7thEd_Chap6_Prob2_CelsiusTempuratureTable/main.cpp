/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 22, 2016, 10:14 AM
 * Purpose: Convert F (1-20) to C;
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//Function prototypes
float celsius(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Process and Display Values
    for (float f=0; f<=20; f++){
        cout<<"Fahrenheit "<<f<<" -> Celsius: "<<endl;
        cout<<celsius(f)<<endl;
        cout<<endl;
    }
    
    //Exit Program
    return 0;
}

float celsius(float f){
    float c;   //celsius value to return
    c=(f-32)*(.55);    //5/9=.55
    return c;
}