/******************************************************************************

                             Checkerboard

*******************************************************************************/
/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab4b
Bcheckerboard
*/

#include <iostream>

using namespace std;

int main()
{   
    int width;
    int height;
    int w;
    int s;
    
    cout<<"Please enter a width "<<endl;
    cin>>width;
    cout<<"Please enter a height "<<endl;
    cin>>height;
    
    if(width%2!=0){
    w = (width+1)/2;
    s= w-1;   
    }else if(width%2==0){
        w= width/2;
        s=w;
    }
    
    for(int i=0;i<height;i++){
        if(i%2!=0){
            cout<<" ";
            for(int j=0;j<s;j++){
                cout<<"*"<<" ";
            }
    }else{
        
        
        for(int j=0;j<w;j++){
            
            cout<<"*"<<" ";
        }}
        cout<<endl;
    }
    

    return 0;
}