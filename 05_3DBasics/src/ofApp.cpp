#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofBackground(0);
    counter = 0;
    ofNoFill();
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    counter++;
    
    //every time the counter reaches 5, we make a new box. It is a very basic way of limiting how many objects we want to create over time.
    if (counter >= 5) {
        Box box;
        box.setup(ofGetWindowWidth()/2, ofGetWindowHeight()/2);
        boxVector.push_back(box);
        counter = 0;
    }
        
    for (int i =0; i < boxVector.size(); i++) {
        boxVector[i].update();
    }
    
    //The boxes soon reach the end of the screen and we no longer need to keep of track of them. For that reason, we limit the size of our box vector to 100 to avoid losing performance.
    while (boxVector.size() > 100) {
        boxVector.erase(boxVector.begin());
    }
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    for (int i =0; i < boxVector.size(); i++) {
        boxVector[i].draw();
    }
    
    ofSetColor(255);
    
    string debugString = "Number of Boxes: " + ofToString(boxVector.size()) + "\n" + "Framerate: " + ofToString(ofGetFrameRate());
    
    ofDrawBitmapString(debugString, 20, 20);
    
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
