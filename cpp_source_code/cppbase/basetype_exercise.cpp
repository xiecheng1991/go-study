#include <iostream>
#include<string>

using namespace std;

string global_str; //初始化成""
int 	global_int;//初始化成0

int 
main( int argc, char* argv[] ) {
	unsigned u = 10, u2 = 42;
	cout << u2 - u << endl; //32
	cout << u - u2 << endl; //42*****64
	int i = 10, i2 = 42;
	cout << i2 - i << endl; //32
	cout << i - i2 << endl; //-32
	cout << i - u << endl; // 0
	cout << u - i << endl; //0

	cout << "2M" << '\n';
	cout << 2 << '\t' << 'M' << '\n';

	cout << "Who goes with F\145rgus?\012";

	cout << global_str << endl;
	cout << global_int << endl;

	int local_int; 		//不会初始化
	string local_str; 	//不会初始化
	cout << local_int << endl;
	cout << local_str << endl;

	return 0;
}
