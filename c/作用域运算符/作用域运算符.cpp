#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//using namespace std;


int atk = 200;

int main()
{
	//cout << "hello world!" << endl;

	int atk = 100;
	std::cout << "atk = " << atk << std::endl;

	std::cout << "atk = " << ::atk << std::endl;

	return EXIT_SUCCESS;

}