/***************************************************************
  Student Name: Emily Griggs
  File Name: createBatches.cpp
  Project 4 - Monte Carlo

Class to create chip batches using input file data
***************************************************************/

#include "createBatches.hpp"

#include <iostream>
#include <fstream>

//CreateBatches::CreateBatches(){}

bool CreateBatches::openFile(std::string fileName){
    infile.open(fileName);

    if(!infile){
        return false;
    }else{
        return true;
    }
}

void CreateBatches::readFile(){
    infile >> numBatches;
    infile >> itemsPerBatch;
    infile >> percentBadBatches;
    infile >> percentBadItems;
    infile >> numSampled;

    infile.close();
}

void CreateBatches::printData(){
    printf("%-50s %5d\n", "Number of batches of items:", numBatches);
    printf("%-50s %5d\n", "Number of items in each batch:", itemsPerBatch);
    printf("%-50s %5d\n", "Percentage of batches containing bad items:", percentBadBatches);
    printf("%-50s %5d\n", "Percentage of items that are bad in a bad set:", percentBadItems); 
    printf("%-50s %5d\n", "Items sampled from each set:", numSampled);
}

     
