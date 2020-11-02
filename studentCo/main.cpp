#include<deque>  
#include "student.h"
#include "mean.h"

int main(int argc, char *argv[])
{
	student s0("学生甲", "2018001", 82, 75, 74);
	student s1("学生乙", "2018002", 80, 78, 65);
	student s2("学生丙", "2018003", 73, 75, 90);
	student s3("学生丁", "2018004", 60, 75, 95);
	student s4("路人甲", "2018005", 68, 72, 65);
	student s5("路人乙", "2018006", 85, 85, 85);
	//	deque<student> d;//声明在maen.h
	deque<student> D;
	D.push_back(s0); 
	D.push_back(s1); 
	D.push_back(s2); 
	D.push_back(s3); 
	D.push_back(s4);
	D.push_back(s5);

	deque<student> d;
	d.assign(D.begin(), D.end());
	int older = -1;
	while (1) {
		mean();
		scanf("%d", &older);
		switch (older) {
		case 1:    listPrintf(d); break;	//1--打印列表
		case 2:	   d.push_back( scanfStudent() ); break;	//2--添加学生
		case 3:	   changeStudent(&d); break;	//3--修改学生
		case 4:    higtAdvLow(&d); break;	//4--按总成绩排序
		case 5:    higtIdLow(&d); break;	//5--按学号排序
		case 6:    d.assign(D.begin(), D.end()); break;
		case 7:    return 0; break;	//5--退出
		default:    break;
		}
	}

	return 0;
}
