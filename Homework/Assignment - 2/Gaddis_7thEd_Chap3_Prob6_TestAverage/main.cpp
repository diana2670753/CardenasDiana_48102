
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 1, 2016, 1:52 PM
 * Purpose: Find Test Average
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>

using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float s1,s2,s3,s4,s5;   //Score
    float average;
    
    //Input values
    cout<<"Test Average Calculator"<<endl;
    cout<<endl;
    cout<<"Enter the 1st Test Score"<<endl;
    cin>>s1;
    cout<<"Enter the 2nd Test Score"<<endl;
    cin>>s2;
    cout<<"Enter the 3rd Test Score"<<endl;
    cin>>s3;
    cout<<"Enter the 4th Test Score"<<endl;
    cin>>s4;
    cout<<"Enter the 5th Test Score"<<endl;
    cin>>s5;
    
    //Process values -> Map inputs to Outputs
    average=(s1+s2+s3+s4+s5)/5;
    
    //Display Output
    cout<<"-------------------------"<<endl;
    cout<<"Test Score Averages: "<<fixed<<setprecision(1)<<average<<endl;

    //Exit Program
    return 0;
}