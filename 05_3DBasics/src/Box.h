//
//  ball.h
//  05_3DBasics
//
//  Created by Bernardo Santos Schorr on 11/2/14.
//
//

#pragma once

#include "ofMain.h"

class Box {
public:
    
    void setup(float _x, float _y);
    void update();
    void draw();
    
    //an ofVec3f works just like an ofVec2f, but with the added Z or depth dimension.
    
    ofVec3f pos;
    ofVec3f vel;
    ofColor color;

};
