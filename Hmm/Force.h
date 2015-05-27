/*
 * Force.h
 *
 *  Created on: May 26, 2015
 *      Author: owner
 */

#ifndef FORCE_H_
#define FORCE_H_

#include "Vec.h"
struct Force
{
  Force(double mag, Vec dir);
  double magnitude;
  Vec unitDirection;
};


#endif /* FORCE_H_ */
