#pragma once

#include "button.h"
#include "ofMain.h"
#include "ButtonObserver.h"

//Observe que ofApp agora implementa a interface ButtonObserver
//E, portanto, tambem define o método onClick()
class ofApp : public ofBaseApp, ButtonObserver{
	private:	
		Button* btnCircle;
		Button* btnSquare;
		bool isDrawingSquare;
		bool isDrawingCircle;

	public:
		ofApp();

		void setup();
		void update();
		void draw();

        //Implementação do método onClick da interface ButtonObserver
		virtual void onClick(Button* source);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
};
