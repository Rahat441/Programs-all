/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <iostream>
#include <cmath>
using namespace std;

class Coord3D {
public:
    double x;
    double y;
    double z;
};

class Particle{
    public:
        Coord3D position,velocity;
};

Particle* createParticle(double x, double y, double z, 
                         double vx, double vy, double vz){
                             Particle newParticle= new Particle;
                             
                             (newParticle->position).x=x;
                             (newParticle->position).y=y;
                             (newParticle->position).z=z;
                             
                             (newParticle->velocity).vx=vx;
                             (newParticle->velocity).vy=vy;
                             (newParticle->velocity).vz=vz;
                            return newParticle;
                             
                         }
                         
void setVelocity(Particle *p, double vx, double vy, double vz){
    (p->velocity).x=vx;
    (p->velocity).y=vy;
    (p->velocity).z=vz;
    
}          
Coord3D getPosition(Particle *p){
    return p->position;
}
void move(Particle *p, double dt){
    (p->position).x+=(p->velocity).x *dt;
    (p->position).y+=(p->velocity).y *dt;
        (p->position).z+=(p->velocity).z *dt;
}
void deleteParticle(Particle *p)
{
    delete p;
}
                         
int main() {
    // make new particle
    Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    while(time < 3.0) {
        // update its velocity
        setVelocity(p, 10.0 * time, 0.3, 0.1);

        // move the particle
        move(p, dt);
        time += dt;

        // reporting its coordinates
        cout << "Time: " << time << " \t";
        cout << "Position: "
             << getPosition(p).x << ", "
             << getPosition(p).y << ", "
             << getPosition(p).z << endl;
    }
    // remove the particle, deallocating its memory
    deleteParticle(p);
}
