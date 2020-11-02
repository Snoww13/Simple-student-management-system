#include "student.h"

student::student(void)
{
	name = "ÖÜÃÎç÷";
	id = "undefined";
	grade[Chinese] = 0;
	grade[Math] = 0;
	grade[English] = 0;
	adv = 0;
}

student::student(string Name, string Id) {
	this->name = Name;
	this->id = Id;
};
student::student(string Name, string Id, float a, float b,float c) {
	this->name = Name;
	this->id = Id;
	grade[Chinese] = a;
	grade[Math] = b;
	grade[English] = c;
	adv = (grade[Chinese]+grade[Math]+grade[English])/3;
};

void student::SetGrade(float subject1, float subject2, float subject3)
{
	grade[Chinese] = subject1;
	grade[Math] = subject2;
	grade[English] = subject3;
	adv = (grade[Chinese] + grade[Math] + grade[English]) / 3;
}

float student::GetGrade(int i)
{
	return grade[i];
}

float student::GetAdv()
{
	return adv;
}


