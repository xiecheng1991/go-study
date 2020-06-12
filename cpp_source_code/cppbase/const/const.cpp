#include<iostream>

using namespace std;

void PrintK();

const int k = 20; //这里k仅对const.cpp 可见

extern const double pi = 3.1415926; //所有文件 共享同一个const 对象 在定义时加个extern 而其他文件需要声明该变量 这样只要声明了该变量的文件都可以使用

int
main( int argc, char* argv[] ) {
	const int bufSize = 512; //正确 必须要初始化
//	bufSize = 512; 	//错误 试图修改一个常量的值
//	const int j = get_size(); //正确 运行时初始化
//	const int k = 42; 			//正确 编译时初始化
//	const int l; 			  //错误 未初始化
	
	//const 变量 是在编译时进行代码替换 把这里的k替换成10
	cout << "in const k" << " " << k << endl;
	
	cout << "in const pi" <<  " " << pi << endl;

	PrintK();

	return 0;
}
