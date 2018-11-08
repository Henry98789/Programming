//User Profile 
#include <iostream>
#include <string>

using namespace std;

int main ()
{
    string name="", birthdate="", email="", phone="", address="";
    
    cout<<"\n NAME (Full name): ";
    getline (cin, name);
    
    cout<<"\n Hello, "<<name; 
    cout<<", please proceed to fill in the below information" <<endl;
    
    cout<<"\n BIRTHDATE (Ex: MMM-DD-YYYY): ";
        cin>>birthdate;
    
    cout<<"\n EMAIL (Ex: henrym@gmail.com): ";
        cin>>email;
    
    cout<<"\n PHONE (Ex: 09XXXXXXXXX): ";
        cin>>phone;
    
    cout<<"\n Address: ";
        getline (cin, address);
    cin.ignore();
    
    return 0;
     
}