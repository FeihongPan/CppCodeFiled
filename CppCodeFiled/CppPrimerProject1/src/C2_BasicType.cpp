#include <cstdlib>
#include "..\include\C2_BasicType.h"

BasicType::BasicType()
{
	book = "CppPrimer";
	Ids = vector<double>() = {1.1, 1.2};
	ip1 = (int *)(1);
	ip2 = (int *)(2);
	dp1 = 1.;
	dp2 = nullptr;
}

BasicType::~BasicType()
{
}

void BasicType::TypeConvert(double &u)
{
	while (u > 1.1)
		u = u / 1.2;
	return;
}

void BasicType::Reference()
{
	int iValue = 1024;
	int &refValue = iValue;
}

void BasicType::Pointer()
{
	double dValue;
	double *pd = &dValue;
	double *pd2 = pd;

	int iValue = 42;
	int *p = &iValue;

	int *p1 = nullptr;
	int *p2 = 0;
	int *p3 = NULL;

	int *pi = 0;
	int *pi2 = &iValue;
	if (pi)
		return;
	if (pi2)
		pd2 = (double *)(pi2);
}

int BasicType::Const()
{
	const int j = 42;
	const int ci = 1042;
	const int &r1 = ci;

	const double pi = 3.14;
	const double *ptr = &pi;
	return j;
}

int BasicType::Constexpr()
{
	constexpr int mf = 20;
	constexpr int limit = mf + 1;

	const int *p = nullptr;
	constexpr int *q = nullptr;
	return mf;
}

void BasicType::Typedef()
{
	typedef double wages;
	typedef double base, *p; // p = double*
	wages hourly = 1., weekly = 0.;
	double a = 0.;
	p pdouble = &a;

	using SI = double;
	SI item = 0.;

	typedef std::string *pstring;
	const pstring cstr = nullptr;
	const pstring ps = cstr;
}

void BasicType::Auto()
{
	auto i = 0, *p = &i;

	int b = 0, &r = b;
	auto a = r;
}