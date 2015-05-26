/*
 * Ball.cc
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#include "Ball.h"

Ball::Ball(int inNum, double inX, double inY, double inZ, double inVX, double inVY, double inVZ):
       Num(inNum),
  	   pos(inX,inY,inZ),
  	   vel(inVX,inVY,inVZ)
{}

Ball::Ball(int inNum, Vec inPos, Vec inVel):
	   Num(inNum),
	   pos(inPos),
	   vel(inVel)
{}
