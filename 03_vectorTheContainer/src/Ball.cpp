//
//  ball.cpp
//  03_vectorTheContainer
//
//  Created by Bernardo Santos Schorr on 11/2/14.
//
//

#include "ball.h"

void Ball::setup(float _x, float _y) {
    
    x = _x;
    y = _y;
    
    color = ofColor (ofRandom(255), ofRandom(255), ofRandom(255));
    
    xVel = ofRandom(-5, 5);
    yVel = ofRandom(-5, 5);
    
}

void Ball::update() {
    
    x += xVel;
    y += yVel;
    
    if (x >= ofGetWidth()) {
        x = ofGetWidth();
        xVel *= -1;
    }
    
    if (x <= 0) {
        x = 0;
        xVel *= -1;
    }
    
    if (y >= ofGetHeight()) {
        y = ofGetHeight();
        yVel *= -1;
    }
    
    if (y <= 0) {
        y = 0;
        yVel *= -1;
    }
    
}

void Ball::draw() {
    
    ofSetColor(color);
    ofCircle(x, y, 10);
    
}
