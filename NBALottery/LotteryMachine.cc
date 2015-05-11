/*
 * LotteryMachine.cc
 *
 *  Created on: Apr 18, 2014
 *      Author: owner
 */


#include "LotteryQuadruplet.h"
#include "LotteryMachine.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

NBALottery::Machine::Machine()
{
	srand(time(NULL));
}

NBALottery::Machine::~Machine(){}

void NBALottery::Machine::draw(NBALottery::Quadruplet& q)
{

	 //srand(time(NULL));
	for (int i=0;i<4;i++)
	{
		//draw
		q.num[i] = rand()%14;

		//redraw if drew 0
		while(q.num[i]==0)
		{
			q.num[i] = rand()%14;
		}

		//redraw if draw matches previous valid draw or if drew 0
		if(i>0)
		{
			for(int j=0;j<i;j++)
			{
				while((q.num[i]==q.num[j])||(q.num[i]==0))
				{
					q.num[i] = rand()%14;
				}
			}
		}
	}
	drawSort(q);
}

/*
const NBALottery::Quadruplet& NBALottery::Machine::draw()
{

	NBALottery::Quadruplet q;
	for (int i=0;i<4;i++)
	{
		//draw
		q.num[i] = rand()%14;

		//redraw if drew 0
		while(q.num[i]==0)
		{
			q.num[i] = rand()%14;
		}

		//redraw if draw matches previous valid draw or if drew 0
		if(i>0)
		{
			for(int j=0;j<i;j++)
			{
				while((q.num[i]==q.num[j])||(q.num[i]==0))
				{
					q.num[i] = rand()%14;
				}
			}
		}
	}
	drawSort(q);
	return(q);
}
*/
void NBALottery::Machine::drawSort(NBALottery::Quadruplet& q)
{
	std::vector<int> myvector;
	myvector.push_back(q.num[0]);
	myvector.push_back(q.num[1]);
	myvector.push_back(q.num[2]);
	myvector.push_back(q.num[3]);
	std::sort (myvector.begin(),myvector.end());
	for(int i=0;i<4;i++)
	{
		q.num[i] = myvector[i];
	}

}



