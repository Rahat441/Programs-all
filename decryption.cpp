/*
Author: your Rahat Alam Bhuiyan
Course: CSCI-136
Instructor: their Maryash
Assignment: title, e.g., Lab6D

Ceaser Cypher 
*/

#include <iostream>
#include <cctype>
using namespace std;
char decChar(char c,int rshift);

string decryptVigenere(string ciphertext, string s){    //decryptVigenere 
    string p;
    char n;
    for(int i=0;i<ciphertext.length();i++){		// comments
        int rs=0;
        
        char c=ciphertext[i];
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
        n=decChar(c,rs);
        p+=n;
    }
    return p;
}
    

char decChar(char c,int rshift){        //de cyphers 
    int y=(int)c;
    int x=(int)c-rshift;
    if(y>=32&&y<=64){
        return c;
    }
    if(isupper(c)){
        if (x < 65)     //IF Capital and 
         {
             x = (x+26);
             c=(char)x;
         }
         else{
             	
             c=(char)x;		//variable
         }
     }
     else if (islower(c)){
         if (x < 97)     //IF Capital and 
        {            x = (x+26);
             c=(char)x;
         }
         else{
             c=(char)x;
         }
     }
     return c;
    
    
}
string decryptCaesar(string ciphertext, int rshift){
    char c,n;
    string decyphered;
    for(int i=0;i<ciphertext.length();i++){
        c=ciphertext[i];
        n=decChar(c,rshift);
        decyphered+=n;
 }
    return decyphered;
}

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
        {            x = (x-26);
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
string s;
string r;
getline(cin,s);
cin>>r;
string p= encryptVigenere(s, r);
cout<<p<<endl;
cout<<decryptVigenere(p,r);
return 0;
}