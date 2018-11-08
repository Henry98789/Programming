/*
*AUTHOR <HENRY MESHACK OKINYI ODONGO>
*DATE   <31 JULY 2018>
*NAME   <Quadratic Formula Calculator>
*DESCRIPTION   <User inputs numbers to corresponding variables in order to perform and solve the Quadratic Formula>
*ARGUMENTS   <write here>   
*RETURNS   <write here>
*NOTES   <Dear user: follow instructions cautiously and precisely, thanks. Just input through the keyboard the required field asked>
*CHANGE HISTORY <27 AUGUST 2018>
*/

//Henry's Quadratic Solver

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cout<<"EXAMPLE: If you input the following values... a=1, b=-5 c=6 ... then the x values will be calculated as x1=3 & x2=2"<<endl;
    
    cout<<"Enter the coefficient of 'a' "<<endl;
    cin>>a;
    
    cout<<"Enter the coefficient of 'b' "<<endl;
    cin>>b;
    
    cout<<"Enter the coefficient of 'c' "<<endl;
    cin>>c;
    
    if (a==0.0){
        cout<<"Answer is UNDEFINED "<<endl;
        return 1;
    }
    
    double x1, x2;
    x1=(-b + sqrt((b*b) - 4*a*c))/2*a;
    x2=(-b - sqrt((b*b) - 4*a*c))/2*a;
    
    cout<<endl<<"Therefore, the roots are x1 = " <<x1 <<" and x2 = " <<x2 <<endl;
    
    return 0; 
}