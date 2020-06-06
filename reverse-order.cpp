//Rahat Bhuiyan
//rahat.bhuiyan94@myhunter.cuny.edu

#include <iostream>		//including libraries
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
string date;
string s_date;
string e_date;

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

string days[365];
double w_days[365];
int counter=0;

while(fin >> date >> eastSt >> eastEl >> westSt >> westEl) { 
    // this loop reads the file line-by-line
    // extracting 5 values on each iteration 
    
    	fin.ignore(INT_MAX, '\n'); //skips to the end of line, 
                          //ignorring the remaining columns 
        days[counter]=date;
        w_days[counter]=westEl;
        counter++;
}
	for(int i=counter-1;i>=0;i--){
	    if((days[i]>=s_date)&&(days[i]<=e_date)){
	    cout<<days[i]<<" "<<w_days[i]<<endl;
	}}
        
    
    
fin.close();
return 0;
}