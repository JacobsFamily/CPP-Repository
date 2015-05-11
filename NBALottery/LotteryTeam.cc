/*
 * LotteryTeam.cc
 *
 *  Created on: Apr 18, 2014
 *      Author: owner
 */

#include "LotteryTeam.h"

NBALottery::Team::Team()
{
   Seed = 0;
   Tickets.resize(0);
   teamName = "Undefined Team";
}

NBALottery::Team::Team(int inSeed)
{
   Seed = inSeed;
   Tickets.resize(0);
   teamName = "Undefined Team";
}
NBALottery::Team::~Team(){};

void NBALottery::Team::setSeed(int seed )
{
	Seed = seed;
}

void NBALottery::Team::setName( const std::string& name)
{
	teamName = name;
}


void NBALottery::Team::addTicket(const Quadruplet& q)
{
	Tickets.push_back(q);
}

const int& NBALottery::Team::getNumTickets()
{
	return Tickets.size();
}

const int& NBALottery::Team::getSeed()
{
	return Seed;
}

bool NBALottery::Team::match(const NBALottery::Quadruplet& q)
{
	for(int i=0;i<Tickets.size();i++)
	{
		if(Tickets[i] == q)
		{
			return true;
		}
	}

	return false;
}
