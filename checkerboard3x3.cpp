/******************************************************************************

                             Box maker

*******************************************************************************/
/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab4g
BCheckerd board
*/

#include <iostream>

using namespace std;

int main()
{   
    int width;
    int height;
    
    cout<<"Please enter a width "<<endl;
    cin>>width;
    cout<<"Please enter a height "<<endl;
    cin>>height;
    
    for(int i=0;i<height;i++){
        
        for(int j=0;j<width;j++){
            if(((((i/3)%2==1)) && ((j/3)%2==1))||((i/3)%2==0)&&((j/3)%2==0)){
            
            cout<<"*";
                
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}