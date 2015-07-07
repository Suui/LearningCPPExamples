#pragma once


class ExampleClass
{

public:

	typedef bool(ExampleClass::*Function)();
	Function functionToCall;

	ExampleClass();

	void SetFuncPtr(Function funcPtr);

	bool CheckTrue();

	bool CheckFalse();
};
