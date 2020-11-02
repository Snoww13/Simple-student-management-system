#pragma once
#include <iostream>
using namespace std;

template<class T>
class List
{
public:
	List(T d)//赋值
	{
		data = d;
		next = NULL;
	}
	void add(List* node)//增加一个 node 节点
	{
		node->next = this;
		next = NULL;
	}
	List* getnext(){ 
		return next; 
	}//返回一个结点

	T getdata(){ 
		return data;
	}//返回一个 data 值

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

