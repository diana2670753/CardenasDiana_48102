/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on October 6, 2016, 11:54 AM
 * Purpose:  Calculate your weight
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
float GRAVITY=6.673e-8f;    //Universal Gravity Constant cm^2/g/sec^2
float CNKGGRM=1000;         //Conversion KG to grams
float CNSGGRM=14593.9;      //Conversion from Slugs to Grams
float CNKMMET=1000;         //Conversions from Km to Meters  
float CNMETCM=100;          //Conversion from Meters to CM
float CNDYNLB=2.24809e-6f;  //Conversion from Dynes to Pounds
float CNSGLBS=32.174f;      //Conversion from Slugs to Pounds

//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float msEarth=5.972e24;  //Google lookup -> Kilograms
    float msMark=6;          //Mass of MArk -> Slugs
    float rdEarth=6371.0f;   //Google radius of the Earth
    float weight;            //Force of attraction from Physics
    
    //Conversions of Inputs
    msEarth*=CNKGGRM;        //Converts mass of the Earth to grams
    msMark*=CNSGGRM;         //Converts mass of Mark to grams
    rdEarth*=CNKMMET*CNMETCM; //Convert the radius of the Earth to centimeters
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    weight=GRAVITY*msMark*msEarth/rdEarth/rdEarth; //Weak force attraction due to Gravity
    weight*=CNDYNLB;                               //Convert Dynes to pounds
            
    
    //Output Located Here
    cout<<"According to the Weak Force of Gravity, Mark weighs = "<<weight<<"lbs"<<endl;
    cout<<"As a check, Mark weighs = "<<6*CNSGLBS<<"lbs"<<endl;
    cout<<"The percentage error in the Radius of Earth = +-"<<100.0f*18/6371<<"%"<<endl;
    cout<<"The margin of error for the weight = "<<(weight-6*CNSGLBS)/weight*100.0f<<"%"<<endl;
    

    //Exit
    return 0;
}

