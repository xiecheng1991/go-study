#include<iostream>

using namespace std;
//int i = 42;
int i = 100,sum = 0;
int
main( int argc, char* argv[] ) {
	/*
	int i = 100; //屏蔽全局的i
	int j = i;
	cout << j << endl; //100
	*/
	for ( int i = 0; i != 10; ++i ) { //这里的i屏蔽全局的i
		sum += i;
	}
	cout << sum << endl; 	//45
	return 0;
}
