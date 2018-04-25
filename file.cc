// Name:  Blake Stroud
// NetID: bls160230
// Email: bls160230@utdallas.edu

#include <iostream>
#include "program6.h"

using namespace std;

void file(CDKMATRIX *myMatrix)
{
  BinaryFileHeader *myHeader = new BinaryFileHeader();       // Holds file header
  BinaryFileRecord *myRecord1 = new BinaryFileRecord();      // Holds record 1
  BinaryFileRecord *myRecord2 = new BinaryFileRecord();      // Holds record 2
  BinaryFileRecord *myRecord3 = new BinaryFileRecord();      // Holds record 3
  BinaryFileRecord *myRecord4 = new BinaryFileRecord();      // Holds record 4
  ifstream binInFile("cs3377.bin", ios::in | ios::binary);   // ifstream object

  // Read in the header
  binInFile.read((char *) myHeader, sizeof(BinaryFileHeader));

  binInFile.read((char *) myRecord1, sizeof(BinaryFileRecord));
  binInFile.read((char *) myRecord2, sizeof(BinaryFileRecord));
  binInFile.read((char *) myRecord3, sizeof(BinaryFileRecord));
  binInFile.read((char *) myRecord4, sizeof(BinaryFileRecord));

  matrix(myHeader, myRecord1, myRecord2, myRecord3, myRecord4, myMatrix);

}
