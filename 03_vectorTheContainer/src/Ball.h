//
//  ball.h
//  03_vectorTheContainer
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
    
    float x, y;
    float xVel, yVel;
    ofColor color;

};
