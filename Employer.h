#include <iostream> // important de retenir de ne pas mettre deux iostrem
#pragma once
using namespace std;
class Employer
{
private:
	int ID;
	char name[21];
	float salary;
	int hours;
	float total;
public:
	void setID(int);
	void setName(char[]);
	void setSalary(float);
	void setHours(int);
	void setTotal(float);
	int getID() { return ID; }
	char* getName() { return name; }
	float getSalary() { return salary; }
	int getHours() { return hours; }
	float getTotal() { return total; }
	float totalSalary();

};

