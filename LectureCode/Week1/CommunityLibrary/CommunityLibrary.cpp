// CommunityLibrary.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <windows.h>
#include "Patron.h"

int main()
{
	Patron *patron[20];

	patron[0] = new Patron(112, "Melissa McArthy");
	patron[1] = new Patron(113, "Taylor Swift");

	for (int i = 0; i < 2; ++i) {
		patron[i]->BorrowResources();
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < 2; ++i) {
		patron[i]->ReportResources();
		cout << endl;
	}
	Sleep(3000);//milliseconds, this simulates three days
	for (int i = 0; i < 2; ++i) {
		patron[i]->ReturnResources();
	}
	cout << endl;
	for (int i = 0; i < 2; ++i) {
		patron[i]->ReportFees();
		cout << endl;
	}

	return 0;
}
