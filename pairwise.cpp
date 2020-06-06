/******************************************************************************

                            Rahat Bhuiyan
                            Cs135
                            Program for adding vectors 

*******************************************************************************/





#include <iostream> 
#include <vector>
using namespace std; 

//Part D: Given vector v1{1,2,3} and v2{4,5}; we need to convert to v2{4, 5, 0} 
vector<int> sumPairWise(vector<int> &v1, vector<int> &v2) 
{
	vector<int> result; 
	int bigger_size; 
	if(v1.size() < v2.size()) 
	{
		bigger_size = v2.size(); 
		for(int i = v1.size(); i < v2.size(); i++) 
		{
			v1.push_back(0);
		}
	} 
	else 
	{ 
		bigger_size = v1.size(); 
		for (int i = v2.size(); i < v1.size(); i++) 
		{ 
			v2.push_back(0);
		}
	} 
	//Calculate the pairwise sum and put them in the 'result' vector
	for(int i = 0; i < bigger_size; i++) 
	{ 
		//int sum; 
		//sum = v1[i] + v2[i]; 
		//result.push_back(sum);
		// ^does the same as below 
		result.push_back(v1[i]+v2[i]); 
	}
	return result;
}

int main() 
{
	vector<int> goku{1, 2, 3}; 
	vector<int> vegeta{4, 5};  

	vector<int> result; 
	result = sumPairWise(goku, vegeta);

	//Printing out vector like we did with arrays. 
	for (int i = 0; i < result.size(); i++) 
	{ 
		cout << result[i] << " ";
	}
	cout << endl; 
	return 0; 
}