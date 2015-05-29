/*
 * Vec.cc
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#include "Vec.h"
#include <cmath>

Vec::Vec(double inX, double inY, double inZ)
    :x(inX),
     y(inY),
     z(inZ)
{}

Vec::Vec(const Vec& inVec)
    :x(inVec.x),
     y(inVec.y),
     z(inVec.z)
{}

Vec::~Vec()
{}

double Vec::length()
{
   return sqrt(x*x + y*y + z*z);
}

Vec Vec::unit()
{
   return Vec(x/length(), y/length(), z/length());
}
