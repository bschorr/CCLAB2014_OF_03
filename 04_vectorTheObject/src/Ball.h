//
//  ball.h
//  03_vectorTheObject
//
//  Created by Bernardo Santos Schorr on 11/2/14.
//
//

#pragma once

#include "ofMain.h"

class Ball {
public:
    
    void setup(float _x, float _y);
    void update();
    void draw();
    
    //ofVec2f and ofVec3f are very powerful objects in OF. They are Euclidean vectors (also simply called vectors), that is, an object that holds 2 or 3 variables and can be used to define positions and velocities in 2D and 3D space. A vector can also be understood as composed by magnitude and direction and can be used in simulations of physics.
    
    //Do not mix up vector, the container, with vector, the object!
    
    ofVec2f pos;
    ofVec2f vel;
    ofColor color;

};
