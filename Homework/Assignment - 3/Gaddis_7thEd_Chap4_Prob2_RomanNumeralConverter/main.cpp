/*
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 2, 2016, 9:21 PM
 * Purpose: Display a Roman numeral w/ input information
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int number;
    
    
    //Input values
    cout<<"This program converts numbers into Roman numerals"<<endl;
    cout<<"Enter an integer between 1 and 10"<<endl;
    cin>>number;
    
    //Process values -> Map inputs to Outputs
    switch(number)
    {
        case 1: 
            cout<<"I";
        break;
        
        case 2: 
            cout<<"II";
        break;
        
        case 3: 
            cout<<"III";
        break;
        
        case 4: 
            cout<<"IV";
        break;
        
        case 5: 
            cout<<"V";
        break;
        
        case 6: 
            cout<<"VI";
        break;
        
        case 7: 
            cout<<"VII";
        break;
        
        case 8: 
            cout<<"VIII";
        break;
        
        case 9: 
            cout<<"IX";
        break;
        
        case 10: 
            cout<<"X";
        break;   
    }
   
    //Exit Program
    return 0;
}

