#include <iostream>
#include <math.h>

//Calculating the force between two bodies;

using namespace std;

double Force(int m1, int m2, int d, float k);

int main ()    

{
    double f = 0; //force
    int m1 = 0; //mass of first body
    int m2 = 0; //mass of second body
    int d = 0; //distance between the bodies
    float k=0.0000000667; //gravitational constant
    
    cout <<"Please enter mass of first object (in grams)";
   cin >> m1;
    cout <<"Please enter mass of second object (in grams)";
    cin >> m2;
   cout <<"Please enter the distance between the two objects (in meters)";
    cin >> d;
    
        
        f = Force(m1, m2, d, k);
        cout <<"\nThe Force between the bodies is " << f << " Newtons" <<endl;
        
        return 0;
}        

        double Force(int m1, int m2, int d, float k)

{ 
    
    return k*(m1*m2)/(pow(d,2));
    
}