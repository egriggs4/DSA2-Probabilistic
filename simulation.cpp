/***************************************************************
  Student Name: Emily Griggs
  File Name: simulation.cpp
  Project 4 - Monte Carlo

Class to create simulation with Monte Carlo algorithm
***************************************************************/

#include "simulation.hpp"

Simulation::Simulation(CreateBatches &batch){
  setBase(batch);
  setExponent(batch);
}

void Simulation::setBase(CreateBatches &batch){
  this->base = 1 - batch.getPercentBadItems();
}

void Simulation::setExponent(CreateBatches &batch){
  this->exponent = batch.getNumSampled();
}