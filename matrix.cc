// Name:   Blake Stroud
// NetID:  bls160230
// Email:  bls160230@utdallas.edu
// Course: cs3377.501

#include <iostream>
#include "program6.h"

using namespace std;

void matrix(BinaryFileHeader *head, BinaryFileRecord *rec1, 
	    BinaryFileRecord *rec2, BinaryFileRecord *rec3, 
	    BinaryFileRecord *rec4, CDKMATRIX *myMatrix)
{
  char string1[26];     // Holds hexadecimal from header
  char string2[26];     // Holds version number from header
  char string3[26];     // Holds number of records from header
  char string4[26];     // Holds the string length of rec1
  char string5[26];     // Holds the string length of rec2
  char string6[26];     // Holds the string length of rec3
  char string7[26];     // Holds the string length of rec4

  // Converts all of the uint8_t, uint32_t, uint64_t ints
  // into c-style strings so that they can be easily
  // displayed into the matrix
  sprintf(string1, "Magic: 0x%x", head->magicNumber);
  sprintf(string2, "Version: %d", head->versionNumber);
  sprintf(string3, "NumRecords: %lu", head->numRecords);
  sprintf(string4, "strlen: %d", rec1->strLength);
  sprintf(string5, "strlen: %d", rec2->strLength);
  sprintf(string6, "strlen: %d", rec3->strLength);
  sprintf(string7, "strlen: %d", rec4->strLength);

  // Update the matrix
  setCDKMatrixCell(myMatrix, 1, 1, string1);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 1, 2, string2);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 1, 3, string3);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 2, 1, string4);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 2, 2, rec1->stringBuffer);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 3, 1, string5);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 3, 2, rec2->stringBuffer);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 4, 1, string6);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 4, 2, rec3->stringBuffer);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 5, 1, string7);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 5, 2, rec4->stringBuffer);
  drawCDKMatrix(myMatrix, true);
}
