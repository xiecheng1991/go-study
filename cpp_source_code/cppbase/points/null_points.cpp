//空指针
#include<iostream>
using namespace std;

//指针和引用 都能提供对其他对象的间接访问
//区别如下
//1. 引用并不是一个对象，一旦定义了引用，就无法再让其绑定到另外对象
//2. 引用必须初始化 指针可以不用初始化(但是这是一个错误的操作)

int
main( int argc, char* argv[] ) {
	//新标准下c++ 最好使用nullptr 同时尽量避免使用NULL
	int* p1 = nullptr; 	//nullptr c++11新特性
	int* p2 = 0; 		//直接将p2初始化为字面常量0
	int* p3 = NULL; 	//等价于 int* p3 = 0;

	int zero = 0;
	int* p = zero; 		//错误: 不能把int变量直接赋值给指针

	//建议: 初始化所有指针

	return 0;
}
