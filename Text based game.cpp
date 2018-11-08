/*
*AUTHOR <HENRY MESHACK OKINYI ODONGO>
*DATE   <2018>
*NAME   <Text based game with loops and sound>
*DESCRIPTION   <User responds to outputted prompts in order to complete the story in order to reach a happy ending... or not.>
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
        {char sleep='Y', fight='Y';
        int s1, s2, s3, s4, s5, x;
        string name="", o1, o2, o3, o4, o5;
    
    cout<<"\n"<<"### ESCAPE FROM THE BEAST ###"<<"\n--Press ENTER to begin story--";
        cin.get();//only continues program at the press of the enter key 
    
    cout<<"\n"<<"Introduction: A princess has been trapped in an old and abandoned house. Choosing a series of actions, you must find the best way to escape certain life-threatening scenarios within the creepy house. Choosing one, may lead to the princess¡¯s death while choosing another may save her life. Will you be able to escape the horrific encounters while navigating the spooky house? \n\n[PRESS ENTER TO CONTINUE...]";
    
    cin.get();
    
    cout<<"\n\nFor all scenarios either: enter the numbers '1' or '2' or '3'... or press letters 'Y' for yes or 'N' for no... depending on the required and desired action.";
    
    cout<<endl<<"\nThe adventure awaits...";
    
        cout<<"\n--->Please type in the princess's name to begin the story: ";
    cin>>name; //this name is used throughout the entire story

    
    cout<<"\n\nPrincess "<<name<<" wakes up, opens her eyes and discovers that she is all alone in a dark room. She finds herself on top of a rather stuffy and uncomfortable old bed. She can¡¯t clearly see as the room is too dark.";
}
    
        while (sleep == 'y' || sleep == 'Y' )
    {
        cout<<"\nShe tries to go back to sleep, thinking it¡¯s her room back at her kingdom. But the air is colder than usual. Her body starts to shiver. "<<"\n--Press ENTER to continue--";
        cin.ignore();
        cin.get();
        //Are teeth clean?
        cout<<"\n>>QUESTION: Should Princess " <<name<<" continue sleeping?"<<"\n--Press Y (yes) or N (no)--"<<endl;}
        cin>>sleep; //change control variable
        
    //end while loop

    cin.ignore();//allow the press of the enter key
    
    //Program continues
    
    cout<<"\nWhat should Princess "<<name<<" do now? \n\n[1]She gets up from bed? \n[2]Goes back to sleep \n[3]Screams for help (and your decion is... ";
    
        ptintf
        
        if (s1 == 1)
             o1="\nFeeling scared and confused, (n=name) gets up from the bed slowly and walks around the room with caution. ¡°Where is the light switch?¡± she asks herself as she desperately feels the walls of the room for the switch. She finally feels the switch on her fingertips.";
    else if (s1 == 2)
             o1="\nShe tries to go back to sleep, thinking it¡¯s her room back at her kingdom. But the air is colder than usual. Her body starts to shiver..";
    else if (s1 == 3)
             o1="\nShe tries to go back to sleep, thinking it¡¯s her room back at her kingdom. But the air is colder than usual. Her body starts to shiver..";
        
        else 
        o1=\n"Given that the Princess decided not to do anything, a Monster suddenly appears beside her and pierces her stomach and rips it open. \n\nTHE PRINCESS IS DEAD. THE END.";
        return 0;}
        
    //end if loop

    cout<<"\n\nPrincess "<<name<<" feels the light switch but hesitates to turn it on. She is very anxious but desperate to see what she thinks is her room.";
    
    
    
    return 0;}