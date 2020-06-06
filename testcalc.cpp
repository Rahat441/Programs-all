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
    int num =sum;		//initialization
    char c;
    int sumP=0;
    cin>>sum;		//input
    
        while(cin>>c){
        
        if(c=='^'){
            sumP=sum*sum;
        }      //when +
        else if(c=='+'){
            cin>>sum;
            sum = sumP + num;
        }
        else if (c=='-'){	//else if -
            cin>>num;
	    sum-=num;
        }
	else if (c==';'){
	cout<<sum<<sumP<<endl;
	cin>>num;
	sum=num;
    } 
        
}

    //cout<<sum;
 return 0;
 
}