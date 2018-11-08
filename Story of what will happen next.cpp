/*
*AUTHOR <HENRY MESHACK OKINYI ODONGO>
*DATE   <1 SEPTEMBER 2018>
*PROJECT   < Create a program of a story (any plot whatsoever) with choices of what will happen next.>
*DESCRIPTION   <User chooses outcomes to determine the situations to take place in the story. This is done by pressing a corresponding number to a certain desired choice.>
*NOTES   <Dear user: follow instructions cautiously and precisely, thanks. Just input through the keyboard the required field asked>
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name="", outcome1, outcome2;
    int action1, action2;
    
    cout<<"THE SLEEPLESS NIGHT";
    cout<<"\n--->Please type your female character's first name to begin the story: ";
    cin>>name; //this name is used throughout the entire story
    
    cout<<"\nWhistling winds and crackling tree branches. That night was not the perfect night for "<<name;
    cout<<" to step outside. It was very late and "<<name;
    cout<<" couldn't seem to feel sleepy at all. Minutes went by, and she still stood by the bedroom window, gazing out into the partial darkness. She did everything she could to fall asleep but nothing worked.";
        
    //choose for action1
    cout<<"\n\nWHAT SHOULD HAVE "<<name;
    cout<<" DONE TO ENSURE A GOODNIGHT SLEEP? [Press the corresponding number beside your choice to continue the story"<<"\n--->1 - Read a book until asleep "<<"\n--->2 - Watch TV for a while till asleep"<<endl;
    
    cin>>action1;
    

       {if (action1 == 1)//if loop for action1
            outcome1="\nShe decided to read Harry Potter and the Philosopher's Stone, one of her long-time favourite novels. Although she¡¯s read the book for the fifth time in her life, she still found it thrilling to read again and again. Sitting on her bed and reading was so comfortable, she was enjoying herself. But after reading a few chapters she had already gotten bored.";
        else
        outcome1="\nShe decided to watch a few more episodes of The Flash series, one of her long-time favourite shows. Sitting on her bed and gluing her eyes to the TV screen was so comfortable, she was enjoying herself. Although she¡¯s watched the series for years, she still found it thrilling because the plot kept getting better and better. But after watching a few more episodes she became bored.";
        
        cout<<outcome1;
        }
    
    cout<<" She felt tired and decided to tuck into her bed sheets and finally get to sleep. But then she noticed that her window was still open.";
    
    //choose for action1
    cout<<"\n\nWHAT SHOULD HAVE "<<name;
    cout<<" DONE NEXT? [Press the corresponding number beside your choice to continue the story"<<"\n--->1 - Gotten out of bed and closed the window "<<"\n--->2 - Stayed in bed and just closed her eyes"<<endl;
    
    cin>>action2;
    

       {if (action2 == 1)//if loop for action1
            outcome2="\nShe looked up at the moon one last time before shutting the windows. She let out a loud yawn and walk back towards her bed. Slipping her legs first inside the comfy sheets, she finally placed her head onto the pillow, as if she were an ant burying its head inside a marshmallow. She tried to fall asleep but couldn¡¯t because the windows were shut and the room became very hot.";
        else
        outcome2="\nShe was too tired to get up from her comfortable posture in bed just to close the windows, so she left it open. The gentle winds from outside provided some fresh air and she was able to sleep well.";
        
        cout<<outcome2;
        }
    
    cout<<"\n\nThe End."<<endl;

    return 0;
}