#include<stdio.h>
int main() {
	typedef struct Student {
		char name[20];
		int number;
	}stu;
	//struct Student{...}ss={ "helloworld",23}; 
		//��ͨ����ֱ�Ӷ��壬ss��һ������Ľṹ��ʵ��

	stu ss = { "helloworld",23 };                  
		//��ͨ��

	//struct Student ss = { "helloworld",23 };  
		//��ͨ��

	//Student ss={ "helloworld",23};            
		//���У����Ǻ�׺����cpp������ 

	printf("typedef-test-c:   %s,%d", ss.name, ss.number);
	getchar();
	return 0;
}