#pragma warning(disable:4996)
#pragma once
#include <stdio.h>	//printf()
#include<string.h>	//string类型
#include<algorithm>	//sort()排序
//#include<deque>  
#include "student.h"
using namespace std;

void p___(void)
{
	printf("_____________________________\n");
	printf("-----------------------------\n");
}

void mean(void)
{
	p___();
	printf("1------------------------打印列表\n");	//print grade list
	printf("2------------------------添加学生\n");	//add new student
	printf("3------------------------修改学生\n");//change a student
	printf("4------------------------按总成绩排序\n");
	printf("5------------------------按学号排序\n");
	printf("6------------------------初始化表格\n");
	printf("7------------------------退出\n");
	p___();
	printf("please intput :~$ ");
}

void listPrintf(deque<student> d)
{

	printf("学生成绩单为：\n\n");
	printf("序号\t姓名\t学号\t语文\t数学\t英语\t平均分\t\n");
	for (int i = 0; i < (int)d.size(); i++)	//编译器d.size()会提示worring
	{
		printf("%d\t", i+1);
		printf("%s\t", d.at(i).name.c_str() );    // 调用c_str()函数
		printf("%s\t", d.at(i).id.c_str() );
		printf("%g\t", d.at(i).GetGrade(0) );
		printf("%g\t", d.at(i).GetGrade(1) );
		printf("%g\t", d.at(i).GetGrade(2) );
		printf("%g\t", d.at(i).GetAdv() );
		printf("\n");
	}
}
student scanfStudent() {
	string name, id;
	printf("输入学生姓名及学号\n");	//是否在切换的时候可以正常输入？
	scanf("%s%s",name.c_str(), id.c_str() );
	printf("\n%s(%s)的成绩(语文 数学 英语)为:\t\n", name.c_str(), id.c_str());//按回车取消吗
	float a=0, b=0, c=0;
	scanf("%f%f%f", &a, &b, &c);
	student s(name.c_str(), id.c_str(), a, b, c);
	return s;
}

void changeStudent(deque<student>* d) {	//形参实参？
	int n;
	printf("输入修改的序号:\n");
	scanf("%d", &n);
	(*d).at(n+1) = scanfStudent();
	printf("*******修改完成*******");
}

bool advCompare(student s1, student s2) {	//sort()回调函数
	return s1.GetAdv() > s2.GetAdv();	//比较平均值来排序
}
void higtAdvLow(deque<student> *d)
{
	printf("*******按成绩排序完成*******");
	sort((*d).begin(), (*d).end(), advCompare);
	listPrintf(*d);
}

bool idCompare(student s1, student s2) {	//sort()回调函数
	return s1.id > s2.id;	//比较平均值来排序
}
void higtIdLow(deque<student> *d)
{
	printf("*******按学号排序完成*******");
	sort((*d).begin(), (*d).end(), idCompare);
	listPrintf(*d);
}