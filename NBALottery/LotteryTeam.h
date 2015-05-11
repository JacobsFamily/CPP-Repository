/*
 * LotteryTeam.h
 *
 *  Created on: Apr 18, 2014
 *      Author: owner
 */

#ifndef LOTTERYTEAM_H_
#define LOTTERYTEAM_H_
#include <iostream>
#include <vector>
#include <string>
#include "LotteryQuadruplet.h"

namespace NBALottery
{
	class Team
	{
	  public:
		Team();
		Team(int inSeed);
		~Team();
		void setSeed(int seed);
		void setName(const std::string& name);
		void addTicket(const NBALottery::Quadruplet& q);
		const int& getNumTickets();
		const std::string& getName();
		const int& getSeed();
		bool match(const NBALottery::Quadruplet& q);

	  private:
		std::vector < NBALottery::Quadruplet> Tickets;
		std::string teamName;
		int Seed;
		bool matched;
	};

	inline bool operator==(const NBALottery::Quadruplet& lhs, const NBALottery::Quadruplet& rhs)
	{
		return ( (lhs.num[0] == rhs.num[0]) &&
				 (lhs.num[1] == rhs.num[1]) &&
				 (lhs.num[2] == rhs.num[2]) &&
				 (lhs.num[3] == rhs.num[3]));

	}

	inline bool operator!=(const NBALottery::Quadruplet& lhs, const NBALottery::Quadruplet& rhs)
	{
		return ( ! (lhs == rhs) );
	}

}


#endif /* LOTTERYTEAM_H_ */
