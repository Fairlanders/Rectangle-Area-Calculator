#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <stdlib.h>
#include <string>
#include "Rectangle.h"
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
		// This part is about decleration of integers and char.
	char confirm;
	char confirm1;
	int width = 0;
	int height = 0;
	int Calculation = 0;
		// Decleration ended
Start:
	cout << "Welcome to area finder of a rectangle program." << endl;
	cout << "Please input an acceptable value of width and height." << endl << endl;;
	Sleep(2000);
		// Asking width and confirmation of the value.
	cout << "Please input the width value of your rectangle." << endl << endl;
	cout << "My rectangle's width is: ";
	cin >> width;
	cout << endl;
		// Confirmation of width
	cout << "If your rectangle's width is equal to " << width << " please confirm. ( Y / N )\n ";
	cin >> confirm;
		if ((confirm == 'Y') || (confirm == 'y'))
		{
			system("CLS");
			goto AfterWidth;
		}
		else
		{
			system("CLS");
			goto Start;
		}
AfterWidth:
	cout << "Great, your rectangle's width is " << width << " now, declare your rectangle's height." << endl;
		// Entering rectangle's height
	cout << "Enter your rectangle's height value." << endl;
	cout << "My rectangle's height is: ";
	cin >> height;
	cout << endl;
	cout << "If your rectangle's height is equal to " << height << " please confirm. ( Y / N )\n ";
	cin >> confirm1;
		// Confirmation of height
		if ((confirm1 == 'Y') || (confirm1 == 'y'))
		{
			system("CLS");
			goto LastSection;
		}
		else
		{
			system("CLS");
			goto AfterWidth;
		}
		// Calculating the area of the rectangle
	LastSection:
	cout << "Well now lets calculate the area of your rectangle." << endl;
	ProceedTime();
	Calculation = width * height;
	cout << "Your rectangle's area is equal to " << Calculation << endl;
	system("pause");
	return 0;
}

// Loading screen.
void ProceedTime()
{
	// This function makes the program to produce a random number which is below the last one and higher than the next one
	int Random1 = 0, Random2 = 0, Random3 = 0;
	srand(time(NULL));
	Random1 = (rand() % 30 +1);
	Sleep(1000);
	Random2 = Random1 + 29;
	Sleep(1000);
	Random3 = Random2 + 33;
	Sleep(1000);
	cout << "Proceeding. " << Random1 << "%" << endl;
	Sleep(1000);
	cout << "Proceeding. " << Random2 << "%" << endl;
	Sleep(1000);
	cout << "Proceeding. " << Random3 << "%" << endl;
	Sleep(1000);
	cout << "Proceeding. 100%" << endl;
	Sleep(2000);
	system("CLS");
}

