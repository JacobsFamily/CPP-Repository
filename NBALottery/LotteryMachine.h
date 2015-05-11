/*
 * LotteryMachine.h
 *
 *  Created on: Apr 18, 2014
 *      Author: owner
 */

#ifndef LOTTERYMACHINE_H_
#define LOTTERYMACHINE_H_

namespace NBALottery{

    class Quadruplet;

	class Machine
	{
		public:
			Machine();
			~Machine();
		    void draw(NBALottery::Quadruplet& q);
			//const NBALottery::Quadruplet& draw();
		private:
			void drawSort(NBALottery::Quadruplet& q);
	};

}


#endif /* LOTTERYMACHINE_H_ */
