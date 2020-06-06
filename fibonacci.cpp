/******************************************************************************

                           fibonacci 
                           

*******************************************************************************/

//Rahat Bhuiyan 
//rahat.bhuiyan94@myhunter.cuny.edu
#include <iostream>

using namespace std;

int main()
{   
    int fib[60];            //initialize

    fib[0] = 0;
    fib[1] = 1;
    cout<<fib[0]<<endl<<fib[1]<<endl;
   for(int i=2; i<60;i++){          //for loop
      fib[i]=fib[i-1]+ fib[i-2];        //statment
      cout<<fib[i]<<endl;       //printer
   }


    return 0;
}