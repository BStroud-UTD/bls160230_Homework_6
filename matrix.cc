// Name:  Blake Stroud
// NetID: bls160230
// Email: bls160230@utdallas.edu

#include <iostream>
#include "program6.h"

using namespace std;

void matrix(char data[][26], CDKMATRIX *myMatrix)
{
  // Update the matrix
  setCDKMatrixCell(myMatrix, 1, 1, data[0]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 1, 2, data[1]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 1, 3, data[2]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 2, 1, data[3]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 2, 2, data[4]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 3, 1, data[5]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 3, 2, data[6]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 4, 1, data[7]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 4, 2, data[8]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 5, 1, data[9]);
  drawCDKMatrix(myMatrix, true);
  setCDKMatrixCell(myMatrix, 5, 2, data[10]);
  drawCDKMatrix(myMatrix, true);
}
