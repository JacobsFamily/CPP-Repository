#ifndef SIMENGINE_H_
#define SIMENGINE_H_
#include "Force.h"
#include "Ball.h"
#include "Wall.h"

class SimEngine
{
  public:
    propagate(std::vector <Ball&> objects);
    collide(Ball& thisBall, Ball& thatBall);
    bounce(Ball& ball, Wall& wall);
  private:
    Force netForce;
    double dt;
    
};
#endif
