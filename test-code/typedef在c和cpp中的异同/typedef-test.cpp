#include<stdio.h>
int main() {
	typedef struct Student {
		char name[20];
		int number;
	} stu;

	stu ss = { "helloworld",23 };             
		//能通过

	//struct Student ss = { "helloworld",23 };  
		//能通过

	//Student ss={ "helloworld",23};            
		//能通过

	printf("typedef-test-cpp:    %s,%d", ss.name, ss.number);
	getchar();
	return 0;
}

/*****************************************
结论：typedef struct与struct的区别：
typedef tagMystruct{
int iNumber;
long iLength;}Mystruct;
1.有typedef的时候Mystruct是定义类型
2.没有的时候Mystruct是一个具体的结构体实例

结论2：C/C++中struct定义的区别：
typedef tagMystruct{
int iNumber;
long iLength;}Mystruct;
1.C中，声明后申请结构变量的方法：
（1）struct tagMystruct 变量名
（2）Mystruct 变量名
2.C++中，声明后申请结构变量的方法：
（1）struct tagMystruct 变量名
（2）Mystruct 变量名
（3）tagMystruct 变量名
可见C++中不仅兼容了C的两种，而且拓展了一种。

*/