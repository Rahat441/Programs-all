/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>

using namespace std;

int main()
{   
    int i=0;
    int v=0;
    int myData[10];
    for(int j=0;j<10;j++){
        myData[j]= 1;           //array with 1
}
    do{
        for(int j=0;j<10;j++){      //comments
        cout<<myData[j]<<' ';
        }
        cout<<endl;
        
        
        cout<<"please enter a index ";      //comments
        cin>>i;
        cout<<"please enter value";         //comments
        cin>>v;
        
        if((i>=0)&&(i<10)){
            myData[i]=v;
        }
        
    } while (i>=0&&i<10);
    
    return 0;
}