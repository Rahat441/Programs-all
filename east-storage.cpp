//Rahat Bhuiyan
//rahat.bhuiyan94@myhunter.cuny.edu

#include <iostream>		//including libraries
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
string date;
string given_date;
double eastSt, eastEl, westSt, westEl;

cout<< " enter a date: " << endl;
cin>>given_date;

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
    
    	fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
	if(given_date==date){
	cout << date << " " << eastSt << endl;

	
}	

    
    }
fin.close();
return 0;
}