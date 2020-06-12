//基本数据类型

#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int
main( int argc, char* argv[] ) {
	unsigned char a = -2;
	printf( "%d\n", a ); 	// 254 负数的补码 按位取反 +1 最后%256 unsigned char的最大范围

	bool b = 42;
	cout << b << endl; 	//非0 为true 0 false

	int i = true; 		//true 为1 false 0
	int j = false;
	cout << i << endl; 
	cout << j << endl;

	unsigned u = 10;
	int ii = -42;
	cout << i + i << endl; 	//42 同类型的

	//执行过程为 先把ii -42转成无符号数
	cout << u + ii << endl; //是向unsigned进行转换 向范围较大的进行转换 所以最后才是4294967264

	//通过以下总结归纳得出 针对于unsigned 来说
	//1. < 0 就是上线 -这个值 u1 = up_limit - a
	//> 范围上限 就是这个值减去这个上限 u1 = a - up_limit
	unsigned u1 = 42, u2 = 10;
	cout << u1 - u2 << endl; //正确 32
	cout << u2 - u1 << endl; //正确 只是 -32%4294967295
	
	u1 = 4294967297;
	cout << u1 << endl; // 1
	
	u1 = 4294967297;
	cout << u1 << endl; //0

	//c++ 11新特性 使用{}赋值和初始化
	int units_sold = 0;
	int units_sold1 = {1}; 	//列表初始化
	int units_sold2( 2 );
	int units_sold3{0}; 	//列表初始化
	cout << units_sold << units_sold1 << units_sold2 << units_sold3 << endl;
	units_sold = {4}; 		//列表赋值
	cout << units_sold << endl;

	//使用{}重要特点 如果存在信息丢失的情况则编译器报错
	auto ld = 3.1415926;
//	int a1{ld}, b1{ld}; //编译错误 long double转换到int会丢失数据所以{}方式会报错
	int c1(ld), d1 = ld;//正确 丢失数据

	/*
	int i1 = {3.14};
	double salary = wage = 9999.99;
	*/

	return 0;
}
