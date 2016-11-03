
/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on November 3, 2016, 12:26 PM
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes
void markup(float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float price;
    int percentage;
    
    //Input values
    cout<<"Find the Retail Price"<<endl;
    cout<<"Enter the Price"<<endl;
    cin>>price;
    cout<<"Enter the Markup Percentage"<<endl;
    cin>>percentage;
    
    //Process values -> Map inputs to Outputs
    markup(price, percentage);
    
    
    //Display Output

    //Exit Program
    return 0;
}
//***************************************************
//Purpose: Calculate the markup
//Inputs: 
//float-->Price (decimal places)
//int---->Percentages
//Outputs
//***************************************************

void markup(float money, int percent){
    //decalare Variable
    
}
