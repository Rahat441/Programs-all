/******************************************************************************
Rahat Bhuiyan 
Maryash 
Compsci 135 
lab 7A 
string space remove 

*******************************************************************************/
#include <iostream>
#include <cctype>
using namespace std;

string removeLeadingSpaces(string line){
    string new_line="";
    bool space_not_found = false;
    
    for(int i=0;i<line.length();i++){		//what
        if(!isspace(line[i])){
            space_not_found=true;
        }
        if(space_not_found){
            new_line=new_line+line[i];		// lets finish 
        }
    }
    return new_line;
    
}
int main()
{
    string s;

   while(getline(cin,s)){
       cout<< removeLeadingSpaces(s)<<endl;
   }
   

    return 0;
}
