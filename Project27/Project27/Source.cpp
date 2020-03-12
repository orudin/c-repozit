#include <iostream>
#include <string>
#include <Windows.h>
#include "Header.h"

using namespace std;


int main() {
	
	bool  ex = true;
	int vubir = 0;
	int g = 0;
	int g = 0;
	int size = 10;
	zapusnyc* arr = new zapusnyc[size];


	zapusnyc** ar = new zapusnyc * [size];
	
	
	
	for (int i = 0; i < size; i++)
	{
		ar[i] = &arr[i];
	}
	cout << "\t\tZHURNAL PODIY" << endl << endl << endl;
	do
	{
		cout << "1) View events " << endl;
		cout << "2) Add a new event " << endl;
		cout << "3) Exit " << endl;
		cin >> vubir;
		switch (vubir) {
		case 1: {
			vuvestuu(ar, &size);
		}
			  break;

		case 2: {
			dobavuty(arr, &size, g);
			sort(ar, &size);
		}
			  break;
		case 3: {
			ex = false;
		}
			  break;
		default:
			break;
		}

	} while (ex);

	delete[] arr;
	delete[] ar;

	system("pause");
	return 0;
}
