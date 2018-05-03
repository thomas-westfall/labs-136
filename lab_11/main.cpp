/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 11
Pointers
*/

#include <iostream>
#include "funcs.h"
#include "def.h"
using namespace std;

int main() {
      Coord3D pointC = {10, 20, 30};
      cout <<"Task A: length of point {10,20,30}-"<<endl;
    cout << length(&pointC) << endl; // would print 37.4166
    
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};
    cout << "Task B: fartherfromorigin-"<<endl;
    cout << "Length of P {10, 20, 30}: "<< length(&pointP) <<endl;
    cout << "Length of Q {-20, 21, -22}: "<<length(&pointQ) <<endl;
    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; // So which point is farther?


    
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // struct pos gets changed

    cout << "Task C: Moving the point at {0, 0, 100.0} by {1, -5, 0.2}- "<<endl;
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
    // prints: 2 -10 100.4




        double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);



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

