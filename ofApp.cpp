#include "ofApp.h"


ofApp::ofApp() 
:  ofBaseApp(),
	isDrawingSquare(false), 
	isDrawingCircle(false)
{
	btnCircle = new Button(100, 100, 100, 50);
	btnSquare = new Button(300, 100, 100, 50);
}
//--------------------------------------------------------------
void ofApp::setup(){
    //Registramos ofApp como observadora dos dois botoes
    //Observe que uma única classe (nesse caso ofApp) pode observar dois
    //botões distintos. E nada nos impediria de cada botão ter seu observer também.
    
	btnCircle->setObserver(this);
	btnSquare->setObserver(this);

	btnCircle->setup();
	btnSquare->setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	btnCircle->update();
	btnSquare->update();
}

//--------------------------------------------------------------
void ofApp::draw(){
	btnCircle->draw();
	btnSquare->draw();

    //Código para realizar o desenho após o botão clicado
	if (isDrawingSquare)
	{
		ofSetColor(0, 0, 255);
		ofDrawRectangle(
			btnSquare->getX(), 
			btnSquare->getY() + btnSquare->getH() + 50, 
			25, 
			25
		);
	}

	if (isDrawingCircle) 
	{
		ofSetColor(255, 0, 0);
		ofDrawCircle(
			btnCircle->getX(), 
			btnCircle->getY() + btnCircle->getH() + 50, 
			25
		);
	}
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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

void ofApp::onClick(Button* source)
{
    //Reage ao evento do clique do botão indicando se vai ou não desenhar o quadrado e o círculo
	if (source == btnSquare) //Podemos testar no source qual botao foi clicado
	{
		isDrawingSquare = !isDrawingSquare;
	}
	else if (source == btnCircle)
	{
		isDrawingCircle = !isDrawingCircle;
	}

}
