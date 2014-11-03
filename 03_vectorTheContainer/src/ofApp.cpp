#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(255);
    
    //when you're adding elements to a vector, you use a command called push_back.
    for (int i = 0; i < 5; i++) {
        Ball ball;
        ball.setup(ofRandomWidth(), ofRandomHeight());
        ballVector.push_back(ball);
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    for (int i =0; i < ballVector.size(); i++) {
        ballVector[i].update();
    }

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i =0; i < ballVector.size(); i++) {
        ballVector[i].draw();
    }
    
    ofSetColor(0);
    ofDrawBitmapString("Click to add balls to the vector.\nPress the down arrow to subtract balls from it.", 30, 30);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    switch (key) {

    //erase takes one element away from the vector. The .begin() function, points to the 1st element. If you want to subtract another one you can add a number to vector.begin().
            
    //The if statement prevents us from trying to erase elements from an empty vector. If we do that, it will return a bad access error, because we're trying to reach an element that doesn't exist.

        case OF_KEY_DOWN:
            if (ballVector.size() > 0) {
                ballVector.erase(ballVector.begin());
                break;
            }
            
        default:
            break;
    }

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
    
    for (int i = 0; i < 5; i++) {
        Ball ball;
        ball.setup(x, y);
        ballVector.push_back(ball);
    }

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
