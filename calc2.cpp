/******************************************************************************

                              Calculator project 1 c

*******************************************************************************/
//Rahat Bhuiyan
//rahat.bhuiyan95@myhinter.cuny.edu
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
	else if (c==';'){
	cout<<sum<<endl;
	sum = 0;
	sum+=num;
}
    }
    
 return 0;
 
}
