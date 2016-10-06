
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 6, 2016, 2:31 PM
 * Purpose: Math 
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime> 
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    srand((time(0)));            //Random Number Generator 
    int num1, num2, input, sum;
    
    //Input or initialize values Here
    num1=rand() % (50 - 10 + 1);    //Range -> 10-50
    num2=rand() % (50 - 10 + 1);    
    
    
    //Process/Calculations Here
    cout<<"Math Tutor 2.0"<<endl;
    cout<<"Enter the sum of the following numbers"<<endl;
    cout<<endl;
    
    cout<<"  "<<num1<<endl;
    cout<<"+ "<<num2<<endl;
    cout<<"----"<<endl;
    cin>>input;
    
    //Check to see if input is correct
    sum=num1+num2;
    
    if(sum==input) {
        cout<<"Congratulations! You're correct"<<endl;
    }
    while(sum!=input){
        cout<<"Sorry. Incorrect."<<endl;
        cout<<"Try Again"<<endl;
        cin>>input;
            if(sum==input) {
        cout<<"Congratulations! You're correct"<<endl;
            }
    }
    //Output Located Here
  
    //Exit
    return 0;
}

