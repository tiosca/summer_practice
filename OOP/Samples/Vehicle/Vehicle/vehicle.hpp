#pragma once
class Vehicle {
private:
	char* _name;
	char* _color;
	int _year;
public:
	Vehicle();
	Vehicle(char* name, char* color, int year);
	~Vehicle();
	char* getName();
	char* getColor();
	int getYear();
	void print();
	void setName(char*);
	void setColor(char*);
	void setYear(int);



};
