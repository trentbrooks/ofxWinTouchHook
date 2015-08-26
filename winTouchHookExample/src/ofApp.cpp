#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetFrameRate(60);

	// enable the Windows Touch Hook
	ofxWinTouchHook::EnableTouch();

	// add touch listeners
	ofAddListener(ofxWinTouchHook::touchDown, this, &ofApp::touchDown);
	ofAddListener(ofxWinTouchHook::touchMoved, this, &ofApp::touchMove);
	ofAddListener(ofxWinTouchHook::touchUp, this, &ofApp::touchUp);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::touchDown(ofTouchEventArgs & touch) {
	ofLog() << "touch down: " << touch.x << ", " << touch.y << ", id: " << touch.id;
}

void ofApp::touchMove(ofTouchEventArgs & touch) {
	ofLog() << "touch move: " << touch.x << ", " << touch.y << ", id: " << touch.id;
}

void ofApp::touchUp(ofTouchEventArgs & touch) {
	ofLog() << "touch up: " << touch.x << ", " << touch.y << ", id: " << touch.id;
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
