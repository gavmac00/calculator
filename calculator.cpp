#include <iostream> 
#include "calculator.h"

using namespace std;

float myclass::calculator(float a, char b, float c) {
	
	float response;

	if (b == '+') {
		response = a + c;
	}
	else if (b == '-') {
		response = a - c;
	}
	else if (b == '*') {
		response = a * c;
	}
	else if (b == '/') {
		response = a / c;
	}
	else {
		response = -0;
	}
	return response;
}