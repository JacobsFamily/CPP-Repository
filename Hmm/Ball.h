/*
 * Ball.h
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#ifndef BALL_H_
#define BALL_H_
#include "Vec.h"

	struct Ball
	{
		Ball(int inNum,
				Vec inPos,
				Vec inVel);
		Ball(int inNum,
			double inX,
			double inY,
			double inZ,
			double inVX,
			double inVY,
			double inVZ);
		int Num;
        Vec pos;
        Vec vel;
	};



#endif /* BALL_H_ */
