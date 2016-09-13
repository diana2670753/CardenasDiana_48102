
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on September 12, 2016, 8:00 PM
 * Purpose: Find the selling price of circuit boards
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//Global Constants
const char PERCENT=100;

int main(int argc, char** argv) {
    //Declaration of Variables
    double  FactPrc=12.67,    //Price to produce boards
            PcntPft=40,       //Profit Percent
            SellPrc;          //Selling Price
    
    //Process values -> Map inputs to Outputs
    SellPrc=(12.67*40)/PERCENT;
    
    //Display Output
    cout<<"Selling Price of Circuit Boards"<<endl;
    cout<<"Factory Price     = $"<<FactPrc<<endl;
    cout<<"Profit Percentage = "<<PcntPft<<"%"<<endl;
    cout<<endl;
    cout<<"Selling Price = $"<<fixed<<setprecision(2)<<SellPrc<<endl;

    //Exit Program
    return 0;
}

