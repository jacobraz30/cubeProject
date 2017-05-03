#ifndef CUBE_H
#define CUBE_H


#include <iostream>
using namespace std;
//basic idea for data representation of a cube
//interface for the data structures

class RubiksCube {
public:
    //public member functions
    
    //default constructor initializes cube to solved state
    RubiksCube();
    
    char getPiece(int face, int row, int col) const;
private:
    //array of 6 faces each with a 3X3 array for the colors on that face
    //each char is the first letter of the color on that face
    char pieces[6][3][3];
    
    
};

//loops through the faces and prints the cube to the given stream
ostream & operator<<(ostream &os, const RubiksCube &cube);


#endif
