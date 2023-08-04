// UseFile 
#include "..\include\CppPrimer.h"
#include "..\include\C2_BasicType.h"
#include "..\include\C3_CharStringVector.h"
#include "..\include\C5_Statement.h"
#include "..\include\C6_Function.h"

CppPrimer::CppPrimer()
{
	pBasicType = new BasicType();
	pUsingString = new UsingString();
	pUsingVector = new UsingVector();
	pChar = new Char();
	pStatement = new Statement();
	pFunction = new Function();

	static vector<int> v1;
	static vector<string> text;
	lettergrade = "";
	value = 10;
}

CppPrimer::~CppPrimer()
{
	if (pBasicType) 
		delete pBasicType;
	if (pUsingString) 
		delete pUsingString;
	if(pUsingVector) 
		delete pUsingVector;
	if(pChar) 
		delete pChar;
	if(pFunction) 
		delete pFunction;
}

void CppPrimer::UseTypeConvert()
{
	auto u = 10.;
	pBasicType->TypeConvert(u);
}

void CppPrimer::UseBasicType()
{
	pBasicType->Reference();
	pBasicType->Pointer();
	pBasicType->Const();
	pBasicType->Constexpr();
	pBasicType->Typedef();
	pBasicType->Auto();
}

void CppPrimer::UseString()
{
	pUsingString->String();
	pUsingString->ProcessingString();
}

void CppPrimer::UseVector()
{
	pUsingVector->InitVector();
	pUsingVector->ListVector();
	pUsingVector->Iterator();
}

void CppPrimer::UseChar()
{
	pChar->InitChar();
	pChar->PointerChar();
}

void CppPrimer::UseStatement()
{
	pStatement->CodeScope();
	pStatement->IfStatement(70, lettergrade);
	pStatement->Switch();
	pStatement->While(Vi);
	pStatement->ForC(Vi);
	pStatement->ForRange(Vi);
	pStatement->DoWhile();
	pStatement->Break();
	pStatement->Continue();
	pStatement->Throw();
	pStatement->Try();
}

void CppPrimer::UseFunction()
{
	pFunction->fact(value);
	pFunction->Usefact();
	pFunction->UseLocalStaticObject();
	pFunction->PointerAsParameter();
	pFunction->ReferenceAsParameter();
	pFunction->ConstParameter();
	pFunction->CharAsParameter();
	pFunction->ReturnVoid();
	pFunction->ReturnValue();
	pFunction->ReturnVector();
	pFunction->ReturnCharPointer();
	// pFunction->Inline();
	pFunction->FunctionPointer();
	pFunction->LengthCompare(str1, str2);
}