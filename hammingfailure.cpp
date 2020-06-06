/******************************************************************************
Rahat Bhuiyan 
Maryash 
Compsci 135 
Project 2c
Converts  

*******************************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int hamming(string A, string B) {
    int counter=0;
    int p=A.length();
    int s=A.length()-B.length();
    if(s<0){
        p=B.length();
    }
    for (int i=0;i<p;i++){
        if(A[i]!=B[i]){
            counter++;
        }
     }
    return counter;
}

     
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

				if(start_flag == 0 && amino.compare("Met") == 0) 
					{
						start_flag = 1;
						
						
						continue;
					}
					
				if(start_flag == 1) 
					{q+=amino;
						if(amino.compare("Stop") == 0) 
							{
							break;				
							}
					
					}
		}
return q;

}



int main()
{
    int eVo=0;
    string strand,pand,s,p,aa,muta;
string A,B;
    bool flag=true;
ifstream fin("mutations.txt");
ifstream fincodons("codons.tsv");

	if (fin.fail()) 		//sjsjsis
	{
		cerr << "File dna2b.txt cannot be read, opened, or does not exist.\n";		//function	
		exit(1);
	}
	if (fincodons.fail()) 		//sjsjsis
	{
		cerr << "File dna2b.txt cannot be read, opened, or does not exist.\n";		//function	
		exit(1);
	}
 
  
	while(fin){
	if(eVo%2==0){
	    getline(fin, strand);
	s+=strand;
		
	}
	else if(eVo%2!=0){
	    getline(fin, pand);
p+=pand;

	}
	   
 eVo++;
	
 	
}


aa=DNA_to_mRNA(s);
muta=DNA_to_mRNA(p);

		
									
	
		
		size_t found = aa.find("AUG");		//skelleton 
		if (found != string::npos) 														
			{
				A=get_amino_rep(fincodons, aa.substr(found));		//shel
			} 
		else 
		{
			cout << " - AUG codon not found.";		//function
		}

		size_t fund = muta.find("AUG");		//skelleton 
		if (fund != string::npos) 														
			{
				B=get_amino_rep(fincodons, muta.substr(fund));		//shel
			} 
		else 
		{
			cout << " - AUG codon not found.";}		//function
		

		
				//shel
	
int n=hamming(A,B);
if(n<1){cout<<n<<" no";}
else{cout<<n<<" Yes";}	

  	  
		
	

fin.close();
fincodons.close();
return 0;

}


