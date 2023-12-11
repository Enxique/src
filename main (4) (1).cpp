//Programmer: Enrique Hernandez
//Creation date: 12/10/2023
//Description: Purpose of this program is to create an encrypted message with cesar cipher.

#include <iostream>
#include <string>
#include <ctime>        //*Preprocessor Directives that allows the 
#include <cstdlib>      //*random file to be inserted.
using namespace std;

string Encrypt(string, int);

int main(int argc, char *argv[])
{
    string Source;
    int Key;
    srand(time(0));
 
    //Have the user input any message
    cout<<"Input message, your shift key will be provided: ";
    getline(cin, Source);
    
    //A shift key will automatically be given
    cout<< "Your shift key is " <<(rand() % 10) + 1<<" "<< endl;
    
    //The shift key generated must be inputed by the user
    cout<< "Please input the given key:";
    cin>> Key;
    
    //An encrypted message should outputted
    cout<<"Your Encrypted message is: "<< Encrypt( Source, Key) << endl;
}

string Encrypt(string Source, int Key)
{
    string Crypted = Source; 
    
    //loop for the random shift key generated
   for(int i=0;i<10;i++); 
   
   //As the current character is handled the key is then added to it.
   for(int Current = 0; Current < Source.length(); Current++)
   Crypted[Current] += Key;
   
    return Crypted;
     
}
