//不定长参数输入-函数
//函数的第一项不能为...,必须是个基本的数据类型
//prinf的实现 int __cdecl printf(const char*_Format,...)


#include<string>
#include<stdarg.h>
#include<stdio.h>

float average(int n_values, ...) {
	va_list var_arg;
	int count;
	float sum=0;
	va_start(var_arg, n_values);
	for (count = 0; count < n_values; count++) {
		int tmp = va_arg(var_arg, int);
		sum += tmp;
	}
	va_end(var_arg);
	return sum / n_values;

}


int main() {
	float res;
	res= average(5, 3, 4, 5, 6, 7);
	printf("jieguoshi %f\n", res);
	getchar();
	return 0;
}