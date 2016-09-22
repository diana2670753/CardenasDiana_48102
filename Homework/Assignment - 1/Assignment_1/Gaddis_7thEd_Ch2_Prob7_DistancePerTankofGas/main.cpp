/* 
   File:   main
   Author: Cardenas, Diana
   Created on September 12, 2016, 11:25 AM
   Purpose: Calculate the distance the car can travel
 */

//System Libraries
#include <iostream> //Input/Output objects
#include <iomanip> 
using namespace std;  //Name-space used in the System Library

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float   TnkGlln=20,
            TownMPG=21.5,
            HiwyMPG=26.8,
            TownDis,
            HiwyDis;
            
    //Process values -> Map inputs to Output
    TownDis=TnkGlln*TownMPG;
    HiwyDis=TnkGlln*HiwyMPG;
            
    //Display Output
    cout<<"Distance Car Can Travel"<<endl;
    cout<<"Gallons in Gas Tank         = "<<TnkGlln<<endl;
    cout<<"Miles Per Gallon in Town    = "<<fixed<<setprecision(1)<<TownMPG<<endl;
    cout<<"Miles Per Gallon on Highway = "<<fixed<<setprecision(1)<<HiwyMPG<<endl;
    cout<<endl;
    cout<<"MPG in Town * Gallons in Gas Tank = \n";
    cout<<TownDis<<" MPG"<<endl;
    cout<<"MPG on Highway * Gallons in gas Tank = \n";
    cout<<HiwyDis<<" MPG"<<endl;

    //Exit Program
    return 0;
}

