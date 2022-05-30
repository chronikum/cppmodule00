#include "../incs/PhoneBook.hpp"

/**
 * Adds a new contact
 */
Contact PhoneBook::add(Contact new_contact)
{
    static int lastIndex = 0;
    lastIndex++;
	return new_contact;
}

/**
 * Searches a string in the phone book
 */
Contact *PhoneBook::search(std::string search_string)
{
	(void) search_string;
	return NULL;
}