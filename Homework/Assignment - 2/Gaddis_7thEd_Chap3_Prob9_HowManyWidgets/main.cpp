/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 11, 2016, 8:17 PM
 * Purpose: Find number of widgets on pallet
 */

//System Libraries
#include <iostream>   //Input/Output objects

using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float widget=9.2;
    float pallet, totWght;
    int numWidg;           //There can not be a 'half' widget
    
    //Input values (total weight and weight of pallet itself)
    cout<<"Please Enter the Following in Pounds (lbs)"<<endl;
    cout<<"Enter the Total Weight of Pallet AND Widgets"<<endl;
    cin>>totWght;
    cout<<"Enter Weight of Pallet"<<endl;
    cin>>pallet;
    
    //Process values -> Map inputs to Outputs
    numWidg=(totWght-pallet)/widget;       //Total widget weight divided by individual widget weight
    
    //Display Output
    cout<<"Number of Widgets on Pallet: "<<numWidg<<endl;

    //Exit Program
    return 0;
}