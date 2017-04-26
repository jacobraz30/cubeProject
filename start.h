#include <iostream>
using namespace std;
//basic idea for data representation of a cube
//interface for the data structures

struct Cube{
    //1x1 cube used to represent each individual piece for a rubik's cube
    //each contains the first letter of the color on that face or '\0' if the face is blank
    char top;
    char bottom;
    char front;
    char back;
    char left;
    char right;
}

class RubiksCube {
public:
    //public member functions
    
private:
    //array of 26 cubes one for each piece of a 3x3 rubiks cube
    Cube[26] pieces;
    
    
};

