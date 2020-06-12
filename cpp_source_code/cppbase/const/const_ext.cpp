#include<iostream>
using namespace std;

const int k = 10; 	//这里的k 仅对const_ext.cpp 可见

extern double pi;

void
PrintK(){
	//const变量 在变异期间把这里的k替换成20
	cout << "in const_ext k " << k << endl;
	cout << "in const_ext pi" <<  " " << pi << endl;
}
