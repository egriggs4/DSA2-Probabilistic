/***************************************************************
  Student Name: Emily Griggs
  File Name: createBatches.cpp
  Project 4 - Monte Carlo

Class to create chip batches using input file data
***************************************************************/

#include "createBatches.hpp"

#include <iostream>
#include <fstream>


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

void CreateBatches::writeFiles(){
    int numBadBatches = (numBatches * ((float)percentBadBatches / 100));
    minBad = (itemsPerBatch * ((float)percentBadItems / 100));

    for(int i = 1; i <= numBatches; i++){
        
        this->batchFile = "ds" + std::to_string(i)  + ".txt";

        std::ofstream outfile(batchFile);

        for(int j = 1; j <= itemsPerBatch; j++){

            if(i <= numBadBatches){
                int randomNumber = std::rand() % 99;

                if(randomNumber < (percentBadItems)){
                    outfile << "b\n";
                    countBad +=1;
                }else{
                    outfile << "g\n";
                }
            }else{
                outfile << "g\n";
            }
        }

        if(countBad < minBad){
            minBad = countBad;
        }

        if(countBad > maxBad){
            maxBad = countBad;
        }
        totalBad += countBad;
        countBad = 0;
   }

}  

float CreateBatches::getAverageNumBad(){
    return totalBad / (numBatches * ((float)percentBadBatches / 100));
}