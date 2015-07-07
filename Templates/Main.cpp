#include <vector>
#include <map>


bool CheckTrue()
{
	return true;
}


bool CheckFalse()
{
	return false;
}


int main()
{
	typedef bool(*function)();
	typedef std::vector<function> FuncVector;
	typedef std::map<function, std::string> FuncMap;

	FuncVector vector;
	vector.push_back(&CheckTrue);

	FuncMap map = { { &CheckTrue, "true" } };
	map[&CheckTrue] = "true";

	return 0;
}