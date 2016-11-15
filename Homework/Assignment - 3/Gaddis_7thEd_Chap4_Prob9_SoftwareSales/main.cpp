
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 13, 2016, 2:53 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Set precision for dollars

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int PERCENT=100;

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int units, costB4;              //Cost before discount
    float totCost, discount, dscntPrc, price=99;  //final cost, discount percent, discount price
    
    
    //Input values
    do{
        cout<<"Enter number of units purchased: ";
        cin>>units;
    }
    while(units<=0);
    
    //Process values -> Map inputs to Outputs
    if (units>=10&&units<=19){
        discount=20;
    }
    else if (units>=20&&units<=49){
        discount=30;
    }
    else if(units>=50&&units<=99){
        discount=40;
    }
    else if(units>=100){
        discount=50;
    }
    else {
        discount=0;
    }
    
    //Calculate Discount
    costB4=units*price;
    dscntPrc=(costB4*discount)/PERCENT;
    totCost=costB4-dscntPrc;
    
    //Display Output
    cout<<"Total Cost of Purchase: $"<<fixed<<setprecision(2)<<totCost<<endl;

    //Exit Program
    return 0;
}
