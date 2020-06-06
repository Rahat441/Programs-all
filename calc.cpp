/******************************************************************************

                              Calculator
*******************************************************************************/
//Rahat Bhuiyan
//cs135
#include <iostream>

using namespace std;

int main()
{   
    int sum;		//initialization
    int num;		//initialization
    char c;
    cin>>sum;		//input
    while(cin>>c>>num ){	//when +
        if(c=='+'){
            sum +=num;
        }
        else if (c=='-'){	//else if -
            sum-=num;
        }
    }
    cout<<sum;
 return 0;
 
}
