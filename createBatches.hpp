/***************************************************************
  Student Name: Emily Griggs
  File Name: createBatches.hpp
  Project 4 - Monte Carlo

Class to create chip batches using input file data
***************************************************************/
#ifndef CREATEBATCHES_HPP
#define CREATEBATCHES_HPP

#include <iostream>
#include <fstream>

class CreateBatches{
    private:   
        std::string fileName1 = "t1.txt";
        std::string fileName2 = "t2.txt";
        std::string fileName3 = "t3.txt";
        std::string fileName4 = "t4.txt";
        std::string batchFile = "";
        std::ifstream infile;
        int numBatches = 0; //number of batches of items
        int itemsPerBatch = 0; // number of items in each batch
        int percentBadBatches = 0; // percent of batches containing bad items
        int percentBadItems = 0; // percent of items that are bad in a bed set
        int numBadBatches = 0;
        int numSampled = 0; // number of items sampled from each set
        int totalBad = 0;
        int countBad = 0;
        int maxBad = 0; //max number of bad items in a bad set
        int minBad = 0; // min number of bad items in a bad set
        float averageNumBad = 0; // average number of bad items in a bad set
    public:
        CreateBatches(std::string fileName);
        bool openFile(std::string fileName);
        void readFile();
        void writeFiles();
        void printData();
        float getAverageNumBad();
        float getPercentBadItems();
        int getNumSampled();      
};

#endif //createBatches.hpp