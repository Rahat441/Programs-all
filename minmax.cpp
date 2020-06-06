// Escalation finder

// Rahat Bhuiyan
// rahatulalam.bhuiyan94@myhunter.cuny.edu
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){

float min=1000;		//float
float max=0;		//float


string date;		//string variable

double eastSt, eastEl, westSt, westEl;		//initiatialization


ifstream fin("Current_Reservoir_Levels.tsv");
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
	if(eastSt<min){
	min=eastSt;
}
	if(eastSt>max){
	max=eastSt;
}
	

	
}
	cout<< "minimum is :"<<min<<endl;
	cout<< "Maximum is :"<< max;	

    
    
fin.close();
return 0;
}