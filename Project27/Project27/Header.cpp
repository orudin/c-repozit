#include "Header.h"
#include <iostream>
#include <string>
#include <Windows.h>
#include "Source.cpp"

using namespace std;

#define gre SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
#define yell SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
#define fonn SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
#define re  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);


struct zapusnyc {
	string event;
	string zagolovoc;
	string opus;
	int day;
	int goduna;
	int vagluvist;


};




void dobavuty(zapusnyc* arr, int* size, int& g)
{
	cout << "Enter event" << endl;
	cin >> arr[g].event;
	cout << " Enter title" << endl;
	cin >> arr[g].zagolovoc;
	cout << "Enter description " << endl;
	cin >> arr[g].opus;
	cout << "Enter day " << endl;
	cin >> arr[g].day;
	cout << "Enter Time " << endl;
	cin >> arr[g].goduna;
	cout << " Enter importance" << endl;
	cin >> arr[g].vagluvist;
	g++;
	*size = g;
}

void sort(zapusnyc** ar, int* size)
{
	for (int i = 0; i < *size; i++)
	{
		for (int j = 0; j < *size - i - 1; j++)
		{
			if (ar[j]->day > ar[j + 1]->day)
			{
				zapusnyc* temp = ar[j];
				ar[j] = ar[j + 1];
				ar[j + 1] = temp;

			}
		}
	}
}

void dobavuty(zapusnyc* arr, int size, int& g)
{
}

void sort(zapusnyc** ar, int *size)
{
}

void vuvestuu(zapusnyc** ar, int *size)
{
	for (int i = 0; i < *size; i++)
	{
		if (ar[i]->vagluvist == 1) {
			gre
				cout << "Event" << ar[i]->event << endl;
			cout << " Title" << ar[i]->zagolovoc << endl;
			cout << "Description " << ar[i]->opus << endl;
			cout << "Day " << ar[i]->day << endl;
			cout << " Time " << ar[i]->goduna << endl;
			cout << " Importance" << ar[i]->vagluvist << endl;
			cout << endl << endl;
			fonn
		}
		else if (ar[i]->vagluvist == 2) {
			yell
				cout << "Event" << ar[i]->event << endl;
			cout << " Title" << ar[i]->zagolovoc << endl;
			cout << "Description " << ar[i]->opus << endl;
			cout << "Day " << ar[i]->day << endl;
			cout << " Time " << ar[i]->goduna << endl;
			cout << " Importance" << ar[i]->vagluvist << endl;
			cout << endl << endl;
			fonn

		}
		else if (ar[i]->vagluvist == 3) {
			re
				cout << "Event" << ar[i]->event << endl;
			cout << " Title" << ar[i]->zagolovoc << endl;
			cout << "Description " << ar[i]->opus << endl;
			cout << "Day " << ar[i]->day << endl;
			cout << " Time " << ar[i]->goduna << endl;
			cout << " Importance" << ar[i]->vagluvist << endl;
			cout << endl << endl;
			fonn
		}
		else {

			cout << "Event" << ar[i]->event << endl;
			cout << " Title" << ar[i]->zagolovoc << endl;
			cout << "Description " << ar[i]->opus << endl;
			cout << "Day " << ar[i]->day << endl;
			cout << " Time " << ar[i]->goduna << endl;
			cout << " Importance" << ar[i]->vagluvist << endl;
			cout << endl << endl;

		}
	}
}
