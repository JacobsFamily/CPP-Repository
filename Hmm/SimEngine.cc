#include "SimEngine.h"
#include <vector>
#include <iostream>
#include <iomanip>

SimEngine::propagate(std::vector <Ball&> objects)
{
  for (int i=0;i<objects.size();i++)
  {
    objects[i].pos.x += object[i].vel.x * dt;
    objects[i].pos.y += object[i].vel.y * dt;
    objects[i].vel.z += (netForce.y/objects[i].mass) * dt;
    objects[i].pos.z += object[i].vel.z * dt;
  }
}

SimEngine::collide(Ball& thisBall, Ball& thatBall)
{
}

SimEngine::bounce(Ball& ball, Wall& wall)
{

}
