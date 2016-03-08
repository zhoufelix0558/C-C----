#include<stdio.h>
int main() {
	typedef struct Student {
		char name[20];
		int number;
	}stu;
	//struct Student{...}ss={ "helloworld",23}; 
		//能通过，直接定义，ss是一个具体的结构体实例

	stu ss = { "helloworld",23 };                  
		//能通过

	//struct Student ss = { "helloworld",23 };  
		//能通过

	//Student ss={ "helloworld",23};            
		//不行，但是后缀换成cpp就行了 

	printf("typedef-test-c:   %s,%d", ss.name, ss.number);
	getchar();
	return 0;
}