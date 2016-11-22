
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 22, 2016, 10:55 AM
 * Purpose: Find falling distance for 1-10 seconds
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <cmath>

using namespace std;  //Name-space used in the System Library

//Function prototypes
float fallDist(float);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Process values and Display Values
    for (int t=1; t<=10; t++){          //t = time in seconds
        cout<<"Distance Fell for "<<t<<" second(s): "<<fallDist(t)<<" meters"<<endl;
    }
    
    //Exit Program
    return 0;
}
float fallDist(float t){
    float distance, g=9.8;
    distance=(.5*g)*(pow(t,2));    //Falling Distance Formula
    return distance;
}