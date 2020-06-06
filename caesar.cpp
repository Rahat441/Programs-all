/*
Author: your Rahat Alam Bhuiyan
Course: CSCI-136
Instructor: their Maryash
Assignment: title, e.g., Lab6B

Ceaser Cypher 
*/

#include <iostream>
#include <cctype>
using namespace std;
char shiftChar(char c, int rshift){		// function to shift
    int y=(int)c;
    int x = (int)c+rshift; 
    if(y>=32&&y<=64){
        return c;
    }
   
    if(isupper(c)){
        if (x > 90)     //IF Capital and 
         {
             x = (x-26);
             c=(char)x;
         }
         else{
             	
             c=(char)x;		//variable
         }
     }
     else if (islower(c)){
         if (x > 122)     //IF Capital and 
         {
             x = (x-26);
             c=(char)x;
         }
         else{
             
             c=(char)x;
         }
     }
         
     
         
         return c;
}

string encryptCaesar(string plaintext, int rshift){	//ano
    char n;
    string s;
    for(int i=0;i<plaintext.length();i++){	//for loop 
        char c=plaintext[i];
        n=shiftChar(c,rshift);
        s+=n;
    }
    return s;
}

int main() {
string s;
int r;
cin>>s;
cin>>r;
    cout << encryptCaesar(s, r);
return 0;
}

