#pragma once

#include "ofMain.h"

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
    
    //This sketch will walk you through the use of cout for debugging code in C++ (the console) and ofDrawBitmapString, a nice OF method for debugging values in the window.
    
    //Declare the variables that will hold the positions and velocities of our bouncing ball
    float x, y;
    float xVel, yVel;
		
};
