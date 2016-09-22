/* 
   File:   main
   Author: Cardenas, Diana
   Created on August 29, 2016, 9:41 AM
   Purpose: Find the amount of total sales that the East Coast Division generated for the year 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//Global Constants
const char PERCENT=100;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char PcntTS=62;        //Percent of Total Sales Made by The East Coast
    float YearTot=4.6e6f;  //Total Sales This Year
    int EstTot;             //East Coast Total Sales
    
    //Process Values
    EstTot=(PcntTS*YearTot)/PERCENT;
    
    //Display Output
    cout<<"Total Sales of the East Coast Division - ";
    cout<<"Sales Prediction"<<endl;
    cout<<"Total Sales of Company                     = "<<"$"<<static_cast<int>(YearTot)<<endl;
    cout<<"Percentage of Sales by East Coast Division = "<<static_cast<int>(PcntTS)<<"%"<<endl;
    cout<<"Total Sales of East Coast Division         = "<<"$"<<EstTot<<endl;

    //Exit Program
    return 0;
}
