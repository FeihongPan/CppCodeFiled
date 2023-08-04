#include <iostream>
using namespace std;
#include "..\include\Generator.h"
#include "..\include\CppPrimer.h"

void UseFunction()
{
	pCppPrimer->UseTypeConvert();
	pCppPrimer->UseBasicType();
	pCppPrimer->UseString();
	pCppPrimer->UseVector();
	pCppPrimer->UseChar();
	pCppPrimer->UseStatement();
}

int main()
{
	UseFunction();
	cout << "Solved no Problem!" << endl;
	return 0;
}
