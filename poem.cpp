//Rahat Bhuiyan
//CS135
//poem


#include <iostream>
using namespace std;

string * createAPoemDynamically() {		//rebel 
    string *p = new string;
    *p = "Roses are red, violets are blue";		//rebel
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();

        // assume that the poem p is not needed at this point
        delete p;
    }		//titit
}