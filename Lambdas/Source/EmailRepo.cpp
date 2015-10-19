#include "EmailRepo.h"


EmailRepo::EmailRepo()
{
	emails.push_back("not_org@domain.com");
	emails.push_back("yes_org@domain.org");
}


void EmailRepo::addEmail(std::string email)
{
	emails.push_back(email);
}

const std::vector<std::string>& EmailRepo::GetEmails()
{
	return emails;
}
