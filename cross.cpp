

/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab4c
Cross maker
*/

#include <iostream>

using namespace std;

int main()
{   
    int s;
    
    cout<<"Please enter a width "<<endl;		//print statement
    cin>>s;
    
    
    for(int i=0;i<s;i++){
        
        for(int j=0;j<s;j++){
            if(i==j || j==s-1-i){
            cout<<"*";			//print star
            
        }
        else{		//else statement
            cout<<" ";
        }
       
            
    }
    cout<<endl;
    }
     

    return 0;
    
}