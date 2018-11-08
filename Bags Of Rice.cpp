/*
*AUTHOR <HENRY MESHACK OKINYI ODONGO>
*DATE   <31 JULY 2018>
*PROJECT   <One metric ton is approximately 2205 pounds. Write a program that prompts the user to input  the amount of rice, in pounds, in a bag. The program outputs the number of bags needed to store one metric ton of rice.>
*DESCRIPTION   <User inputs the amount of rice (in pounds) stored in a bag. This program calculates the number of bags needed to store one metric ton of rice.>
*ARGUMENTS   <write here>   
*RETURNS   <write here>
*NOTES   <Dear user: follow instructions cautiously and precisely, thanks. Just input through the keyboard the required field asked>
*CHANGE HISTORY <27 AUGUST 2018>
*/

#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    float pounds = 0;
    float nBagsinTon =0;
    
    cout<<"Enter weight of rice to be placed in each bag (please enter weight in pounds): ";
    cin>>pounds;
    nBagsinTon = 2205/pounds;
    cout<<"\nFor each ton of rice, you will need exactly " <<nBagsinTon<< " bag(s).";
    
    return 0;
    
}