#include <ostream>
#include <iostream>
#include <string>

#include "EmailRepo.h"
#include "EmailRepoBuilder.h"



template<typename Func>
std::string FindMatchingWord(Func func)
{
	std::vector<std::string> words = { "one", "two", "word", "three" };
	for (auto word = words.begin(); word != words.end(); ++word)
	{
		if (func(*word))
			return *word;
	}

	return "";
}


int main()
{
	auto helloWordLambda = []() { std::cout << "Hello World" << std::endl; };
	helloWordLambda();

	EmailRepo emailRepo = EmailRepo();

	std::vector<std::string> orgEmails;
	orgEmails = emailRepo.FindMatchingEmails(
		[](std::string email) { return email.find(".org") != std::string::npos; });

	std::cout << orgEmails[0] << std::endl;

	std::string word = FindMatchingWord(
		[](std::string word) { return word == "word"; });
	std::cout << word << std::endl;

	word = "reset";

	word = emailRepo.FindMatchingWord(
		[](std::string word) { return word == "word"; });
	std::cout << word << std::endl;
}
