#pragma once
#include <stdio.h>
struct Person
{
	int Age;
	int Height;
};
void Init(Person* p)
{
	p->Age = 10;
	p->Height = 100;
}
void SetAge(Person* p, int value)
{
	if ((value > 0) && (value < 200))
		p->Age = value;

}
void SetHeight(Person* p, int value)
{
	if ((value > 50) && (value < 300))
		p->Height = value;

}

void Write(Person* p) {
	printf("Age: %d\nHeight: %d\n\n", p->Age, p->Height);
}

void exemplu_4()
{
	Person p;
	Write(&p);

	Init(&p);
	Write(&p);

	SetAge(&p, -5);
	Write(&p);

	SetHeight(&p, 100000);
	Write(&p);

	Person*p1 = new Person;
	Write(p1);
}