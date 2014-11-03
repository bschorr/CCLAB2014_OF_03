//
//  ball.cpp
//  04_vectorTheObject
//
//  Created by Bernardo Santos Schorr on 11/2/14.
//
//

#include "ball.h"

void Ball::setup(float _x, float _y) {
    
    //you can set both dimensions of an ofVec2f using the set function.
    pos.set(_x, _y);
    
    color = ofColor (ofRandom(255), ofRandom(255), ofRandom(255));
    
    //you can also access each dimension of an ofVec2f simply using the dot notation.
    vel.x = ofRandom(-5, 5);
    vel.y = ofRandom(-5, 5);
    
}

void Ball::update() {
    
    //ofVec2f can be added to one another
    pos += vel;
    
    if (pos.x >= ofGetWidth()) {
        pos.x = ofGetWidth();
        vel.x *= -1;
    }
    
    if (pos.x <= 0) {
        pos.x = 0;
        vel.x *= -1;
    }
    
    if (pos.y >= ofGetHeight()) {
        pos.y = ofGetHeight();
        vel.y *= -1;
    }
    
    if (pos.y <= 0) {
        pos.y = 0;
        vel.y *= -1;
    }
    
}

void Ball::draw() {
    
    ofSetColor(color);
    ofCircle(pos.x, pos.y, 10);
    
}
