/******************************************************************************

                             Re enter Number 

*******************************************************************************/
//Rahat Bhuiyan 
//rahat.bhuiyan94@myhunter.cuny.edu
#include <iostream>

using namespace std;

int main()
{   int num;
    cout<<"Please enter a number between 0-100"<<endl;	//print
    cin>>num;		//input
    while((num>=100||num<=0)){			//while loop 
        cout<<"re enter number ";
        cin>>num;			// input
        
    }
    cout<<num*num;

    return 0;
}
