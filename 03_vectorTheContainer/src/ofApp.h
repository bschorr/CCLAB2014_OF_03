#pragma once

#include "ofMain.h"
#include "Ball.h"
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
    
    //a vector is a container of variable size. It works kind of like an array, but it is really efficient in handling adding and erasing objects from it. Start by creating a vector to hold your Ball objects.
    vector<Ball> ballVector;
		
};
