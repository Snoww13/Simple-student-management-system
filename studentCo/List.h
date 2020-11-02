#pragma once
#include <iostream>
using namespace std;

template<class T>
class List
{
public:
	List(T d)//��ֵ
	{
		data = d;
		next = NULL;
	}
	void add(List* node)//����һ�� node �ڵ�
	{
		node->next = this;
		next = NULL;
	}
	List* getnext(){ 
		return next; 
	}//����һ�����

	T getdata(){ 
		return data;
	}//����һ�� data ֵ

	void destroy() {
		if (this != NULL) {
			delete this;
			next = NULL;
		}
	}

private:
	T  data;
	List* next;
};

