/* 
   File:   main
   Author: Cardenas, Diana
   Created on November 22, 2016 9:49AM
   Purpose: Find Reatil price with functions
 */

//System Libraries
#include <iostream>   //Input/Output objects
#include <iomanip>    //Decimals for money value

using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants
const int PERCENT=100;

//Function prototypes
float Retail(float, float);        //Function to calculate retail

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    float cost,markup,retail;
    
    //Input values
    do{                                               //Markup and cost must be positive
        cout<<"Input the Wholesale Cost of Item: $";
        cin>>cost;
    }while(cost<0);
    
    do{                                               //Markup and cost must be positive
        cout<<"Input the Markup Percentage     : ";
        cin>>markup;
    }while(markup<0);
    
    //Process values -> Map inputs to Outputs
    retail=Retail(cost,markup);
    
    //Display Output
    cout<<"-------------------------------------------"<<endl;
    cout<<"The Retail Value of the Item is $"<<fixed<<setprecision(2)<<retail<<endl;

    //Exit Program
    return 0;
}

/*****************************************
 * Calculate final retail price of item
******************************************/
float Retail(float cost, float markup){
    float retail;
    retail=((cost*markup)/PERCENT+cost);
    
    return retail;
}
