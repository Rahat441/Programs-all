/******************************************************************************

                              Calculator project 1 d

*******************************************************************************/

 //Author: Rahat Bhuiyan
//Course: CSCI-135
//Instructor:  	Minh Nguyen
//Assignment: Project D
#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    char change;
    //Help stores the numbers, so you can keep adding it
    int s;
    bool stat = true;
    cin >> s;
    sum += s;
    //The int that grabs the data from the txt so you can add it to the sum
    while(cin >> change)
    //Keeps on going while the function is true
         {
             if (change == '^')
             {
                 stat ? sum += s*s-s : sum -= s*s-s;
                 //Checks if it's true or false to see if they add it or not
             }
             else if (change == '+')
             {
                cin >> s;
                sum += s;
                stat = true;
             }
             else if (change == '-')
             {
                cin >> s;
                sum -= s;
                stat = false;
             }
             else
             {
                cout << sum << endl;
                sum = 0;
                stat = true;
                cin >> s;
                sum += s;
                //End the line and make sum = to zero again
             }
         }
    //Returns the total
return 0;
}