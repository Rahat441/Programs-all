/*Rahat Bhuiyan
Csi 135
lab 9A 3d */

#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};
double length(Coord3D *p){      //comment 
    return sqrt(pow(p->x,2)+pow(p->y,2)+pow(p->z,2));
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){      //what 

                                    
    if(length(p1)>length(p2)){      //rebell
        return p1;
    }else{return p2;}       //whatatatatetes
}
void move(Coord3D *ppos, Coord3D *pvel, double dt){		//danddyyyy
    ppos->x=ppos->x+(pvel->x*dt);
    ppos->y=ppos->y+(pvel->y*dt);
    ppos->z=ppos->z+(pvel->z*dt);
}

int main() {

     Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};		//rebel 

    cout << fartherFromOrigin(&pointP,&pointQ);		//what 
    // would print 37.4166
}