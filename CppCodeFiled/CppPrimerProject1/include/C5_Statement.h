#ifndef STATEMENT_H
#define STATEMENT_H
#include <string>
#include <vector>
using namespace std;

class Statement
{
public:
	Statement(); // 5.1
	~Statement();

private:
	int val = 0;
	int sum = 0;
	const vector<string> scores = {"F", "D", "C", "B", "A", "A++"};

public:
	void CodeScope();																	// 5.2
	bool IfStatement(int grade, string &lettergrade); // 5.3.1
	void Switch();																		// 5.3.2
public:
	void While(const vector<int> &Vi);	 // 5.4.1
	void ForC(const vector<int> Vi);		 // 5.4.2
	void ForRange(const vector<int> Vi); // 5.4.3
	void DoWhile();											 // 5.4.4
public:
	void Break();		 // 5.5.1
	void Continue(); // 5.5.2
public:
	void Throw(); // 5.6.1
	void Try();		// 5.6.2
};

#endif