#include "RectangleConsole.h"

int RectangleConsole::getInt(string label) {
	int num;
	cout << " Please enter an int for " + label + ": " << endl;
	cin >> num;
	return num;
}
void RectangleConsole::displayRectangle(Rectangle* rect) {
	// print out the top of the box
	for (int w = 0; w < rect->getWidth(); w++)
		cout << "-";
	cout << endl;
	// print out the sides of the box
	for (int l = 0; l < rect->getLength(); l++) {
		cout << "|";
		for (int w2 = 1; w2 < rect->getWidth() - 1; w2++)
			cout << " ";
		cout << "|" << endl;
	}
	// print out the bottom of the box.
	for (int w = 0; w < rect->getWidth(); w++)
		cout << "-";
	cout << endl;
}
void RectangleConsole::displayText(string text) {
	cout << text << endl;
}
