#include<iostream>

using namespace std;

void test() {
	extern int i = 1;
}

int
main( int argc, char* argv[] ) {
	test();
}
