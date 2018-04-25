#ifndef _PROGRAM6_H_
#define _PROGRAM6_H_

#include <iostream>
#include <string>
#include <fstream>
#include <stdint.h>
#include "cdk.h"
#include <stdio.h>

const int maxRecordStringLength = 25;

class BinaryFileHeader {
 public: 

  uint32_t magicNumber;
  uint32_t versionNumber;
  uint64_t numRecords;
};

class BinaryFileRecord {
 public:

  uint8_t strLength;
  char stringBuffer[maxRecordStringLength];
};


void file(CDKMATRIX *myMatrix);
void matrix(BinaryFileHeader *head, BinaryFileRecord *rec1, 
	    BinaryFileRecord *rec2, BinaryFileRecord *rec3, 
	    BinaryFileRecord *rec4, CDKMATRIX *myMatrix);

#endif /* _PROGRAM6_H_ */
