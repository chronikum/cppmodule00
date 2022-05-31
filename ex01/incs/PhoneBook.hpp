#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <sstream>
#include <iomanip>
#include "Contact.hpp"

/**
 * Represents the phone book holding the contacts
 */
class PhoneBook {
	private:
		std::string	prompt_user(std::string prompt_message);
	public:
		PhoneBook();
		Contact contact_array[8];
		Contact add(void);
		Contact search();
};

# endif