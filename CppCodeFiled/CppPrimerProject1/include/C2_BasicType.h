#ifndef C2_BASICTYPE_H
#define C2_BASICTYPE_H
#include <string>
#include <vector>
using namespace std;

class BasicType
{
public:
	BasicType();
	~BasicType();

private:
	std::string book; // 2.2.1
	std::vector<double> Ids;
	int *ip1, *ip2;
	double dp1, *dp2;
	const int bufSize = 512;

public:
	void TypeConvert(double &u); // 2.1.2
	void Reference();						 // 2.3.1
	void Pointer();							 // 2.3.2
	int Const();								 // 2.4
	int Constexpr();						 // 2.4.4
	void Typedef();							 // 2.5.1
	void Auto();								 // 2.5.2
};

#endif // !C2_BASICTYPE_H
