/*
 * Main.cc
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#include "Ball.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	Vec position(1.0, 2.0, 3.0);
	Vec velocity(4.0, 5.0, 6.0);
	Ball aBall(14,1.0,position, velocity);

	cout << " this ball's number is: " << aBall.Num << endl;
	cout << " this ball's Y velocity is: " << aBall.vel.y << endl;
	return 0;
}
