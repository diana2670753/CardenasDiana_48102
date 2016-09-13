
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on September 12, 2016, 8:16 PM
 * Purpose: determine pay gross per pay period
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>
using namespace std;  //Name-space used in the System Library

int main(int argc, char** argv) {
    //Declaration of Variables
    double  Annual=32500,     //Annual pay
            TwcMnth=24,       //Number of paychecks in year when paid 2x Month
            BiWeek=26,        //Number of paychecks in year when paid bi-weekly
            MnthPay, BiWkPay; //2x Pay, Bi-Weekly Pay
    
    //Process values -> Map inputs to Outputs
    MnthPay=Annual/TwcMnth;
    BiWkPay=Annual/BiWeek;
    
    //Display Output
    cout<<"Pay Gross for Different Pay Periods"<<endl;
    cout<<"Annual Pay = $"<<Annual<<endl;
    cout<<endl;
    cout<<"Amount Payed per Paying Period When Payed Twice a Month = \n $";
    cout<<fixed<<setprecision(2)<<MnthPay<<endl;
    cout<<"Amount Paid per Paying Period When Paid Bi-Weekly = \n $";
    cout<<BiWkPay<<endl;

    //Exit Program
    return 0;
}