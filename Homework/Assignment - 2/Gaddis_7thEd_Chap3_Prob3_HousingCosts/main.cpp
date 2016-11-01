/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 1, 2016, 1:15 PM
 * Purpose: Calculate Costs
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Decimal Place (2)

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int year=12;
    float rent, phone, utility, cable;  //Payment Info Needed
    float totMnth,totYear;              //Total Payment in the Month and Year
    
    //Input values
    cout<<"Input Monthly Costs"<<endl;
    cout<<"_____________________"<<endl;
    cout<<"Rent or Mortgage Payment      : $";
    cin>>rent;
    cout<<"Phones (Land-line and/or Cell): $";
    cin>>phone;
    cout<<"Utilities (Water, Gas, etc.)  : $";
    cin>>utility;
    cout<<"Cable                         : $";
    cin>>cable;
    
    //Process values -> Map inputs to Outputs
    totMnth=rent+phone+cable+utility;    //Total for One Month
    totYear=totMnth*year;                //Total in a year (12 Months)
    
    //Display Output
    cout<<endl;
    cout<<"Here Are the Total Costs"<<endl;
    cout<<"Monthly Cost: $"<<fixed<<setprecision(2)<<totMnth<<endl;
    cout<<"Annual Cost : $"<<fixed<<setprecision(2)<<totYear<<endl;

    //Exit Program
    return 0;
}