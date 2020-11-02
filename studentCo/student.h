#pragma once
#ifndef _STUDENT_H_
#define _STUDENT_H_

#include<string>
using namespace std;

enum subject{Chinese=0, Math, English};
class student
{
public:
	string name;
	string	id;	//Ñ§ºÅ

	student(void);
	student(string Name, string Id);
	student(string Name, string Id, float a, float b, float c);
	void SetGrade(float subject1, float subject2, float subject3);
	float GetGrade(int i);
	float GetAdv();
private:
	//char name[20];
	float grade[3];
	float adv;
};



#endif // !_STUDENT_H_
