#include<iostream>

using namespace std;

int
main( int argc, char* argv[] ) {
	double dval;
	double* pd = &dval; 	//正确
	double* pd2 = pd; 		//正确
	
	int* pi = pd; 	//错误指针类型不同
	pi = &dval; 	//错误指针类型不同

	//void* 类型的指针
	double obj = 3.14, *od = &obj;
	void* pv = &obj; //正确 可以接受任何类型的指针
	pv = pd;

	return 0;
}
