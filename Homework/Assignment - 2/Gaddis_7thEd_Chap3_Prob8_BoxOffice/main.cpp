
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 11, 2016, 7:43 PM
 * Purpose: Find gross of a theater
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <string>
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const float PERCENT=100;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    string name;
    int child,adult,grossProf;
    float distr,netProf,childPay=3.00,adultPay=6.00;
    
    //Input values
    cout<<"Enter Movie Name: ";
    getline(cin,name);
    cout<<"Enter Amount of Adult Tickets Sold: ";
    cin>>adult;
    cout<<"Enter Amount of Child Tickets Sold: ";
    cin>>child;
    
    //Process values -> Map inputs to Outputs
    grossProf=(adult*adultPay)+(child*childPay);
    distr=(grossProf*80)/PERCENT;
    netProf=(grossProf*20)/PERCENT;
    
    //Display Output
    cout<<"Movie Name                :  "<<name<<endl;
    cout<<"Adult Tickets Sold        :  "<<adult<<endl;
    cout<<"Child Tickets Sold        :  "<<child<<endl;
    cout<<"Gross Box Office Profit   :  $"<<grossProf<<endl;
    cout<<"Amount Paid to Distributor: -$"<<fixed<<setprecision(2)<<distr<<endl;
    cout<<"Net Box Office Profit     :  $"<<fixed<<setprecision(2)<<netProf<<endl;

    //Exit Program
    return 0;
}