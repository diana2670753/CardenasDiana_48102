
/* 
 * File:   main.cpp
 * Author: Charlie
 *
 * Created on November 28, 2016, 11:46 AM
 */

//System Libraries Here
#include <iostream> //Input/output stream objects
#include <string>   //Name of regions
using namespace std;

//Function Prototypes Here
float getAccidents(string); //Input traffic accidents for each region
void findLowest(int,int,int,int,int); //find lowest amount of accidents from the 5 regions

//Program Execution Begins Here
int main() {
    //Declaration of variables
    string  reg1="North",
            reg2="South",
            reg3="East",
            reg4="West",
            reg5="Central";
    int     NA, //North accidents
            SA, //South accidents
            EA, //East accidents
            WA, //West accidents
            CA; //Central accidents

    //Call functions
    NA = getAccidents(reg1); //Finds traffic accidents from North Region
    SA = getAccidents(reg2); //Finds traffic accidents from South Region
    EA = getAccidents(reg3); //Finds traffic accidents from East Region
    WA = getAccidents(reg4); //Finds traffic accidents from West Region
    CA = getAccidents(reg5); //Finds traffic accidents from Central Region
    
    //Send to void findLowest
    findLowest(NA, SA, EA, WA, CA);

    //Exit
    return 0;
}
/*************************Get Sales Information************************
 *Purpose: Recieve each Region's traffic accident info from last year
 *Input: User inputs accidents -> Validate
 *Output: Traffic Accident number for each region
 **********************************************************************/
float getAccidents(string region){
    //Declare variable
    float crashes;
    
    //Input validation
    do{ 
        //Display division name
        cout<<"Enter Number of Traffic Accidents from the "<<region<<" Region (last year): ";
        
        //Input values
        cin>>crashes; 
        cin.ignore();
        
    }while(crashes<0);//Keep sales over zero
    
    return crashes;   //return to NE,SE,NW,SW
}
/********************Determine Highest Earned Division******************
 *Purpose: Determine the lowest traffic accident history of all 5 regions
 *Input: Traffic Accidents from each Regions (N,S,E,W,C)
 *Output: Print the region with the least amount of accidents or All have the same
 *        --> Print out the amount of accidents for that region
 ***********************************************************************/
void findLowest(int N, int S, int E, int W, int C){
    //Determine highest sale figures
    if (N<S && N<E && N<W && N<C) {
        cout<<"The North Region has the Least Amount of Traffic ACcicents with "<<N<<" Accidents";
    } 
    else if (S<N && S<E && S<W && S<C) {
        cout<<"The South Region has the Least Amount of Traffic ACcicents with "<<S<<" Accidents";
    } 
    else if (E<N && E<S && E<W && E<C) {
        cout<<"The East Region has the Least Amount of Traffic ACcicents with "<<E<<" Accidents";
    } 
    else if (W<N && W<S && W<E && W<C) {
        cout<<"The West Region has the Least Amount of Traffic ACcicents with "<<W<<" Accidents";
    } 
    else if (C<N && C<S && C<E && C<W) {
        cout<<"The Central Region has the Least Amount of Traffic ACcicents with "<<C<<" Accidents";
    } 
    else {
        cout << "All Regions Have the Equal Number of Traffic Accidents with "<<C<<" Accidents";
    }
}