// COMSC-210 | Lab 16 | Dainiz Almazan
// IDE used: CLion
#include <iostream>
#include <iomanip>
using namespace std;

const int WIDTH = 10;

// TODO: Create a default constructor, a parameter constructor, and at least one partial constructor
class Color {
	int red;
	int green;
	int blue;
public:
	// using const keyword because these functions should not change any data
	int getRed() const { return red; }
	int getGreen() const { return green; }
	int getBlue() const { return blue; }
	// using this keyword to differentiate between local variables and attributes
	void setRed(int red) { this->red = red; }
	void setGreen(int green) { this->green = green; }
	void setBlue(int blue) { this->blue = blue; }
	void print() {
		cout << setw(WIDTH) << "COLOR " << "VALUE" << endl;
		cout << setw(WIDTH) << "Red " << red << endl;
		cout << setw(WIDTH) << "Green " << green << endl;
		cout << setw(WIDTH) << "Blue " << blue << endl << endl;
	}
};

int main() {
	// TODO: Instantiate a variety of Color objects using a variety types of constructors
	Color orange;
	orange.setRed(255);
	orange.setGreen(128);
	orange.setBlue(0);
	orange.print();

	Color yellow;
	yellow.setRed(255);
	yellow.setGreen(255);
	yellow.setBlue(0);
	yellow.print();

	Color purple;
	purple.setRed(127);
	purple.setGreen(0);
	purple.setBlue(255);
	purple.print();

	return 0;
}
