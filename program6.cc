// Name:  Blake Stroud
// NetID: bls160230
// Email: bls160230@utdallas.edu

#include <iostream>
#include "program6.h"

#define MATRIX_WIDTH 3
#define MATRIX_HEIGHT 5
#define BOX_WIDTH 25
#define MATRIX_NAME_STRING "Test Matrix"

using namespace std;

/*
  This program demonstrates the fundamentals of binary file I/O
  along with the ability of using curses contained within CDK.
  This program opens up a supplied binary file and then reads in
  data from the file and stores it into an array of strings.
  The data is then sent to the matrix function which will display
  the data retrieved from the file into a 3x5 matrix.
 */

int main(int argc, char *argv[])
{
  char data[11][26] = {"a"};    // Used to hold the data read in from binary file 

  WINDOW *window;
  CDKSCREEN *cdkscreen;
  CDKMATRIX *myMatrix;

  const char *rowTitles[] = {"R0", "R1", "R2", "R3", "R4", "R5"};
  const char *columnTitles[] = {"C0", "C1", "C2", "C3", "C4", "C5"};
  int boxWidths[] = {BOX_WIDTH, BOX_WIDTH, BOX_WIDTH, BOX_WIDTH, BOX_WIDTH,
		     BOX_WIDTH};
  int boxTypes[] = {vMIXED, vMIXED, vMIXED, vMIXED, vMIXED, vMIXED};


  // Initialize CDK screen
  window = initscr();
  cdkscreen = initCDKScreen(window);

  initCDKColor();

  // Create matrix
  myMatrix = newCDKMatrix(cdkscreen, CENTER, CENTER, MATRIX_HEIGHT, MATRIX_WIDTH,
			   MATRIX_HEIGHT, MATRIX_WIDTH, MATRIX_NAME_STRING, 
			  (char**) rowTitles, (char**) columnTitles, boxWidths,
			  boxTypes, 1, 1, ' ', ROW, true, true, false);

  if (myMatrix == NULL) {
    printf("Error creating matrix.\n");
    _exit(1);
  }

  // Display matrix
  drawCDKMatrix(myMatrix, true);

  // Send the array to read in the values from the binary file
  file(data);

  // Send the data to be printed in the matrix
  matrix(data, myMatrix);

  // Stall program to display finished matrix
  unsigned char x;
  cin >> x;

  // Cleanup Screen
  endCDK();

  return 0;
}
