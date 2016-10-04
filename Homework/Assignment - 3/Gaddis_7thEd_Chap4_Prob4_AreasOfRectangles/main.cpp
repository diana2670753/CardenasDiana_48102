
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 2, 2016, 10:20 PM
 * Purpose: Determine area of a rectangle and which is larger
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
    int lenRec1, widRec1,
        lenRec2, widRec2, area1, area2; 
    
    //Input values
    cout<<"This program finds the area of two rectangles and\n"<<
        "determines which of the two has the larger area"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"Enter the length and width of the first rectangle (in inches)"<<endl;
    cin>>lenRec1>>widRec1;
    
    area1=lenRec1*widRec1;
    cout<<"The area of the first rectangle is "<<area1<<" inches"<<endl;
    
    cout<<endl;
    cout<<"Enter the length and width of the second rectangle (in inches)"<<endl;
    cin>>lenRec2>>widRec2;
    
    area2=lenRec2*widRec2;
    cout<<"The area of the second rectangle is "<<area2<<" inches"<<endl;
    
    //Process values -> Map inputs to Outputs
    if(area1>area2)
    {cout<<"The area of the first rectangle is greater than the area of the second rectangle"<<endl;}
    
    if(area2>area1)
    {cout<<"The area of the second rectangle is greater than the area of the first rectangle"<<endl;}
    
    else {cout<<"-------------------------------"<<endl;
          cout<<"The two rectangles have the same area"<<endl;}
    
    //Display Output

    //Exit Program
    return 0;
}

