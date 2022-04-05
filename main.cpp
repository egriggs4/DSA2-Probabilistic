#include "createBatches.hpp"

int main(){
CreateBatches b;

b.openFile("t1.txt");
b.readFile();
b.printData();
b.writeFiles();
std::cout << "average: " << b.getAverageNumBad();

return 0;
}