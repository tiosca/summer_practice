#pragma once
#include <iostream>

void printMessage(char* msg) {
	printf("%s", msg);
}

void exemplu_2(){
	std::cout << sizeof(int) << std::endl;
	int* p;
	{
		int* a = new int(5);
		p = a;
	}

	std::cout << p << std::endl;
	std::cout << *p << std::endl;
	printMessage((char*)"Hello world");
}