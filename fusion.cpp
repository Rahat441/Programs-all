/******************************************************************************

                            Rahat Bhuiyan
                            Cs135
                            Program for fussion of vectors

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;



void gogeta(vector<int> &goku, vector<int> &vegeta){//add lines

    for(int i=0;i<vegeta.size();i++){
        goku.push_back(vegeta[i]);      //MAIN FUSION MAKER 

        
    }
    vegeta.clear();         //DESTROYER
    
}


int main()
{   vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<endl;
    }

    return 0;
}
