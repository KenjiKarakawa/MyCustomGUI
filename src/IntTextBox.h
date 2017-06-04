#pragma once
#include <string>
#include "MyButton.h"
#include "ofAppRunner.h"

#define TIME_TO_GET_KEY 0.2f

class IntTextBox : public MyButton {
	private:
		ofVec2f _valuePosition;
		int _value;
		float _timeCont;
		float _timeToGetKey;
		float _drawLineEdit;

	public:
		IntTextBox();
		IntTextBox(std::string name, int textPosition, float margin, ofVec2f &position,int defaultValue, ofColor &defaultColor, ofColor &pressedColor, ofColor &fontColor);
		
		void Update();
		void Draw();

		int GetValue() const;
		~IntTextBox();

};
