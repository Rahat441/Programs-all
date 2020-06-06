/*
Author: your Rahat Alam Bhuiyan
Course: CSCI-136
Instructor: their Maryash
Assignment: title, e.g., Lab6c

vigenere.cpp
*/

#include <iostream>
#include <cctype>
using namespace std;

char shiftChar(char c, int rshift){
    int y=(int)c;
    int x = (int)c+rshift; 
    if(y>=32&&y<=64){
        return c;
    }
   		
    if(isupper(c)){			// comments
        if (x > 90)     //IF Capital and 
         {
             x = (x-26);
             c=(char)x;
         }
         else{
             
             c=(char)x;
         }
     }
     else if (islower(c)){
         if (x >= 123)     //IF Capital and 
         {
             x = (x-26);
             c=(char)x;
         }
         else{		// comments
             
             c=(char)x;
         }
     }
         
     
         
         return c;
}
		// comments
string encryptVigenere(string plaintext, string s){
    char n;
    string p;
    
    for(int i=0;i<plaintext.length();i++){		// comments
        int rs=0;
        
        char c=plaintext[i];
        int check=(int)c;
        if((check>=65 &&check<=90)||(check>=97&&check<=122) ){		// comments
        
        for(int l=0;l<1;l++){
        static int j=0;
        if(j>=s.length()){
            j=j-s.length();
        }
        char pass= s[j];
        j++;
        int numP=(int)pass;
        rs= numP-97;
        
        }
            
        }
       
       
        
        n=shiftChar(c,rs);
        p+=n;
    }
    return p;
}

int main() {
    
    string s,k;
    cin>>s;
    cin>>k;
    
cout << encryptVigenere(s,k);
}

