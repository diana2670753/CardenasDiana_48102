/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cardenas,Diana
 * Created on November 1, 2016, 2:02 PM
 * Purpose: Calculate Rainfall Average
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>

using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string month1,month2,month3;
    float rain1,rain2,rain3;
    float average;
    
    //Input values
    cout<<"Average Rainfall of Three Months"<<endl;
    cout<<endl;
    cout<<"(Please Enter Months in Order)"<<endl;
    cout<<"Enter the First Month Name and Amount of Rain Fall (inches)"<<endl;
    cin>>month1>>rain1;
    cout<<"Enter the Second Month Name and Amount of Rain Fall (inches)"<<endl;
    cin>>month2>>rain2;
    cout<<"Enter the Third Month Name and Amount of Rain Fall (inches)"<<endl;
    cin>>month3>>rain3;
    cout<<endl;
    
    //Process values -> Map inputs to Outputs
    average=(rain1+rain2+rain3)/3;
    
    //Display Output
    cout<<"The average monthly rainfall for "<<month1<<", "<<month2<<", and "<<month3<<" was "<<average<<" inches"<<endl;

    //Exit Program
    return 0;
}

