#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //making our background white
    ofBackground(255);
    
    //in OF useful functions are built in, such as getting a random value between 0 and either the width or height of the window.
    x = ofRandomWidth();
    y = ofRandomHeight();
    
    //ofRandom works similarly to the random function in Processing and will return a floating point number between 2 values.
    xVel = ofRandom(-5, 5);
    yVel = ofRandom(-5, 5);

}

//--------------------------------------------------------------
void ofApp::update(){
    
    //making the ball move
    x += xVel;
    y += yVel;
    
    /*
     This sequence of if statements should be natural to you by now.
     
     It's preventing the ball of disappearing over any of the window sides.
     
     The new thing here is "cout", which is read c-out. It is similar to printing line to the console in Processing and is written in the form below: 
     
     cout << "string to print to console" << endl 
     
     (endl is optional if you want to add a line break at the end of your string.)
    */
     
    if (x >= ofGetWidth()) {
        x = ofGetWidth();
        xVel *= -1;
        cout << "bounced off the right side!" << endl;
    }
    
    if (x <= 0) {
        x = 0;
        xVel *= -1;
        cout << "bounced off the left side!" << endl;
    }
    
    if (y >= ofGetHeight()) {
        y = ofGetHeight();
        yVel *= -1;
        cout << "bounced off the bottom!" << endl;
    }
    
    if (y <= 0) {
        y = 0;
        yVel *= -1;
        cout << "bounced off the top!" << endl;
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //setting color to blac and drawing the circle
    ofSetColor(0);
    ofCircle(x, y, 50);
    
    //Another debugging utility is ofDrawBitmapString(), which draws value to the window, rather than the console. Let's look at it step by step.
    
    //First of all, it only accepts strings, not ints or floats. But OF has a useful function to do the conversion.
    string xPos = ofToString(x);
    string yPos = ofToString(y);
    
    //in C++ you can simply add strings together. You'll notice that "\n" i snot drawn to the screen, but rather read as a line break.
    string debugString = "x: " + xPos + "\n" + "y: " + yPos;
    
    //now set the color to red and draw your debug info to the top left corner.
    ofSetColor(255, 0, 0);
    ofDrawBitmapString(debugString, 30, 30);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
