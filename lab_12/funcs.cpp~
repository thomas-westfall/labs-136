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
#include <math.h>

using namespace std;

double length(Coord3D *p){
  double ans;
  Coord3D a = *p;
  ans = sqrt((a.x * a.x) + (a.y * a.y) + (a.z * a.z));
  return ans;
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2){
  if(length(p1) > length(p2))
    return p1;
  
  else
    return p2;
}

void move(Coord3D *ppos, Coord3D *pvel, double dt){
  ppos->x = ppos->x + (pvel->x * dt);
  ppos->y = ppos->y + (pvel->y * dt);
  ppos->z = ppos->z + (pvel->z * dt);

}

// allocate memory and initialize
Coord3D* createCoord3D(double x, double y, double z){
  Coord3D *ans = new Coord3D;
  ans->x = x;
  ans->y = y;
  ans->z = z;
  return ans;
  
}

// free memory
void deleteCoord3D(Coord3D *p){
  delete p;
}

// dynamically allocate memory for a particle and initialize it
Particle* createParticle(double x, double y, double z, 
                         double vx, double vy, double vz){
  Particle *ans = new Particle;
  ans->pos.x = x;
  ans->pos.y = y;
  ans->pos.z = z;
  ans->vel.x = vx;
  ans->vel.y = vy;
  ans->vel.z = vz;
  return ans;
}

// set its velocity to (vx, vy, vz)
void setVelocity(Particle *p, double vx, double vy, double vz){
  p->vel.x = vx;
  p->vel.y = vy;
  p->vel.z = vz;
}
// get its current position
Coord3D getPosition(Particle *p){
  return p->pos;
}
// update particle's position after elapsed time dt
void move(Particle *p, double dt){
  p->pos.x = p->pos.x + (p->vel.x * dt);
  p->pos.y = p->pos.y + (p->vel.y * dt);
  p->pos.z = p->pos.z + (p->vel.z * dt);
}

// delete all memory allocated for the particle passed by pointer
void deleteParticle(Particle *p){
  delete p;
}
