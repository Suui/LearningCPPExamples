#include "EmailRepo.h"
#include "EmailRepoBuilder.h"


EmailRepo EmailRepoBuilder::build()
{
	auto addressBook = EmailRepo();

	addressBook.addEmail("not_org@domain.com");
	addressBook.addEmail("yes_org@domain.org");

	return addressBook;
}