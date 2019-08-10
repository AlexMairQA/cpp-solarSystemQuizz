// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	string SolarSystem[9]{ "Mercury", "Venus","Earth","Mars","Jupiter", "Saturn", "Uranus", "Neptune", "Pluto" };
	string input; int myScore = 0;
	cout << "See if you can name the planets outward from the Sun\n";
	for (int i = 0; i < 9; i++)
	{
		getline(cin, input);
		if (input == *(SolarSystem + i)) { cout << *(SolarSystem + i) << " is correct!\n"; myScore++; }
		else cout << input << " is the wrong answer.\n";

	}
	cout << "You got ";
	if (myScore == 9)cout << " all ";
	cout << myScore << " planets correct.";
	if (myScore == 9) { cout << " Well done!"; }


}