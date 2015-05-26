/*
 * Vec.cc
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#include "Vec.h"

Vec::Vec(double inX, double inY, double inZ):
	x(inX),
	y(inY),
	z(inZ)
{}

Vec::Vec(const Vec& inVec):
	x(inVec.x),
	y(inVec.y),
	z(inVec.z)
{}
