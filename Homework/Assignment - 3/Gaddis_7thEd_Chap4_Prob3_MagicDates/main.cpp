
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 2, 2016, 10:03 PM
 * Purpose: Determine if a date is magic
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
    int month, day, year, magic;
    
    //Input values
    cout<<"Is the date 'magic'?"<<endl;
    cout<<"-------------------"<<endl;
    cout<<"In numeric form, enter the month"<<endl;
        cin>>month;
    cout<<"In numeric form, enter the day"<<endl;
        cin>>day;
    cout<<"In numeric form, enter the last two digits of the year"<<endl;
        cin>>year;
        
        magic=(month*day);
    
    //Process values -> Map inputs to Outputs
        if(magic==year)
        {cout<<"This date is magic!"<<endl;}
        
        else
            cout<<"Sorry. This date isn't magic..."<<endl;
        
    
    //Display Output

    //Exit Program
    return 0;
}