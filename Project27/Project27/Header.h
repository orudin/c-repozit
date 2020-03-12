#pragma once
#include <string>
#include "Source.cpp"

using namespace std;

struct zapusnyc {
	string event;
	string zagolovoc;
	string opus;
	int day;
	int goduna;
	int vagluvist;


};



void dobavuty(zapusnyc* arr, int* size, int& g);

void sort(zapusnyc** ar, int* size);

void vuvestuu(zapusnyc** ar, int* size);
