#include "ExampleClass.h"
#include <string>
#include <map>
#include <vector>


ExampleClass::ExampleClass()
{
	
	typedef std::vector<Function> FuncVector;
	typedef std::map<std::string, Function> FuncMap;

	FuncVector vector;
	vector.push_back(&ExampleClass::CheckTrue);

	FuncMap map;
	map.insert(std::make_pair("true", &ExampleClass::CheckTrue));
}


void ExampleClass::SetFuncPtr(Function funcPtr)
{
	functionToCall = funcPtr;
}


bool ExampleClass::CheckTrue()
{
	return true;
}


bool ExampleClass::CheckFalse()
{
	return false;
}
