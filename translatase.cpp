/******************************************************************************
Rahat Bhuiyan 
Maryash 
Compsci 135 
Project 2A 
Converts rna to amnino 

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


string dictionary_read(ifstream &dict, string searchkey) 
{
	string key, value;
	dict.clear(); 
	dict.seekg(0);
	while (dict >> key >> value) 
		{
			if (searchkey.compare(key) == 0) 
				{
					return value;
				}
		}
return "";
}

char DNAbase_to_mRNAbase(char dna)
{
	if(toupper(dna)=='A') 
	{
		return 'U';
	}
	else if(toupper(dna)=='T') 
	{
	return 'A';
	}
	else if(toupper(dna)=='C') 
	{
	return 'G';
	}
	else if(toupper(dna)=='G')
	{
	return 'C';
	}
	else
	{
	return ' ';
	}
}

string DNA_to_mRNA(string input)	//function
{
string output="";

for(int i = 0; i < input.size(); ++i) 		//sfsif
	{
		output=output+DNAbase_to_mRNAbase(input[i]);
	}
return output;		//ssf
}

string get_amino_rep(ifstream &fin, string str) //function
{
	
	string amino, q;
	int start_flag=0;
	for (int i=0; i<(str.size()-2); i=i+3)
		{
			amino = dictionary_read(fin, str.substr(i, 3));	
			q+=amino;		
				if(start_flag == 0 && amino.compare("Met") == 0) 
					{
						start_flag = 1;
						cout << amino;

						continue;
					}

				if(start_flag == 1) 
					{
						if(amino.compare("Stop") == 0) 
							{
							break;				
							}
					cout << "-" << amino;
					}
		}
return q;

}

int main()
{
string AS;
ifstream fin("dna.txt");
ifstream fincodons("codons.tsv");		//function
string strand;
string aa;
	if (fin.fail()) 		//sjsjsis
	{
		cerr << "File dna2b.txt cannot be read, opened, or does not exist.\n";		//function	
		exit(1);
	}
  
	if (fincodons.fail()) 		//ssssksksk
	{
		cerr << "File codons.tsv cannot be read, opened, or does not exist.\n";			//function
	}
	while(getline(fin, strand)) 									
	{
		aa=DNA_to_mRNA(strand);
		size_t found = aa.find("AUG");		//skelleton 
		if (found != string::npos) 														
			{
				AS=get_amino_rep(fincodons, aa.substr(found));		//shel
			} 
		else 
		{
			cout << " - AUG codon not found.";		//function
		}
		cout <<endl;
cout<<AS;
	}
fin.close();
fincodons.close();
return 0;
}
