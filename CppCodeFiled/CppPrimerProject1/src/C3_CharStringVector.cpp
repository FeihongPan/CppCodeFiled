#include <cstdlib>
#include <iostream>
#include "..\include\C3_CharStringVector.h"

UsingString::UsingString()
{
	string s1;
	string s2 = s1;
	string s3 = "hiya";
	string s4(10, 'c'); // cccccccccc
	string s5(s4);
	string s6("value");
}

UsingString::~UsingString()
{
}

void UsingString::String()
{
	auto ReadString = [&](string s) -> int
	{
		string s1, s2;
		cin >> s1 >> s2;
		cout << s1 << s2 << endl;
		return 0;
	};

	auto Getline = [&]() -> int
	{
		string line;
		while (getline(cin, line))
			cout << line << endl;
		return 0;
	};

	string example = "abc";
	bool isempty = example.empty();
	auto Length = example.size();
	example.resize(5);

	auto Compare = [&]() -> bool
	{
		string str1 = "Hello";
		string str2 = "Hello World";
		string str3 = "Hiya";
		bool isSame = str1 == str2;
		bool isDiff = str2 != str3;
		return (isSame && !isDiff);
	};

	auto Add = [&](string &s1, string &s2) -> string
	{
		s1 = "hello, ";
		s2 = "world\n";
		s1 += s2;

		string s3 = "hello";
		string tmp = s3 + ", ";
		string s4 = s3 + tmp;
		return s4;
	};
}

void UsingString::ProcessingString(){

};

UsingVector::UsingVector()
{
	vector<int> ivec = {0, 1, 2};
	vector<UsingString *> VpUsingString;
	vector<vector<string>> file;
}

UsingVector::~UsingVector()
{
}

void UsingVector::InitVector()
{
	typedef double T;
	vector<T> v1;
	vector<T> v2(v1);
	vector<T> v3 = v1;
	int n = 5;
	double val = 0.;
	vector<T> v4(n, val);
	vector<T> v5(n);
	vector<T> v6{0., 1., 2.};
	vector<T> v7 = {0., 1., 2.};
}

void UsingVector::ListVector()
{
	vector<string> atricles = {"a", "an", "the"};
	vector<string> v1{"a", "an", "the"};
	vector<int> ivec(10, -1);			 // 10 * -1
	vector<string> svec(10, "hi"); // 10 * "hi"
	vector<double> dvec(10);			 // resize
}

void UsingVector::PushBack(vector<int> &v2, vector<string> &text)
{
	for (auto i = 0; i != 100; i++)
		v2.push_back(i);

	string word;
	while (cin >> word)
		text.push_back(word);

	for (auto &i : v2)
		i *= i;
	for (auto i : v2)
		printf("%d", i);
}

void UsingVector::Iterator()
{
	vector<int> v2;
	vector<string> text;
	PushBack(v2, text);
	auto a = v2.begin();
	auto b = text.end();
}

Char::Char()
{
	_sz = 42;
	const auto sz = 42;
	const auto cnt = 42;
	int arr[10];
	int *parr[sz];
	string bad[cnt];
}

Char::~Char()
{
}

void Char::InitChar()
{
	const auto sz = 3;
	int ial[sz] = {0, 1, 2};
	int a2[] = {0, 1, 2};
	int a3[5] = {0, 1, 2};
	string a4[3] = {"a", "b"};

	int *ptrs[10];
}

void Char::PointerChar()
{
	string nums[] = {"1", "2", "3"};
	string *p = &nums[0];
	string *p2 = nums; // p2 = &nums[0]

	int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *ia2(ia);
	auto ia3(&ia[0]);
	ia[4] = 4;

	auto PointerIterator = [&]()
	{
		int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
		int *p = arr; // p to arr[0]
		++p;					// p to arr[1]
	};

	int *beg = begin(ia);
	int *last = end(ia);
}
