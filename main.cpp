#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include "calculator.h"

using namespace std;
int num = 0;

int main()
{
	while (num < 100) {
		float value1;
		float value2;
		char operation = 'l';

		if (operation == 'l') {
			cout << "Enter an operation: ";
			cin >> value1 >> operation >> value2;

			float a = value1;
			char b = operation;
			float c = value2;

			myclass poweron;
			float equals = poweron.calculator(a, b, c); 

			cout << "Answer: " << equals << "\n";
			cout << "\nPress a key to continue.";

			while (1) {
				if (_kbhit()) { // if a key is pressed, will break
					break;
				}
			}
			cout << "\n\n";
			num++;
		}
	}
}