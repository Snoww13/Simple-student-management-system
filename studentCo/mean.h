#pragma warning(disable:4996)
#pragma once
#include <stdio.h>	//printf()
#include<string.h>	//string����
#include<algorithm>	//sort()����
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
	printf("1------------------------��ӡ�б�\n");	//print grade list
	printf("2------------------------���ѧ��\n");	//add new student
	printf("3------------------------�޸�ѧ��\n");//change a student
	printf("4------------------------���ܳɼ�����\n");
	printf("5------------------------��ѧ������\n");
	printf("6------------------------��ʼ�����\n");
	printf("7------------------------�˳�\n");
	p___();
	printf("please intput :~$ ");
}

void listPrintf(deque<student> d)
{

	printf("ѧ���ɼ���Ϊ��\n\n");
	printf("���\t����\tѧ��\t����\t��ѧ\tӢ��\tƽ����\t\n");
	for (int i = 0; i < (int)d.size(); i++)	//������d.size()����ʾworring
	{
		printf("%d\t", i+1);
		printf("%s\t", d.at(i).name.c_str() );    // ����c_str()����
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
	printf("����ѧ��������ѧ��\n");	//�Ƿ����л���ʱ������������룿
	scanf("%s%s",name.c_str(), id.c_str() );
	printf("\n%s(%s)�ĳɼ�(���� ��ѧ Ӣ��)Ϊ:\t\n", name.c_str(), id.c_str());//���س�ȡ����
	float a=0, b=0, c=0;
	scanf("%f%f%f", &a, &b, &c);
	student s(name.c_str(), id.c_str(), a, b, c);
	return s;
}

void changeStudent(deque<student>* d) {	//�β�ʵ�Σ�
	int n;
	printf("�����޸ĵ����:\n");
	scanf("%d", &n);
	(*d).at(n+1) = scanfStudent();
	printf("*******�޸����*******");
}

bool advCompare(student s1, student s2) {	//sort()�ص�����
	return s1.GetAdv() > s2.GetAdv();	//�Ƚ�ƽ��ֵ������
}
void higtAdvLow(deque<student> *d)
{
	printf("*******���ɼ��������*******");
	sort((*d).begin(), (*d).end(), advCompare);
	listPrintf(*d);
}

bool idCompare(student s1, student s2) {	//sort()�ص�����
	return s1.id > s2.id;	//�Ƚ�ƽ��ֵ������
}
void higtIdLow(deque<student> *d)
{
	printf("*******��ѧ���������*******");
	sort((*d).begin(), (*d).end(), idCompare);
	listPrintf(*d);
}