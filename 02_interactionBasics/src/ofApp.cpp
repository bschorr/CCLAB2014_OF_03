#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //populate your color array. These names are built into OF and are the same as CSS colors: http://www.crockford.com/wrrrld/color.html
    
    myColors[0] = ofColor::red;
    myColors[1] = ofColor::green;
    myColors[2] = ofColor::blue;
    myColors[3] = ofColor::aqua;
    myColors[4] = ofColor::yellow;

    //set your background to black
    ofBackground(0);
    
    //your circle size to 0
    circleSize = 0;
    
    //let's draw strokes
    ofNoFill();
    
    //make a super smooth circle
    ofSetCircleResolution(60);
    
    //and enable smoothing, same as Processing smooth() function
    ofEnableSmoothing();
    
    //and let's make the bkg not redraw automatically
    ofSetBackgroundAuto(false);
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    

    //The color to draw in OF defaults to white. Here we are using a switch statement to move along the 5 colors we defined in our array using keys 1-5. It's a conditional statement that allows you to consider multiple cases, differently than the if statement.
    
    switch (key) {
        case '1':
            ofSetColor(myColors[0]);
            break;
        
        case '2':
            ofSetColor(myColors[1]);
            break;
            
        case '3':
            ofSetColor(myColors[2]);
            break;
            
        case '4':
            ofSetColor(myColors[3]);
            break;
            
        case '5':
            ofSetColor(myColors[4]);
            break;
            
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
    //as long as the mouse is dragged, a circle is drawn and the circle size is augmented. Check the mouseReleased function below.
    circleSize++;
    ofCircle(x, y, circleSize);

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    //when the mouse is released, the circle sizer reverts back to 0.
    circleSize = 0;
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
