/*
*AUTHOR <HENRY MESHACK OKINYI ODONGO>
*DATE   <31 JULY 2018>
*PROJECT   <The Given will be inputted by the user. Make a short math problem like the bag of rice.>
*DESCRIPTION   <A soccer ball costs ₱250. A basketball costs ₱330. User inputs number soccer balls to buy as well as number of basketballs to buy. The total cost for each ball to be bought is then calculated by the program.>
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
    float Scost = 0;
    float Bcost = 0;
    float s =0;
    float b =0;

    cout<<"How many soccer balls would you like to purchase? ";
    cin>>s;
    Scost = 250*s;
    
    cout<<"How many basket balls would you like to purchase? ";
    cin>>b;
    Scost = 330*b;
    
    cout<<"\nYou have chosen to buy "<<s<<" soccer balls and " <<b<<" basket balls";
    cout<<"\nTherefore the total cost is ₱"<<Scost+Bcost<<" in cash";

    return 0;
    
}