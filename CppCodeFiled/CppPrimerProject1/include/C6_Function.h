#ifndef FUNCTION_H
#define FUNCTION_H
#include <string>
#include <vector>
using namespace std;

class Function
{
public:
	Function();
	~Function();
private:
	static const int Value = 0;
	// bool (*pf) (const string&, const string&); // 定义函数指针
public:
	int fact(int val); // 6.1
	void Usefact();
	int UseLocalStaticObject();// 6.1.1
public:
	void PointerAsParameter(); // 6.2.1
	void ReferenceAsParameter(); // 6.2.2
	void ConstParameter(); // 6.2.3
	void CharAsParameter(); // 6.2.4
public:
	void ReturnVoid(); // 6.3.1
	void ReturnValue(); // 6.3.2
	void ReturnVector(); 
	void ReturnCharPointer(); // 6.3.3
public:
	inline void Inline(); // 6.5.2
public:
	void FunctionPointer(); // 6.7
	bool LengthCompare(const string& str1, const string& str2);
};

#endif // !FUNCTION