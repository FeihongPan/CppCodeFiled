#include <cstdlib>
#include <iostream>
#include "..\include\C5_Statement.h"

Statement::Statement()
{
	while (val <= 10)
	{
		sum += val;
		++val;
	}
}

Statement::~Statement()
{
}

void Statement::CodeScope()
{
	vector<int> v = {0, 1, 2};
	auto beg = v.begin();
	while (beg != v.end() && *beg > 0)
		++beg;
	if (beg == v.end())
		return;
}

bool Statement::IfStatement(int grade, string &lettergrade)
{
	if (grade <= 0)
		return false;
	else
	{
		{
			if (grade < 60)
				lettergrade = scores[0];
			else
				lettergrade = scores[(grade - 50) / 10];
		}
		return true;
	}
}

void Statement::Switch()
{
	const vector<int> List = {0, 1, 2, 3, 4};
	const auto num = 5;
	switch (num)
	{
	case 1:
	case 2:
	case 3:
		printf("Solver succesed");
		break;
	case 0:
	case 4:
		printf("no problem");
		break;
	default:
		printf("solver failed");
		break;
	}
}

void Statement::While(const vector<int> &Vi)
{
	vector<int> v;
	int i = 0;
	while (i < Vi.size())
	{
		v.emplace_back(Vi[i]);
		++i;
	}
}

void Statement::ForC(const vector<int> Vi)
{
	vector<int> v;
	for (auto i = 0; i < Vi.size(); i++)
		v.emplace_back(Vi[i]);
}

void Statement::ForRange(const vector<int> Vi)
{
	vector<int> v;
	for (auto &r : Vi)
		v.emplace_back(r);
}

void Statement::DoWhile()
{
	auto i = 0;
	do
	{
		printf("i < 5");
		i++;
	} while (i < 5);
}

void Statement::Break()
{
	const vector<int> Vi = {0, 2, 4, 6, 7, 8};
	vector<int> v;
	for (auto &r : Vi)
	{
		v.emplace_back(r);
		if (v.size() >= 3)
		{
			printf("solver finished");
			break;
		}
	}
}

void Statement::Continue()
{
	const vector<int> Vi = {0, 2, 4, 6, 7, 8};
	vector<int> v;
	for (auto &r : Vi)
	{
		if (r % 2 != 0)
			continue;
		v.emplace_back(r);
	}
}

void Statement::Throw()
{
}

void Statement::Try()
{
}
