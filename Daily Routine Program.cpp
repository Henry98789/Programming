/*
*AUTHOR <HENRY MESHACK OKINYI ODONGO>
*DATE   <2018>
*NAME   <My morning routine >
*DESCRIPTION   <User responds to outputted prompts in order to complete the morning routine for getting ready for school>
*ARGUMENTS   <write here>   
*RETURNS   <write here>
*NOTES   <Dear user: follow instructions cautiously and precisely, thanks. Just input through the keyboard the required field asked>
*CHANGE HISTORY <2018>
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char cleanteeth='N';
    int uniformday;
    string wearuniform;
    
    cout<<"\n"<<"### MORNING ROUTINE PROCEDURE ###"<<"\n--Press ENTER to begin procedure--";
    cin.get();//only continues program at the press of the enter key
    
    {
    cout<<"\n"<<"[1] WAKE UP!!!"<<"\n--Press ENTER once you are awake--";
    cin.get();//only continues program at the press of the enter key
        
    cout<<"\n[2] TAKE A SHOWER"<<"\n--Press ENTER once you have finished taking a shower--";
    cin.get();
        
        
    
    //To wear or not to wear your uniform today
    cout<<"\n>>QUESTION: Is it uniform day?"<<"\n--Press '1' for yes... Press '0' for no--"<<endl;
    cin>>uniformday;  
    }
    
    {if (uniformday ==1)
        wearuniform="\n[3] WEAR UNIFORM";
    else 
        wearuniform="\n[3] WEAR CASUAL CLOTHING";
    
    cout<<wearuniform;
    }//end if loop
    
    cin.ignore(); //to allow the continued press of enter key
    
    cout<<"\n--Press ENTER once you are finished dressing up--";
    cin.get();
    
    cout<<"\n[4] PACK SCHOOL BAG"<<"\n--Press ENTER once you have finished packing your bag--";
    cin.get();
    
    cout<<"\n[5] HAVE BREAKFAST"<<"\n--Press ENTER once you have had your breakfast--";
    cin.get();
    
    while (cleanteeth == 'n' || cleanteeth == 'N' )
    {
        cout<<"\n[6] BRUSH YOUR TEETH"<<"\n--Press ENTER once you are done--";
        cin.get();
        //Are teeth clean?
        cout<<"\n>>QUESTION: Are your teeth clean?"<<"\n--Press Y (yes) or N (no)--"<<endl;
        cin>>cleanteeth; //change control variable
        
    }//end while loop
    
    cin.ignore(); //to allow the continued press of enter key
    
    cout<<"\n"<<"[7] GET OUT OF THE HOUSE AND LOCK THE DOOR"<<"\n--Press ENTER if you are outside your house and have already locked the door--";
    cin.get();
    
    cout<<"\n[8] HEAD TO SCHOOL."<<endl;
    
    return 0;
}