/***************************************************************
  Student Name: Emily Griggs
  File Name: simulation.hpp
  Project 4 - Monte Carlo

Class to create simulation with Monte Carlo algorithm
***************************************************************/

#ifndef SIMULATION_HPP
#define SIMULATION_HPP

#include "createBatches.hpp"

class Simulation{
    private:
        float base;//percentage of good items in a bad set
        int exponent;//items sampled from each set
        float probabilityOfFailure = 0;//P(failure to detect bad item)
        float probabilityGoodBatch = 0;//P(batch is good)
        float percentDetected = 0;//percentage of bad batches detected
        bool isBad = false;//will change to true if bad item is detected
    public:
        Simulation(CreateBatches &batch);
        void setBase(CreateBatches &batch);
        void setExponent(CreateBatches &batch);
        void getBase();
        void getExponent();
        void setProbabilityOfFailure();
        void setProbabilityGodBatch();
};

#endif//simulation.hpp