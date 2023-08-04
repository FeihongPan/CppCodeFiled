#include <cstdlib>
#include <iostream>
#include "..\include\C6_Function.h"

Function::Function()
{
	
}

Function::~Function()
{

}

int Function::fact(int val)
{
	int returnValue = 1;
	while (val > 1) returnValue *= val--;
	return returnValue;
}

void Function::Usefact()
{
	int j = this->fact(5);
	printf("%d", j);
}

int Function::UseLocalStaticObject()
{
	return Value;
}

void Function::PointerAsParameter()
{
	int n = 0, i = 42;
	int* p = &n, * q = &i; // p 指向了 n
	*p = 42; // n 的值改变，p 不变

	auto reset = [&](int* ip)
	{
		*ip = 0; // 改变了 ip 所指的对象的值，ip 不变
		ip = nullptr; // 只改变了 ip 的局部拷贝，实参不变
	};
}

void Function::ReferenceAsParameter()
{
	auto reset = [&](int& i) -> auto
	{
		i = 0;
	};

	auto Usereset = [&]() -> auto
	{
		int j = 42;
		reset(j);
		printf("%d", j); // j = 0
	};

	// 当函数无需修改引用形参的值时，最好将其声明为 const 引用
	auto isShorter = [&](const string& s1, const string& s2) -> bool
	{
		return s1.size() < s2.size();
	};
}

void Function::ConstParameter()
{
	auto isSentence = [&](const string& s) -> bool
	{
		return s == "";
	};
}

void Function::CharAsParameter()
{
	auto print0 = [&](const int*) {};
	auto print1 = [&](const int[]) {};
	auto print2 = [&](const int[10]) {}; // 一个意思

	// 标记指定数组长度
	auto print3 = [&](const char* cp)
	{
		if (cp)
			while (*cp)
				printf("%d", *(cp++));
	};

	// 使用标准库规范
	auto print4 = [&](const int* beg, const int* end)
	{
		while (beg != end)
			printf("%d", *beg++);
	};

	int j[2] = { 0,1 };
	print4(begin(j), end(j));

	// 显示传递一个数组大小的形参	
	auto print5 = [&](const int ia[], int size)
	{
		for (int i = 0; i != size; i++)
		{
			printf("%d", ia[i]);
		}
	};
	
	int j1[] = { 0,1 };
	print5(j, end(j) - begin(j));

	// 数组引用形参
	auto print6 = [&](const int(&arr)[10])
	{
		for (auto elem : arr)
			printf("%d", elem);
	};

	int k[] = { 0,1,2,3,4,5,6,7,8,9 };
	print6(k);
}

void Function::ReturnVoid()
{
	auto swap = [&](int& v1, int& v2)
	{
		if (v1 == v2)
			return;
		else
		{
			int temp = v2;
			v2 = v1;
			v1 = temp;
		}
	};

	int a = 1, b = 2;
	swap(a, b);
}

void Function::ReturnValue()
{
	auto StrSubRange = [&](const string& str1, const string& str2)
	{
		if (str1.size() == str2.size())
			return str1 == str2;
		auto size = (str1.size() < str2.size()) ? str1.size() : str2.size();
		for (auto i = 0; i < size; i++)
		{
			if (str1[i] != str2[i])
				return false;
		}
	};

	// 返回引用只能返回所引对象的别名
	auto ShorterString = [&](const string& s1, const string& s2) -> const string&
	{
		return s1.size() <= s2.size() ? s1 : s2;
	};
}

void Function::ReturnVector()
{
	string* str1 = nullptr;
	string* str2 = nullptr;

	auto Process = [&]() -> vector<string>
	{
		if (str1->empty())
			return {};
		else if (str1 == str2)
			return { "XXX", "OK" };
		else
			return { "XXX", *str1 ,*str2 };
	};
}

void Function::ReturnCharPointer()
{
	typedef int arrT[10]; // arrT是一个类型别名，包含10个
	using arrT = int[10];
	
	auto func = [&](int i) -> arrT*
	{
		int arr[10] = {};
		int* p1[10] = {};
		int(*p2)[10] = &arr;
		return p2;
	};
}

void Function::Inline()
{
	return;
}

bool Function::LengthCompare(const string& str1, const string& str2)
{
	if (str1.size() < str2.size())
		return false;
	else if (str1.size() > str2.size())
		return true;
	else
		return false;
}

void Function::FunctionPointer()
{
	// pf = &LengthCompare;
}
