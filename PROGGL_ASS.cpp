// Permission to attend Club 'Triple Zero'
#include <iostream>
#include <string>

using namespace std;

bool isfourdigits (string pin)
{
    bool status = true;
    if (pin.length()!=4){
        status=false;
    }
    return status;
}

int main ()
{
    int age;
    int cash;
    string ageEntry, cashEntry, name="";
    char answer[]= "-Triple Zero-";
    
    
    cout<<"What is your age?";
    cin>>age;
    
    if (age > 21 and age<30)
       ageEntry="-ACCESS GRANTED-";
    else if (age<21)
       ageEntry="-ACCESS DENIED-";
    else
       ageEntry="-CHARGING EXTRA 40 DOLLARS-";
    
    cout << "User Status:"<<ageEntry;
       
    
    cout<<"\n"<<"How much money do you have?";
        cin>>cash;
    
    if (cash > 500 and cash<1000)
       cashEntry="-ACCESS GRANTED-";
    else if (cash<500)
       cashEntry="-ACCESS DENIED-";
    else
       cashEntry="-PROCEED TO VIP SECTION-";
    
    cout << "User Status:"<<cashEntry;
    
    cout<<"\n"<<"The name of this club is...";
    cout<<answer;
    
    
    string PIN;
    cout<<"\n"<<"Enter a 4 Digit PIN number: ";
    cin>>PIN; 
    
    if (isfourdigits(PIN)==1)
        cout<<"-PIN Accepted.-";
    else
        cout << "-PIN Denied.-";
    
    float feet, meters;
    cout << "How tall are you in feet?\n";
    cin>> feet;
    
    meters=feet*0.3048;
    
    cout <<feet<< "feet is  " <<meters<<  "meters";
    
    
    cout<<"\n"<<"What is your name (no spacing)? ";
    cin>>name;
    cout<<"Your name is: "<<name<< endl;
    
    return 0;
        
    
}