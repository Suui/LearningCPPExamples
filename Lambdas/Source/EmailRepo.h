#pragma once
#include <vector>

class EmailRepo
{
	std::vector<std::string> emails;


public:

	EmailRepo();

	template <typename Function>
	std::vector<std::string> FindMatchingEmails(Function function)
	{
		std::vector<std::string> matchingEmails;

		for (auto email = GetEmails().begin(), lastEmail = GetEmails().end();  email != lastEmail; ++email)
		{
			if (function(*email))
				matchingEmails.push_back(*email);
		}

		return matchingEmails;
	}

	template <typename Func>
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

	void addEmail(std::string email);

	const std::vector<std::string>& GetEmails();
};

