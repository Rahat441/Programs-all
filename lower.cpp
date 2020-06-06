
/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab4d
Lower Triangle

*/
#include <iostream>

using namespace std;

int main()		//main functionalists
{
    int size;		//int
    cout<<"Please enter size \n";		//print	

    cin>>size;
    
    for (int i=0; i<=size;i++){			// for loop 
        for(int j=0;j<i;j++){			//soup
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
