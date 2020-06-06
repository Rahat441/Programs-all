/******************************************************************************
Rahat Bhuiyan 
CS 135
Vector returner 
*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

vector<int> makeVector(int n){

    vector<int>result;
    for(int i=0;i<n;i++){
        result.push_back(i);        // rebel
        
    }
    return result;
    
}


int main()
{
    vector<int>result=makeVector(13);       // vector maker
    
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;      //result printer 
    }

    return 0;
}
