#include<stdio.h>
int main() {
	typedef struct Student {
		char name[20];
		int number;
	} stu;

	stu ss = { "helloworld",23 };             
		//��ͨ��

	//struct Student ss = { "helloworld",23 };  
		//��ͨ��

	//Student ss={ "helloworld",23};            
		//��ͨ��

	printf("typedef-test-cpp:    %s,%d", ss.name, ss.number);
	getchar();
	return 0;
}

/*****************************************
���ۣ�typedef struct��struct������
typedef tagMystruct{
int iNumber;
long iLength;}Mystruct;
1.��typedef��ʱ��Mystruct�Ƕ�������
2.û�е�ʱ��Mystruct��һ������Ľṹ��ʵ��

����2��C/C++��struct���������
typedef tagMystruct{
int iNumber;
long iLength;}Mystruct;
1.C�У�����������ṹ�����ķ�����
��1��struct tagMystruct ������
��2��Mystruct ������
2.C++�У�����������ṹ�����ķ�����
��1��struct tagMystruct ������
��2��Mystruct ������
��3��tagMystruct ������
�ɼ�C++�в���������C�����֣�������չ��һ�֡�

*/