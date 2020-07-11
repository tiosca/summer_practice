#pragma once
#include <stdio.h>
#include "../utilities/utilities.h"

int vector[100];
bool IsNumberOdd(int n) {
	return ((n % 2) != 0);
}


void exemplu_1(void) {
	int poz, i;
	printVector(vector, 100);

	for (poz = 0, i = 1; poz < 100; i++) {
		if (IsNumberOdd(i)) {
			vector[poz++] = i;
		}
	}
	printVector(vector, 100);
	printf("Found 100 odd numbers !");
}