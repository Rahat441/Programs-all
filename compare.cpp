/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab3C
Compares elevation 
*/

#include <iostream>		//including libraries
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
string date;
string s_date;
string e_date;
bool stat=false;
double eastSt, eastEl, westSt, westEl;

cout<< " enter s date: " << endl;
cin>>s_date;
cout<< " enter e date: " << endl;
cin>>e_date;

ifstream fin("Current_Reservoir_Levels.tsv");		//comments
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); // exit if failed to open the file
}
string junk;        // new string variable
getline(fin, junk); // read one line from the file 
while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    	fin.ignore(INT_MAX, '\n');
    
   if ((date>=s_date)&&(date<=e_date)){ 	   
	
	    
	if(eastEl>westEl){
	    cout<<date<<" "<<" East is higher"<<endl;
	}
	else if(westEl>eastEl){
	    cout<<date<<" "<<"West is higher"<<endl;
	}
	else if (westEl==eastEl){
	    cout<<date<<" "<<"equal\n";
	 }
       
   }
	 if(date==e_date){
	     break;
	 }

}
fin.close();
return 0;
}