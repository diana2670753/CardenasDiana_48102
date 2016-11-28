
/* 
 * File:   main.cpp
 * Author: Cardenas, Diana
 * Created on November 28, 2016, 11:15 AM
 * Purpose: Determine which division earned the highest
 */

//System Libraries Here
#include <iostream> //Input/output stream objects
#include <string>   //Name of divisions
using namespace std;

//Function Prototypes Here
float getSales(string); //Input sales for each division
void findHighest(float, float, float, float); //find greatest sales out of 4 divisions

//Program Execution Begins Here
int main() {
    //Declaration of variables
    string  div1 = "Northeast",
            div2 = "Southeast",
            div3 = "Northwest",
            div4 = "Southwest";
    float   NE, //Northeast sales
            SE, //Southeast sales
            NW, //Northwest sales
            SW; //Southwest sales

    //Call functions
    NE = getSales(div1); //Finds Northeast sales and passes it to nE
    SE = getSales(div2); //Finds Southeast sales and passes it to sE
    NW = getSales(div3); //Finds Northwest sales and passes it to nW
    SW = getSales(div4); //Finds Southwest sales and passes it to sW

    findHighest(NE,SE,NW,SW); //Find highest sale of all 4 divisions

    //Exit
    return 0;
}
/*************************Get Sales Information************************
 *Purpose: Recieve each division's sale info
 *Input: User inputs sales -> Validate
 *Output: Sales Information for each division
 **********************************************************************/
float getSales(string division) {
    //Declare variable
    float sales;
    
    //Input validation
    do{ 
        //Display division name
        cout<<"Enter Quarterly Sales for the "<<division<<" Division: $";
        
        //Input values
        cin>>sales; 
        cin.ignore();
        
    }while(sales<0);//Keep sales over zero
    
    return sales;   //return to NE,SE,NW,SW
}
/********************Determine Highest Earned Division******************
 *Purpose: Determine Highest sale of all four divisions
 *Input: Sales from each division (NE,SE,NW,SW)
 *Output: The division with the highest earnings
 ***********************************************************************/
void findHighest(float NEsale,float SEsale,float NWsale,float SWsale){
    //Determine highest sale figures
    if (NEsale>SEsale && NEsale>NWsale && NEsale>SWsale) {
        cout<<"Northeast has the highest quarterly sales";
    } 
    else if (SEsale>NEsale && SEsale>NWsale && SEsale>SWsale) {
        cout<<"Southeast has the highest quarterly sales";
    } 
    else if (NWsale>NEsale && NWsale>SEsale && NWsale>SWsale) {
        cout << "Northwest has the highest quarterly sales";
    } 
    else if (SWsale>NEsale && SWsale>SEsale && SWsale>NWsale) {
        cout << "Southwest has the highest quarterly sales";
    } 
    else {
        cout << "All divisions have equal sales";
    }
}