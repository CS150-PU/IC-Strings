//******************************************************************************
// File name:   main.cpp
// Author:      CS Faculty
// Date:        8/22/2023
// Class:       CS150-xx (xx is your section number)
// Assignment:  Hello World
// Purpose:     Display the message Hello World to the screen
// Hours:       0.25
//******************************************************************************

#include <iostream>
#include <ifstream>

using namespace std;

int main () {
  const string STRING_FILE_NAME = "strings.txt";
  
  ifstream inFile;
  string aString;

  inFile.open (STRING_FILE_NAME);
  if (inFile.fail ()) {
    cout << "Error Opening File" << endl;
    exit (EXIT_FAILURE);
  }

  while (inFile >> aString) {
    cout << aString << endl;
  }

  inFile.close ();

  return EXIT_SUCCESS;
}
