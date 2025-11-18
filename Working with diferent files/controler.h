#pragma once



#include<iostream>
#include <Windows.h>

using namespace std;

class Controler{

private:
	char controlMous;
	char controlKeyBoard;
	char controlArrows;

	int playerPositionX=0;
	int playerPositionY = 0;


public:

	Controler() {




	}

	void mousMovement() {





	}
	void keyBordMovement() {
		while (true) {
			if (GetAsyncKeyState('A')) {
				cout << "Space key is pressed!\n";
			}

			if (GetAsyncKeyState(VK_ESCAPE)) {
				break; // exit loop
			}

			Sleep(50); // prevent CPU overuse
		}




	}
	void arrowsMovement() {





	}






















};

