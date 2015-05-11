/*
 * LotteryQuadruplet.cc
 *
 *  Created on: Apr 18, 2014
 *      Author: owner
 */

#include "LotteryQuadruplet.h"

NBALottery::Quadruplet::Quadruplet()
{
	num[0]=0;
	num[1]=0;
	num[2]=0;
	num[3]=0;
}

NBALottery::Quadruplet::Quadruplet(int a, int b, int c, int d)
{
	num[0]=a;
	num[1]=b;
	num[2]=c;
	num[3]=d;
}
NBALottery::Quadruplet::~Quadruplet(){}

