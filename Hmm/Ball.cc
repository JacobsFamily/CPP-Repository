/*
 * Ball.cc
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#include "Ball.h"

Ball::Ball(int inNum, double inMass, double inX, double inY, double inZ, double inVX, double inVY, double inVZ):
           Num(inNum),
           mass(inMass),
  	       pos(inX,inY,inZ),
  	       vel(inVX,inVY,inVZ)
{}

Ball::Ball(int inNum, double inMass, Vec inPos, Vec inVel):
	   Num(inNum),
	   mass(inMass),
	   pos(inPos),
	   vel(inVel)
{}
