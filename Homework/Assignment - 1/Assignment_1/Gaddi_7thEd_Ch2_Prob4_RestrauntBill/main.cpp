/* 
   File:   main
   Author: Cardenas, Diana
   Created on September 18, 2016, 9:41 AM
   Purpose: Find the meal, tax, and tip amount  
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

//Global Constants
const char PERCENT=100;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float 
    mealChg=44.50,   //Meal Charge in $
    taxPcnt=6.75,    //Tax Percentage
    tipPcnt=15,      //tip Percentage
    TaxAmnt, TipAmnt, TotBill;
    
    //Process values -> Map inputs to Outputs
    TaxAmnt=(mealChg*taxPcnt)/PERCENT;
    TipAmnt=(mealChg*tipPcnt)/PERCENT;
    TotBill=TipAmnt+TaxAmnt+mealChg;
            
    //Display Output
    cout<<"Total Amount for Meal"<<endl;
    cout<<"Meal Charge  = $"<<fixed<<setprecision(2)<<mealChg<<endl;
    cout<<"Tax on Meal  = "<<taxPcnt<<"%"<<endl;
    cout<<"Tip for Meal = "<<tipPcnt<<"%"<<endl;
    cout<<"Total Amount for Tax = $"<<TaxAmnt<<endl;
    cout<<"Total Amount for Tip = $"<<TipAmnt<<endl;
    cout<<"Meal Charge + Tax + Tip = $"<<TotBill<<endl;

    //Exit Program
    return 0;
}
