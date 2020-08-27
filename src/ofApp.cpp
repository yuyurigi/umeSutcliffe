#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bgColor = ofColor(153, 214, 189); //背景色
    lineColor = ofColor(255, 255, 255); //ラインの色
    lineWidth = 5; //ラインの太さ
    strutFactor = 0.68301284; //支柱の長さ（-1.0 ~ 2.0)
    //strutFactor = -0.39118606;
    
    ofEnableSmoothing();
    ofBackground(bgColor);
    pentagon.setup(0, strutFactor);
}

//--------------------------------------------------------------
void ofApp::update(){


}

//--------------------------------------------------------------
void ofApp::draw(){
    pentagon.drawShape(bgColor, lineColor, lineWidth);
    
    myImage.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key)
    {
        case 's':
        {
            
            myImage.save(ofGetTimestampString("%Y%m%d%H%M%S")+"##.png", OF_IMAGE_QUALITY_BEST);
        }
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
