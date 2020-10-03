#include "vehicle.hpp"

int main() {

	Vehicle v1;

	v1.print();

	Vehicle v2((char*)"Audi",(char*)"Black",1999);
	v2.print();



	return 0;
}