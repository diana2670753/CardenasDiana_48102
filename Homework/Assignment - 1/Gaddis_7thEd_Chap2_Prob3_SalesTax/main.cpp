/* 
   File:   main
   Author: Cardenas, Diana
   Created on August 29, 2016, 9:41 AM
   Purpose: Find the total state and county tax on a purchase
 */

//System Libraries
#include <iostream>   
using namespace std;  //Name-space used in the System Library

//Global Constants
const char PERCENT=100;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    char PrchPrc=52.0;  //Purchase Price in $
    char SteTax=4;    //State Tax in %
    char CntyTax=2;   //County Tax in %
    char TotTax, SteDlr, CntyDlr;      //Total/County/State Tax Amounts in $
    
    //Process values -> Map inputs to Outputs
    SteDlr=(PrchPrc*SteTax)/PERCENT;
    CntyDlr=(PrchPrc*CntyTax)/PERCENT;
    TotTax=CntyDlr+SteDlr;
    
    //Display Output
    cout<<"Finding State and County Total Tax on a Purchase"<<endl;
    cout<<"Purchase Price = $"<<static_cast<int>(PrchPrc)<<endl;
    cout<<"State Tax      = "<<static_cast<int>(SteTax)<<"%"<<endl;
    cout<<"County Tax     = "<<static_cast<int>(CntyTax)<<"%"<<endl;
    cout<<"State Tax Total in Dollars  = $"<<static_cast<int>(SteDlr)<<endl;
    cout<<"County Tax Total in Dollars = $"<<static_cast<int>(CntyDlr)<<endl;
    cout<<"Total Tax Amount in Dollars = $"<<static_cast<int>(TotTax)<<endl;
    
    //Exit Program
    return 0;
}
