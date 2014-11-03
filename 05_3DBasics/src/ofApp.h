#pragma once

#include "ofMain.h"
#include "Box.h"
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    //in openGL, everything is "3D" all the time. When we draw 2D in OF, we're just ignoring the 3rd dimension... but it is always there and we can play with it if we want. See the box class.
    
    //a vector container to hold flying boxes
    vector<Box> boxVector;
    
    //a counter to help us control how many boxes we want to generate
    int counter;
    
};
