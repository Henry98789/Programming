/*
*AUTHOR          <HENRY MESHACK OKINYI ODONGO
*DATE            <26 JULY 2018>
*NAME            <HUMAN INTELLIGENCE RANDOM TEST>
*DESCRIPTION     <A program allowing user to input his or her data through the use of a             keyboard in response to prompt instructions in order to find out whether the user understand basic instructions given through screen. Instructions are mainly based on the user's input>
*ARGUMENTS       <"None">
*RETURNS         <"None"> 
*NOTES           <Dear user: follow instructions cautiously and precisely, thanks>
*CHANGE HISTORY  <(Null as of now)>
*/

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool isfourdigits (string pin)
{
        bool status = true;
        if (pin.length()!=4){
            status=false;
        }
        return status;
}

double KineticEnergy(int m, int v);

int main()
{
    int feet;
    int inches;
    int age;
    string ageEntry;
    
    
    cout << "Type two integers separated by one or more spaces: ";
    cin >> feet >> inches;
    cout << endl;
    
    cout << "Feet= " << feet << endl;
    cout << "Inches= " << inches << endl;
    
    cout << "Greetings...\n";
    cout << "My name is Henry Odongo.";
    
        
    cout<<"What is your age?";
    cin>>age;
    
    if (age >= 18 and age<60)
       ageEntry="-YOU ARE AN ADULT-";
    else if (age<18)
       ageEntry="-YOU ARE NOT AN ADULT-";
    else
       ageEntry="-YOU ARE QUITE OLD-";
    
    cout << "User AGE:"<<ageEntry;
    
        

        
{   float feet, meters;
    
    cout << "How tall are you in feet?\n";
    cin>> feet;
    
    meters=feet*0.3048;
    
    cout <<feet<< "feet is  " <<meters<<  "meters";
    }
    
    
    string PIN;
    
    cout<<"\n"<<"Enter a 4 Digit PIN number: ";
    cin>>PIN; 
    
    if (isfourdigits(PIN)==1)
        cout<<"-PIN Accepted.-";
    else
        cout << "-PIN Denied.-";
    
    
       
    double ke = 0; //kinetic energy
    int m = 0; //mass
    int v = 0; //velocity
    
    cout <<"Please enter mass in kilograms";
   cin >> m;
    cout <<"Please enter velocity in meters per second";
    cin >> v;
        
        ke = KineticEnergy(m, v);
        cout <<"\nThe Kinetic Energy of this object is " << ke << " Joules" <<endl;
        
        return 0;
}        

        double KineticEnergy(int m, int v)

{ 
    
    return (0.5 * m) * (pow(v,2));
    
}