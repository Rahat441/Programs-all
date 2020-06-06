/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{   
    int price;
    int fuel_efficiency;
    int number_of_gas;
    cout<<"Numbers of Gallons of gas in the tank";
    cin>>number_of_gas;
    cout<<"Fuel efficiency";
    cin>>fuel_efficiency;
    cout<<"Price of Gas Per gallon";
    cin>>price;
    
    int cost_per100= (price*number_of_gas)/100;
    int distance=number_of_gas/fuel_efficiency;
    
    cout<<cost_per100;
    cout<<distance;
    
    
    
    return 0;
}
