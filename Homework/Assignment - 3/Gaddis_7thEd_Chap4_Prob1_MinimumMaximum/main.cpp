
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 4, 2016, 11:14 AM
 * Purpose: 
 */

//System Libraries
#include <iostream>   //Input/Output objects
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int a, b;
    
    //Input values
    cout<<"This program orders two integers from smallest to largest"<<endl;
    cout<<"Please enter two integers (different values)"<<endl;
    cin>>a>>b;
    
    //Process values -> Map inputs to Outputs
    if(a>b) {
        cout<<"Order: "<<b<<", "<<a<<endl;
    }
    if(a<b) {
        cout<<"Order: "<<a<<", "<<b<<endl;
    }
    

    //Exit Program
    return 0;
}

