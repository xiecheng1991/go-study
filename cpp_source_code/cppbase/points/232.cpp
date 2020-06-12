//2.3.2节练习题

#include<iostream>
using namespace std;

//指针和引用的区别 练习2.19
//1. 指针是个对象 引用不是对象
//2. 指针可以不用初始化(不好的做法) 引用必须要初始化
//3. 指针可以更改指向的对象，引用不能更改引用对象
//4. 指针可以定义指针的指针(2级指针) 引用却不能定义引用的引用(2级引用)
//5. 可以定义指向指针的引用 但是不能定义指向引用的指针( 指针是对象 引用不是对象 )

int
main( int argc, char* argv[] ) {
	//2.18 编写更改指针的值和指针所指的对象
	int a = 10;
	int* pa = &a;
	*pa = 20;
	cout << a << endl;

	int b = 30;
	pa = &b;
	cout << *pa << endl;

	//练习2.20 对i求平方
	int i = 42;
	int *pi = &i;
	*pi = *pi * *pi;
	cout << i << endl;

	//练习2.21
	/*
	int j = 0;
	double* dp = &j; 	//错误 指针类型和目标类型不同
	int* ip = j; 		//错误 把一个整形赋值给了指针
	int* p = &j; 		//正确
	*/

	//练习2.22
	//if( p ) //判断p是否是非空指针 转换成bool类型 P = 0//p = NULL//p = nullptr 都为false
	//if ( *p ) //判断*p指向的内容是否非0 0为false 非0为true
	
	//练习2.23
	//给定一个指针 如果为空肯定是非法的
	//如果不为空 就不能判断是否非法 所以需要初始化指针
	//

	//练习2.24
	int l = 42;
	void* pv = &i; 	//合法 因为void* 类型可以接收任意类型的指针
	long* lp = &i;  //非法 lp只能接收long型变量的地址

	int* p1, p2; 	//p1是指针 p2是对象 int类型的对象


	return 0;
}
