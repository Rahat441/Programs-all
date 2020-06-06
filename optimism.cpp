/******************************************************************************

 Rahat Bhuiyan 
CS 135
Vector viber 

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;



vector<int>goodVibes(vector<int> v){        //12
    vector<int>result;
    for(int i=0;i<v.size();i++){        //For Loop 
        if(v[i]>0){
            
            result.push_back(v[i]);     //pushback 
            
        }
    }
    return result;      //result 
    
}

int main()
{   vector<int>v={-1,2,3,-4,9,2};
    vector<int>result=goodVibes(v);
    
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }

    return 0;
}
