//
//  ball.cpp
//  05_3DBasics
//
//  Created by Bernardo Santos Schorr on 11/2/14.
//
//

#include "Box.h"

void Box::setup(float _x, float _y) {
    
    pos.set(_x, _y, -1000.0);
    
    color = ofColor (ofRandom(255), ofRandom(255), ofRandom(255));
    
    //you can also access each dimension of an ofVec2f simply using the dot notation.
    vel.x = ofRandom(-1, 1);
    vel.y = ofRandom(-1, 1);
    vel.z = ofRandom(3, 10);
}

void Box::update() {
    
    pos += vel;
    
    
}

void Box::draw() {
    
    ofSetColor(color);
    ofDrawBox(pos.x, pos.y, pos.z, 30);

    
}
