/*
Author: Thomas Westfall
Course: CSCI-133
Instructor: Mr. Zamansky
Assignment: Lab 11
Pointers
*/

#include "funcs.h"
#include <iostream>

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

using namespace std;
Coord3D pointC = {10, 20, 30};
Coord3D pointD = {-20, 21, -22};

TEST_CASE("Testing Task A: length"){
  
  CHECK(round(length(&pointC)) == 37.0);
  CHECK(round(length({&pointD})) == 36.1);
 

}

Coord3D pointP = {10, 20, 30};
Coord3D pointQ = {-20, 21, -22};
TEST_CASE("Testing Task B: addminutes"){
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointP);
  CHECK(fartherFromOrigin(&pointP, &pointQ) == &pointQ);

}
TEST_CASE("Testing Task C: timeslot"){
Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};

move(&pos, &vel, 2.0);
 CHECK(pos.x == 2);
 CHECK(pos.y == -10);
 CHECK(pos.z == 100.4);

}
//Task D can't be tested here, so it's ignored
/*
TEST_CASE("Testing Task D: scheduleafter"){
//CHECK(scheduleAfter(ts,nextMovie) == ts);
//  CHECK(scheduleAfter(ts,nextmovie) == ts);
 

}
*/
TEST_CASE("Testing Task E: Creating and deleting objects"){
Coord3D pos = {0, 0, 100.0};
Coord3D vel = {1, -5, 0.2};

 Coord3D *posb = createCoord3D(0,0,100.0);
 CHECK(pos.x == posb->x);
 CHECK(pos.y == posb->y);
 CHECK(pos.z == posb->z);
 

 deleteCoord3D(posb);
}
TEST_CASE("Testing Task F: Particles"){
  Particle *p = createParticle(1.0, 1.5, 2.0, 0.1, 0.2, 0.3);
    double time = 0.0;
    double dt = 0.1;
    setVelocity(p, 10.0 * time, 0.3, 0.1);
    move(p,dt);
    time = time + dt;
    CHECK(getPosition(p).x == 1);
    CHECK(getPosition(p).y == 1.53);
    CHECK(getPosition(p).z == 2.01);
 

 deleteParticle(p);
}
