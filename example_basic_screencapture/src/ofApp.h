#pragma once

#include "ofMain.h"
#include "ofxVideoBuffers.h"

#define WIDTH 320
#define HEIGHT 240

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
    
        ofFbo fbo;
        ofxVideoBuffers buffer;
        ofImage pixs;
        unsigned char * pixels;
    
        bool isClicked;
        bool record;
        bool playback;
};
