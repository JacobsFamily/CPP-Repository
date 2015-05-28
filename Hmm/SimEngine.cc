/*
 * SimEngine.cc
 *
 *  Created on: May 26, 2015
 *      Author: owner
 */

#include "SimEngine.h"
#include <iostream>
#include <iomanip>
#include <cmath>

SimEngine::SimEngine(double startTime, double endTime, double step, const std::vector<Force> forces)
          :t0(startTime),
           tf(endTime),
           dt(step),
           t(startTime),
           netForce(Force(1.0,Vec(1.0,1.0,1.0)))
{
   Vec tempVec(0.,0.,0.);
   double tempMag = 0.0;
   for (int i=0;i< forces.size(); i++)
   {
       tempVec.x += forces[i].unitDirection.x;
       tempVec.y += forces[i].unitDirection.y;
       tempVec.z += forces[i].unitDirection.z;
       tempMag += forces[i].magnitude*forces[i].magnitude;
   }
   netForce = Force(sqrt(tempMag),tempVec.unit());
}

SimEngine::~SimEngine()
{}

void SimEngine::propagate(std::vector<Ball> &objects)
{
  while(t < tf)
  {
    for (int i=0;i<objects.size();i++)
    {
      objects[i].pos.x += objects[i].vel.x * dt;
      objects[i].pos.y += objects[i].vel.y * dt;
      objects[i].vel.z += (netForce.magnitude/objects[i].mass) * dt;
      objects[i].pos.z += objects[i].vel.z * dt;
    }
    t+= dt;
  }
}

void SimEngine::collide(Ball& thisBall, Ball& thatBall)
{
}



