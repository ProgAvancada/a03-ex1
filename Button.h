#ifndef BUTTON_H
#define BUTTON_H

#include "ButtonObserver.h"

class Button
{
private:	
	bool isDown;
	bool isHovered();
	ButtonObserver* observer;

protected:
	float x, y, w, h;
	void fireButtonClicked();

public:
	Button(float px, float py, float width, float height);	

	void setObserver(ButtonObserver* observer);

    //Note que esses métodos não precisam mais ser virtuais
	void setup();
	void draw();
	void update();

    //Getters do botão.
	float getX() { return x; }
	float getY() { return y; }
	float getW() { return w; }
	float getH() { return h; }
};

#endif
