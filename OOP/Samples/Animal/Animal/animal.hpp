#pragma once


class Animal {
private:
	int _age;
	char* _nume;
	float _weight;
	static int counter;
public:
	Animal();
	Animal(int age, char* nume, float weight);
	~Animal();

	void setAge(int age);
	void setNume(char* nume);
	void setWeight(float weight);

	int getAge();
	static int getCounter();
	char* getNume();
	float getWeight();

	void print();

};