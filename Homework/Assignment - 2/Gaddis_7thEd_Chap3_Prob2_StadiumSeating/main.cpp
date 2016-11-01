
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 1, 2016, 1:00 PM
 * Purpose: Gross from ticket sales
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Have decimal place at 2

using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int classA=15, classB=12, classC=9;  //Ticket Prices
    int tixA, tixB, tixC;                //Number of Tickets
    float total;
    
    //Input values
    cout<<"Enter the Amount of Tickets Sold"<<endl;
    cout<<"Class A: ";
    cin>>tixA;                           //Input # of Ticket A
    cout<<"Class B: ";
    cin>>tixB;                           //Input # of Ticket B
    cout<<"Class C: ";
    cin>>tixC;                           //Input # of Ticket C
    
    //Process values -> Map inputs to Outputs
    total=(classA*tixA)+(classB*tixB)+(classC*tixB);        //Calculate total
    
    //Display Output
    cout<<"Amount of Income Generated from Tickets Sales: $"<<fixed<<setprecision(2)<<total<<endl;

    //Exit Program
    return 0;
}
