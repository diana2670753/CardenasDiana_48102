
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 11, 2016, 8:31 PM
 * Purpose: 
 */

//System Libraries
#include <iostream>   //Input-Output objects
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int serving=4, calServe=300;   //Number of cookies/calories per serving
    int eatCooky, calCook, totCal;         //# of cookies eaten --- Calories per cookie
    
    //Input values
    cout<<"Input Amount of cookies consumed: "<<endl;
    cin>>eatCooky;
    
    //Process values for calories per cookie and total calories consumed
    calCook=calServe/serving;
    totCal=calCook*eatCooky;
    
    //Display Output
    cout<<"---------------------------------"<<endl;
    cout<<"You've Consumed "<<totCal<<" Calories"<<endl;

    //Exit Program
    return 0;
}

