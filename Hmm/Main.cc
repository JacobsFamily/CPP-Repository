/*
 * Main.cc
 *
 *  Created on: May 25, 2015
 *      Author: owner
 */

#include "Ball.h"
#include "SimEngine.h"
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

  std::vector<Ball> balls;
  balls.resize(0);
  int maxsize = 14;
  int spacing = 10;

  //initialize Balls
  for (int i=0;i<maxsize;i++)
  {
     balls.push_back(Ball(i,1.0,Vec(50+i,50-i,50-2*i),Vec(0.0,0.0,0.0)));
  }

  //initialize Forces
  std::vector<Force> forces;
  forces.push_back(Force(9.8,Vec(0.0, 0.0, -1.0))); //gravity
  double simStart = 0.0;
  double simStop  = 10.0;
  double simStep  = 0.1;

  std::cout << std::setw(28) << " Before Propagation" << std::endl;
  std::cout << std::setw(spacing) << "Ball #" << std::setw(spacing) << "x" << std::setw(spacing) << "y" << std::setw(spacing) << "z" << std::setw(spacing) << "vx" << std::setw(spacing) << "vy" << std::setw(spacing) << "vz" << std::endl;
  for(int i=0;i<maxsize;i++)
  {
     std::cout << std::setw(spacing) << balls[i].Num   << std::setw(spacing) << balls[i].pos.x << std::setw(spacing) << balls[i].pos.y << std::setw(spacing) << balls[i].pos.z
	       << std::setw(spacing) << balls[i].vel.x << std::setw(spacing) << balls[i].vel.y << std::setw(spacing) << balls[i].vel.z << std::endl;
  }
  
  SimEngine sim(simStart, simStop, simStep, forces);
  sim.propagate(balls);

  std::cout << std::endl << std::setw(28) << " After Propagation" << std::endl;
  std::cout << std::setw(spacing) << "Ball #" << std::setw(spacing) << "x" << std::setw(spacing) << "y" << std::setw(spacing) << "z" << std::setw(spacing) << "vx" << std::setw(spacing) << "vy" << std::setw(spacing) << "vz" << std::endl;
  for(int i=0;i<maxsize;i++)
  {
     std::cout << std::setw(spacing) << balls[i].Num   << std::setw(spacing) << balls[i].pos.x  << std::setw(spacing) << balls[i].pos.y << std::setw(spacing) << balls[i].pos.z
	       << std::setw(spacing) << balls[i].vel.x << std::setw(spacing) << balls[i].vel.y  << std::setw(spacing) << balls[i].vel.z << std::endl;
  }

  return 0;
}
