//============================================================================
// Name        : NBALottery.cpp
// Author      : Vincent Jacobs
// Version     :
// Copyright   : Your copyright notice
// Description : NBA Lottery in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include "LotteryQuadruplet.h"
#include "LotteryMachine.h"
#include "LotteryTeam.h"

using namespace std;


int main() 
{

	const int maxrange=14;
	const int numdraws=3;
        int count=0;
	NBALottery::Machine machine;
	std::vector < NBALottery::Quadruplet > drawings;
	int wins[maxrange] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    //set up Teams
	std::vector<NBALottery::Team> lotteryTeams;
	for(int i=0;i<maxrange;i++)
	{
		lotteryTeams.push_back(NBALottery::Team(i+1));
	}



	//generate tickets


	for (int i=1;i<=maxrange;i++)
	{
		for (int j=i+1;j<=maxrange;j++)
		{
			for (int k=j+1;k<=maxrange;k++)
			{
				for (int l=k+1;l<=maxrange;l++)
				{
					count++;
					//cout << "num(" << count <<")=("<<i<<","<<j<<","<<k<<","<<l<<")" << endl;
					//Distribute lottery tickets to teams according to odds
					NBALottery::Quadruplet ticket(i,j,k,l);
					if(count >0 && count <= 250)
					{
						lotteryTeams[0].addTicket(ticket);
					}
					else if(count > 250 && count <= 449)
					{
						lotteryTeams[1].addTicket(ticket);
					}
					else if(count > 449 && count <= 605)
					{
						lotteryTeams[2].addTicket(ticket);
					}
					else if(count > 605 && count <= 724)
					{
						lotteryTeams[3].addTicket(ticket);
					}
					else if(count > 724 && count <= 812)
					{
						lotteryTeams[4].addTicket(ticket);
					}
					else if(count > 812 && count <= 875)
					{
						lotteryTeams[5].addTicket(ticket);
					}
					else if(count > 875 && count <= 918)
					{
						lotteryTeams[6].addTicket(ticket);
					}
					else if(count > 918 && count <= 946)
					{
						lotteryTeams[7].addTicket(ticket);
					}
					else if(count > 946 && count <= 963)
					{
						lotteryTeams[8].addTicket(ticket);
					}
					else if(count > 963 && count <= 974)
					{
						lotteryTeams[9].addTicket(ticket);
					}
					else if(count > 974 && count <= 982)
					{
						lotteryTeams[10].addTicket(ticket);
					}
					else if(count > 982 && count <= 989)
					{
						lotteryTeams[11].addTicket(ticket);
					}
					else if(count > 989 && count <= 995)
					{
						lotteryTeams[12].addTicket(ticket);
					}
					else if(count > 995 && count <= 1000)
					{
						lotteryTeams[13].addTicket(ticket);
					}
				}
			}
		}
	}


	for( int i=0;i<maxrange;i++)
	{
		//cout << "Team [" << i+1 <<"] has " << lotteryTeams[i].getNumTickets() << " tickets" << endl;
	}

	//Perform lottery draw
	for (int i=1;i<=numdraws;i++)
	{
	  drawings.push_back(NBALottery::Quadruplet());
	}

	for (int m=0;m<numdraws;m++)
	{

            machine.draw(drawings[m]);

            for(int i=0;i<4;i++)
	    {
		  //cout << "draw["<<i<<"]= " << drawings[m].num[i] << endl;
	    }

            for(int i=0;i<maxrange;i++)
            {
              if(lotteryTeams[i].match(drawings[m]))
              {
        	//cout << endl << "Team[" << i+1 << "] just won the lottery" << endl << endl;
        	(wins[i])++;
              }
            }

	}

	for(int i=0;i<maxrange;i++)
	{
		cout << endl << "Team[" << i+1 << "] won the lottery " << wins[i] << " times out of " << numdraws << endl;
	}

	return 0;
}
