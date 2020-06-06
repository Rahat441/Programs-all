/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab4e
Lower Triangle

*/

#include <iostream>

using namespace std;

int main()		//labels
{
    int size;
    cout<<"Please enter size \n";	//print out
    cin>>size;
    int s=size;
    for (int i=0; i<s;i++){		//for Loop
        
        for(int j=0;j<size;j++){
            cout<<"*";}
            cout<<endl;		//endline
            
            for(int x=0;x<=i;x++){		// for loop 
                
                cout<<" ";
            
        }
        
        
       
        
        size=size-1;			//size
    }

    return 0;
}
