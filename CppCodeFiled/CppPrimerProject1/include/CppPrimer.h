#ifndef CPPPRIMER_H
#define CPPPRIMER_H

#include<string>
#include<vector>

class BasicType;
class UsingString;
class UsingVector;
class Char;
class Statement;
class Function;

class CppPrimer
{
public:
	CppPrimer();
	~CppPrimer();
public:
	std::string lettergrade;
	const std::vector<int>Vi = { 0,2,4,6,8 };
	int value;
	std::string str1;
	std::string str2;
public:
	// 2.
	BasicType* pBasicType = nullptr;
	// 3.
	UsingString* pUsingString = nullptr;
	UsingVector* pUsingVector = nullptr;
	Char* pChar = nullptr;
	// 5.
	Statement* pStatement = nullptr;
	// 6.
	Function* pFunction = nullptr;

public:
	// 2.
	void UseTypeConvert();
	void UseBasicType();
	// 3.
	void UseString();
	void UseVector();
	void UseChar();
	// 5.
	void UseStatement();
	// 6.
	void UseFunction();
};

#endif // !CPPPRIMER_H