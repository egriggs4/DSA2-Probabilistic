#include "createBatches.hpp"

int main(){
CreateBatches b;

b.openFile("t1.txt");
b.readFile();
b.printData();

return 0;
}