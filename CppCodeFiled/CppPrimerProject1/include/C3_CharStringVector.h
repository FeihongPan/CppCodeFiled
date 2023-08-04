#ifndef CHARSTRINGVECTOR_H
#define CHARSTRINGVECTOR_H
#include <string>
#include <vector>
using namespace std;

class UsingString
{
public:
	UsingString(); // 3.2.1
	~UsingString();

public:
	void String();					 // 3.2.2
	void ProcessingString(); // 3.2.3
};

class UsingVector
{
public:
	UsingVector();
	~UsingVector();

public:
	void InitVector();
	void ListVector();
	void PushBack(vector<int> &v2, vector<string> &text);
	void Iterator();
};

class Char
{
public:
	Char();
	~Char();

private:
	const unsigned int _cnt = 42;
	unsigned int _sz;

public:
	void InitChar();
	void PointerChar();
};

#endif // !CHARSTRINGVECTOR_H