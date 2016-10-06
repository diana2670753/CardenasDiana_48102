/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 2, 2016, 8:47 PM
 * Purpose: Find which number is larger/smaller
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int x, y;
    
    //Input values
    cout<<"Enter two integers"<<endl;
    cout<<"This program determines which of the two integers has the greater value"<<endl;
    cin>>x>>y;
    
    //Process values -> Map inputs to Outputs
    if (x>y)
    {cout<<x<<" is greater than "<<y<<endl;}
    
    if (y>x)
    {cout<<y<<" is greater than "<<x<<endl;}
    
    if (y==x)
    {cout<<x<<" and "<<y<<" have the same value"<<endl;}
           
    
    //Display Output

    //Exit Program
    return 0;
}