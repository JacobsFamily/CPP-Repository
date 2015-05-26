/*
 * Vec.h
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#ifndef VEC_H_
#define VEC_H_


  struct Vec
  {
	  Vec(double inX,double inY,double inZ);
	  Vec (const Vec& inVec);
	  ~Vec(){};
	  double x;
	  double y;
	  double z;
  };



#endif /* VEC_H_ */
