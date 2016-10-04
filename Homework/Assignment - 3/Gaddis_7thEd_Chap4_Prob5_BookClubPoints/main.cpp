
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 2, 2016, 11:49 PM
 * Purpose: 
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
    int books, points;
   
    //Input values
    cout<<"Book Clubs Points Earned for This Month"<<endl;
    cout<<"------------------------------------"<<endl;
    cout<<"Please enter the number of books purchased this month"<<endl;
    cin>>books;
    
    //Process values -> Map inputs to Outputs
    cout<<((books<0) ?"Invalid":
           (books==0) ?"You've earned 0 points":
           (books==1) ?"You've earned 5 points":
           (books==2) ?"You've earned 15 points":
           (books==3) ?"You've earned 30 points":"You've earned 60 points")<<endl;
           
    
    //Exit Program
    return 0;
}