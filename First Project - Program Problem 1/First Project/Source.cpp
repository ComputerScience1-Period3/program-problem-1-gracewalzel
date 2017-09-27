/*
Grace Walzel - 9.21.17 - 3
Program Problem
This is the first project!
*/
// Libraries
#include <iostream> // gives access to cin, cour, endl, <<, >>, boolalpha, noboolalpha
#include <conio.h> // gives access to _kbhit() and _getch() for pause()
//Name spaces
using namespace std; //*
//Functions()
void pause() {
	cout << "Press any key to continue...";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
// MAIN
void main() {
	//Display text
	int p = 3;
	cout << "Grace Walzel" << endl;
	cout << "Period " << 3 << endl;
	cout << "Hello World!" << endl;
	pause(); // pauses to see the displayed text
}