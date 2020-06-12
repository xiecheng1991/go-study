#include<iostream>
using namespace std;

int
main( int argc, char* argv[] ) {
	/*
	int ival = 1.01; 	//正确ival = 1;
	int &rval1 = 1.01; //错误 1. 不能绑定不同类型的 2 不能绑定字面值
	int &rval2 = ival; //正确 rval2 绑定到ival上为1
	int &&rval3; 	//错误 必须要初始化
	int i = 0, &r1 = i;
	double d =0, &r2 = d;
	r2 = 3.1415926; //正确
	cout << r2 << endl;
	r2 = r1; 	//正确 r2 = 0
	cout << r2 << endl;
	i = r2;		//正确i=0
	cout << i << endl;
	r1 = d; 	//正确r1 = 0 i = 0
	cout << r1 << endl;
	*/
	int i, &ri = i;
	i = 5; ri = 10;
	cout << i << " " << ri << endl; //cout 10 10
	return 0;

}
