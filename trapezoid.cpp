/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab4f
Lower Triangle

*/
#include <iostream>

using namespace std;

int main()
{
    int size;
    int s;
    int i;
    cout<<"Please enter size \n";
    cin>>size;
    cout<<"Please enter height \n";
    cin>>s;
    if((s%2==0)&&(size%2!=0)){  
        if(s>(size/2)){
            cout<<"impossible shape ";
        }
        else { 
            for (int i=0;i<s;i++){          //for 
        
        for(int j=1;j<size;j++){        //for loop 
            cout<<"*";
            
        }
        
        cout<<"*"<<endl;
            
            for(int x=0;x<=i;x++){      //for loop 
                
                cout<<" ";
        }
        
    size=size-2;
    }}
        
                                                    // if else for imp shape
        
    }
    if((s%2!=0)&&(size%2==0)){
        if(s>(size/2)){
            cout<<"impossible shape ";}
        else {
            for (int i=0;i<s;i++){          //for 
        
        for(int j=1;j<size;j++){        //for loop 
            cout<<"*";
            
        }
        
        cout<<"*"<<endl;
            
            for(int x=0;x<=i;x++){      //for loop 
                
                cout<<" ";
        }
        
    size=size-2;
    }
        }
            
        }
    else {
    for (int i=0;i<s;i++){          //for 
        
        for(int j=1;j<size;j++){        //for loop 
            cout<<"*";
            
        }
        
        cout<<"*"<<endl;
            
            for(int x=0;x<=i;x++){      //for loop 
                
                cout<<" ";
        }
        
    size=size-2;
    }
        
    }

    return 0;
}