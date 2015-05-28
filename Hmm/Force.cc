/*
 * Force.cc
 *
 *  Created on: May 26, 2015
 *      Author: owner
 */
#include "Force.h"

Force::Force(double mag, Vec dir)
      :magnitude(mag),
      unitDirection(dir.unit())
{
}
