/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 6, 2016, 9:07 AM
 * Purpose: Display seconds into days, hours, and minutes
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
float DAY=86400,
      HOUR=3600,
      MINUTE=60;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float seconds;
    float days,hours,minutes; 
            
    //Input or initialize values Here
    cout<<"This program turns your seconds into Days, Hours, or Minutes"<<endl;
    cout<<"Enter the number of seconds"<<endl;
    cin>>seconds;
    
    while(seconds<0){
        cout<<"Positive Values Only"<<endl;
        cout<<"Enter the number of seconds"<<endl;
        cin>>seconds;
    }
    
    //Calculations/Output Here
    if(seconds>=86400) {
        days=seconds/DAY;
        cout<<setprecision(2)<<days<<" days"<<endl;
        if(days<=1){
            cout<<days<<" day"<<endl;
        }
    }
    
    if((seconds<86400)&&(seconds>=3600)) {
        hours=seconds/HOUR;
        cout<<setprecision(2)<<hours<<" hours"<<endl;
        if(hours<=1){
            cout<<hours<<" day"<<endl;
        }
    }
    
    else
    {
         minutes=seconds/MINUTE;
        cout<<setprecision(2)<<minutes<<" minute(s)"<<endl;
    }
    

    //Exit
    return 0;
}

