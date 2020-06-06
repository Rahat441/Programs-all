/******************************************************************************
Rahat Bhuiyan 
Maryash 
Compsci 135 
Project 2A 
Converts DNa to Rna

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdlib>
#include <climits>   
using namespace std;

char DNAbase_to_mRNAbase(char c){		//Function
    if(c=='A'||c=='a'){
        c='U';
        return c;
    }
    else if(c=='T'||c=='t'){
        c='A';
    }
     else if(c=='C'||c=='c'){		//Whatever
        c='G';
    }
     else if(c=='G'||c=='g'){
        c='C';
    }
    return c;
}
int main()
{   
    ifstream fin("dna.txt");
    if (fin.fail()) {		//coment 
        cerr << "File cannot be read, opened, or does not exist.\n";
        exit(1); 		//delete
    }
    char c;
    string strand;
    while(getline(fin, strand)) {
	for(int i=0;i<strand.length();i++){		
       c=strand[i];	//chill
       int toupper(c);
       cout<<DNAbase_to_mRNAbase(c);
	    
	}
    }
    fin.close();

    return 0;
}