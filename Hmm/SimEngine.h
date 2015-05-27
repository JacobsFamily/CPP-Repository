/*
 * SimEngine.h
 *
 *  Created on: May 26, 2015
 *      Author: owner
 */

#ifndef SIMENGINE_H_
#define SIMENGINE_H_

#include "Force.h"
#include "Ball.h"
#include <vector>

class SimEngine
{
  public:
	SimEngine(double startTime, double endTime, double step, const std::vector<Force> forces);
	~SimEngine();
    void propagate(std::vector<Ball> &objects);
    void collide(Ball& thisBall, Ball& thatBall);
  private:
    double dt;
    double t0;
    double tf;
    double t;
    Force netForce;
};



#endif /* SIMENGINE_H_ */
