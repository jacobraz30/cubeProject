#include <iostream>
#include "Cube.h"
using namespace std;
//basic idea for data representation of a cube
//interface for the data structures

//default constructor initializes cube to solved state
RubiksCube::RubiksCube(){
    for(int face = 0; face < 6; ++face){
        char color;
        //assigns the color based on which face we are currently filling
        switch (face) {
            case 0:
                color = 'w';
                break;
                
            case 1:
                color = 'o';
                break;
                
            case 2:
                color = 'g';
                break;
                
            case 3:
                color = 'r';
                break;
                
            case 4:
                color = 'b';
                break;
                
            case 5:
                color = 'y';
                break;
                
            default:
                color ='\0';
                break;
        }
        
        //fills the current face with the assigned color
        for(int i = 0 ; i < 3; ++i){
            
            for(int j = 0; j < 3; ++j){
                pieces[face][i][j] = color;
            }
            
        }
    }
}

char RubiksCube::getPiece(int face, int row, int col) const {
    return pieces[face][row][col];
}



//loops through the faces and prints the cube to the given stream
ostream & operator<<(ostream &os, const RubiksCube &cube){
    for(int face = 0; face < 6; ++face){
        //loops throug faces
        //i loops through rows
        for(int i = 0 ; i < 3; ++i){
            //handles alignment
            if(face == 0 || face == 5){
                os << "      ";
            }
            
            if(face == 1){
                //allows for looping throug multiple faces without changing the row so that the middle 4 faces can be printed side by side
                while(face < 5){
                    for(int j = 0; j < 3; ++j){
                        os << cube.getPiece(face, i, j) << " ";
                    }
                    ++face;
                }
                os << endl;
                if(i !=2){
                    face = 1;
                }
                else{
                    face = 4;
                }
            }
            else{
                for(int j = 0; j < 3; ++j){
                    os << cube.getPiece(face, i, j) << " ";
                }
                os << endl;
            }
        }
    }
    return os;
}


